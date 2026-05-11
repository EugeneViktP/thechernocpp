// Arrays_30.cpp :
//

#include <iostream>

class Entity
{
public:

    static const int size = 5;
    
    int example[size];

    Entity()
    {
        int a[5];
        int count = sizeof(a) / sizeof(int);
        
        for (int i = 0; i < size; i++)
        {
            example[i] = 2;
        }
    }
};


int main()
{    
    Entity e;
    
    /*int* another = new int[5];
    for (int i = 0; i < 5; i++)
    {
        another[i] = 2;
    }
    delete[] another;*/


    
    std::cin.get();
}

