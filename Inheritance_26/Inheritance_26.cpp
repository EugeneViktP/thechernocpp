// Inheritance_26.cpp 
//

#include <iostream>

class Entity
{
public:
    float X, Y;

    void Move(float xa, float ya)
    {
        X += xa;
        Y += ya;
    }
};

class Player : public Entity
{
public:
    
    const char* name;
   

    void printName()
    {

    }
};

int main()
{
    
    std::cout << sizeof(Entity) << std::endl;
    std::cout << sizeof(Player) << std::endl;
    
    
    Player player;
    player.printName();
    player.Move(5, 5);
    player.X = 2;
    player.Y = 3;
    std::cout << sizeof(player.name) << std::endl;

    
    std::cin.get();
}

