// Visibility_29.cpp : 
//

#include <iostream>
#include <string>

class Entity
{
protected:
    int X, Y;
    void print()
    {
        std::cout << "Hello" << std::endl;
    }
public:
    Entity()
    {
        X = 0;
    }
};

class Player : public Entity
{
public:
    Player()
    {
        X = 2;
        print();
    }
};

int main()
{
    Entity e;
    //e.X = 2; This doesn't work due to visibility issues
    //e.print();

    std::cin.get();
}

