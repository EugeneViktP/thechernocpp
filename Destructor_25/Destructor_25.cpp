// Constructor_24.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


class Entity
{
public:
    float X, Y;


    Entity()
    {
        X = 0.0f;
        Y = 0.0f;

        std::cout << "Created Entity!" << std::endl;
    }

    Entity(float x, float y)
    {
        X = x;
        Y = y;
    }

    ~Entity()
    {
        std::cout << "Destroyed Entity!" << std::endl;
    }

    void Print()
    {
        std::cout << X << ", " << Y << std::endl;
    }
};

void Function()
{
    Entity e;
    e.Print();
}

int main()
{
    Function();

    std::cin.get();
}
