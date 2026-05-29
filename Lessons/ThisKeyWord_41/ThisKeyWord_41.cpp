// ThisKeyWord_41.cpp : 
//

#include <iostream>

void PrintEntity(Entity* e);

class Entity
{
public:
    int x, y;

    Entity(int x, int y)
    {
        this->x = x;
        this->y = y;
        PrintEntity(this);
    }

    int GetX() const
    {
        const Entity* e = this;

        return x;
    }
};

void PrintEntity(Entity* e)
{
    //
}

int main()
{
    std::cin.get();
}
