// ConsoleApplication26.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <string>
#include <iostream>
#include <fstream>
#include <stdexcept>
#include "Human.h"
#include "TXTFile.h"
#include "JSONFile.h"
#include "File.h"
#include "FileHandler.h"
void handleFile(File* file) {
    file->open();  


    if (TXTFile* txt = dynamic_cast<TXTFile*>(file)) {
        txt->readText();  // Работа с .txt файлом
    }
    else if (JSONFile* json = dynamic_cast<JSONFile*>(file)) {
        json->parseJson();  
    }
    else {
        std::cout << "Unknown file type\n";
    }
}
int main()
{
    Human h(192.00, 67.5);
    std::cout << calcIMB(h)<<"\n";

    File* f1 = new TXTFile();
    File* f2 = new JSONFile();

    handleFile(f1);
    handleFile(f2);

    FileHandler fh;

    try {
        fh.processFile("existing_file.txt"); 
    }
    catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl; 
    }
    catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl; 
    }



    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
