// Virtual_Functions_27.cpp :
//

#include <iostream>
#include <string>

class Printable
{
public:
    virtual std::string GetClassName() = 0;
};


class Entity : public Printable
{
public:
    virtual std::string getName() { return "Entity"; }
    std::string GetClassName() override { return "Entity"; }
};

class Player : public Entity
{
private:
    std::string m_Name;

public:
    Player(const std::string& name)
        : m_Name(name) {
    }

    std::string getName() override { return m_Name; }

    std::string GetClassName() override { return "Player"; }

};

void printName(Entity* entity)
{
    std::cout << entity->getName() << std::endl;
}


void Print(Printable* obj)
{
    std::cout << obj->GetClassName() << std::endl;
}


int main()
{
    Entity* e = new Entity();
    //printName(e);
    Print(e);

    Player* p = new Player("Cherno");
    //printName(p);
    Print(p);



    std::cin.get();
}


