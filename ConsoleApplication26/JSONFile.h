#pragma once
#include "File.h"
class JSONFile: public File {
public:
    void open() override {
        std::cout << "Opening .json file\n";
    }

    void parseJson() {
        std::cout << "Parsing JSON content\n";
    }
};