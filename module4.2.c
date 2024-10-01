#include <stdio.h>
#include <stdlib.h>

#define FILENAME "example.txt"

void writeToFile(const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("file for writing");
        return;
    }

    char input[100];
    printf("Enter some text to write to the file: ");
    fgets(input, sizeof(input), stdin);

    fprintf(file, "%s", input);
    fclose(file);
    printf("Data written to %s\n", filename);
}

void readFromFile(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("file for reading");
        return;
    }

    char buffer[100];
    printf("Reading from %s:\n", filename);
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    fclose(file);
}

int main() {
    writeToFile(FILENAME);
    readFromFile(FILENAME);
    return 0;
}
