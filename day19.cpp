#include <iostream>
#include <fstream> // For file handling
#include <string>

int main() {
    // Declare file stream object for writing
    std::ofstream outFile("details.txt"); // Opens file in write mode
    
    // Check if file is open
    if (!outFile) {
        std::cerr << "File could not be opened for writing." << std::endl;
        return 1;
    }

    // Write details to the file
    std::string name = "Prannessh KVA";
    std::string regNo = "12315207";
    std::string course = "B.Tech Computer Science Engineering";
    std::string university = "Lovely Professional University";
    std::string section = "K23SR";
    
    outFile << "Name: " << name << std::endl;
    outFile << "Registration No: " << regNo << std::endl;
    outFile << "Course: " << course << std::endl;
    outFile << "University: " << university << std::endl;
    outFile << "Section: " << section << std::endl;

    // Close the file
    outFile.close();

    // Now read the content from the file and print it
    std::ifstream inFile("details.txt"); // Opens file in read mode
    if (!inFile) {
        std::cerr << "File could not be opened for reading." << std::endl;
        return 1;
    }

    // Read and print content from the file
    std::string line;
    while (getline(inFile, line)) {
        std::cout << line << std::endl;
    }

    // Close the file
    inFile.close();

    return 0;
}
#include <iostream>
#include <fstream> // For file handling
#include <string>

int main() {
    // Declare file stream object for reading
    std::ifstream inFile("sample.txt"); // Replace with your txt file

    // Check if file is open
    if (!inFile) {
        std::cerr << "File could not be opened." << std::endl;
        return 1;
    }

    // Read content from the file and print to the terminal
    std::string line;
    while (getline(inFile, line)) {
        std::cout << line << std::endl;
    }

    // Close the file
    inFile.close();

    return 0;
}
