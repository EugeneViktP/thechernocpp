// Counter.cpp 

#include <iostream>

class Counter
{
private:
    int value;

public:
    Counter()
    {
        value = 0;
    }

    void setValueFromUser()
    {
       
        std::cout << "Type in your number\n";

        std::cin >> value;
    }

    void Increment()
    {
        value++;
    }

    void Decrement()
    {
        value--;
    }
    void Reset()
    {
        value = 0;
    }

    int getValue()
    {
        return value;
    }
};

int main()
{
  
    int choice;
    
    Counter counter;
    counter.setValueFromUser();

    while (true)
    {
        std::cout << "Current value is: " << counter.getValue() << std::endl;
        std::cout << "1 - Increment" << std::endl;
        std::cout << "2 - Decrement" << std::endl;
        std::cout << "3 - Quit" << std::endl;
        std::cout << "4 - Reset Value" << std::endl;
        std::cout << "Make a choice" << std::endl;
        std::cin >> choice;
        if (choice == 1)
        {
            counter.Increment();

        } else if (choice == 2)
        {
            counter.Decrement();

        } else if (choice == 3)
        {
            std::cout << "Game is over" << std::endl;
            break;
        }
        else if (choice == 4)
        {
            counter.Reset();

        }
        
        else
        {
            std::cout << "Make better choice" << std::endl;
        }
    }    
}