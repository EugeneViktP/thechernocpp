// CreaturesWorld.cpp : 
//

#include <iostream>
#include <string>


class Creature
{
protected:
    std::string name;
public:

    Creature() : name("Unknown Creature") {}
    
    Creature(const std::string& creatureName)
    {
        this->name = creatureName;
    }
  
    virtual ~Creature()
    {
        std::cout << "Creature destructed" << std::endl;
    }
    virtual std::string getName()
    {
        return name;
    }

    void introduce()
    {
        std::cout << "Hello, I am " << getName() << std::endl;
    }
};

class Knight : public Creature
{

public:
    Knight(const std::string& knightName) : Creature(knightName) { }
    std::string getName() override 
    {
        return name;
    }

    ~Knight() override
    {
        std::cout << "Knight destructed" << std::endl;
    }
};

class Dragon : public Creature
{

public:
    
    std::string getName() override
    {
        return "Hot Tail";
    }
};

void introducingCreature(Creature& anyCreature)
{
    std::cout << anyCreature.getName() << std::endl;
}

int main()
{
    Knight knight("White");
    Dragon dragon;
    introducingCreature(knight);
    introducingCreature(dragon);
    knight.introduce();
    dragon.introduce();


    std::cin.get();
}

