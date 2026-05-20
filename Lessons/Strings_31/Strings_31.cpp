// Strings_31.cpp : 
//

#include <iostream>
#include <string>


void PrintString(const std::string& string)
{
    std::cout << string << std::endl;
}

int main()
{
    std::string name = std::string("Cherno") + " hello!";
    PrintString(name);
    bool contains = name.find("no") != std::string::npos;
    std::cout << name << std::endl;
    
    std::cin.get();
}

