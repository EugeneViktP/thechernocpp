// Lesson_22.cpp 
#include <iostream>

struct Entity
{
    static int x, y;
    static void Print()
    {
        std::cout << x << ", " << y << std::endl;
    }
};

int Entity::x;
int Entity::y;

int main()
{
    //Entity e;
    Entity::x = 2;
    Entity::y = 3;


    /*Entity e1;

    e1.x = 5;
    e1.y = 8;

    Entity::Print();*/
    Entity::Print();
    
    std::cin.get();
}

