#pragma once
#include "File.h"
class TXTFile: public File {
public:
    void open() override {
        std::cout << "Opening .txt file\n";
    }

    void readText() {
        std::cout << "Reading text content\n";
    }
};