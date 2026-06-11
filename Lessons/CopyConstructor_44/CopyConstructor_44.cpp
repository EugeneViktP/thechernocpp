// CopyConstructor_44.cpp :
//

#include <iostream>
#include <string>




struct Vector2
{
    float x, y;
};

int main()
{
    
    Vector2* a = new Vector2();
    Vector2 b = a;
    b.x = 5;


    std::cin.get();
}
