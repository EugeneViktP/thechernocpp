// Arrays_30.cpp :
//

#include <iostream>

int main()
{
    int example[5];

    int* ptr = example;

    for (int i = 0; i < 5; i++)
    {
        example[i] = 2;
    }

    example[2] = 5;

    *(ptr + 2) = 6;
    /*example[0] = 2;
    example[4] = 4;

    std::cout << example[0] << std::endl;
    std::cout << example << std::endl;*/


    
    std::cin.get();
}

