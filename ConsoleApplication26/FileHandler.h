#pragma once
class FileHandler {
public:
    void processFile(const std::string& filename) {
        std::ifstream file;
        int value;

        file.open(filename);
        if (!file.is_open()) {
            throw std::runtime_error("Error: File does not exist.");
        }
        std::cout << "File opened successfully: " << filename << std::endl;


        file >> value;
        if (file.fail()) {
            throw std::runtime_error("Error: Failed to read value from file.");
        }


        if (value < 0) {
            throw std::invalid_argument("Error: Value cannot be negative.");
        }
        std::cout << "Value read from file: " << value << std::endl;

        file.close();
    }
};