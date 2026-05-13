// String_literals_32.cpp : 
//

#include <iostream>
#include <string>

#include <stdlib.h>

int main()
{
    using namespace std::string_literals;
    
    std::string name0 = "Cherno"s + "hello";
    
    
    const char* name = "Cherno";
    const wchar_t* name2 = L"Cherno";
    const char16_t* name3 = u"Cherno";
    std::cout << name << std::endl;
    
    std::cin.get();
}
