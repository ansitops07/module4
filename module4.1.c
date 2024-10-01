#include <fstream>
#include <iostream>

int main() {
    std::ifstream file("example.txt"); // Open the file
    if (!file) {
        std::cerr << "Error opening the file!" << std::endl;
        return 1;
    }

    std::string line; // Declare a string variable to store each line of the file
    std::cout << "File Content: " << std::endl;
    while (std::getline(file, line)) {
        std::cout << line << std::endl; // Print the current line
    }

    file.close(); // Close the file
    return 0;
}
