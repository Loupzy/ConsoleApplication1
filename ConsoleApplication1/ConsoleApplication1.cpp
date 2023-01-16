

#include <iostream>
#include <fstream>
#define MAXSIZE 128

int main()
{
    std::cout << "Abriendo " << std::endl;

    std::ifstream file;
    file.open("datos.txt", std::ifstream::in);

    if (file.is_open()) {
        std::cout << "ya abierto\n";
        char buffer[MAXSIZE];
        while (!file.eof()) {
            file.getline(buffer, MAXSIZE);
            std::cout << buffer << std::endl;
        }
    } 
    else {
        std::cout << "no se encontro el archivo\n";
    }
    
}


