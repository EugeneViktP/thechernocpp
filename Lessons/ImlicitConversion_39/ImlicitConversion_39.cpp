// ImlicitConversion_39.cpp : 
//

#include <iostream>


class Entity
{
private:
    std::string m_Name;
    int m_Age;
public:
    Entity(const std::string& name)
        : m_Name(name), m_Age(-1) { }
    explicit Entity(int age)
        : m_Name("Unknown"), m_Age(age) { }
};

void PrintEntity(const Entity& entity)
{
    // Printing

}

int main()
{
    /*Entity a("Cherno");
    Entity b(22);*/
    PrintEntity(22);

    Entity a = std::string("Cherno");
    Entity b = 22;
    std::cin.get();
}
