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

    int getValue()
    {
        return value;
    }
};

/*oid Increment(int& number)
{
    number++;
}*/

int main()
{
  
    Counter counter;
    counter.setValueFromUser();

    std::cout << "Current value is: " << counter.getValue() << std::endl;
    std::cout << "1 - Increment" << std::endl;
    std::cout << "2 - Decrement" << std::endl;
    std::cout << "3 - Quit" << std::endl;
    std::cout << "Make a choice" << std::endl;


    counter.Increment();
    std::cout << "Your number is: " << counter.getValue() << std::endl;

    counter.Decrement();
    std::cout << "Your number is: " << counter.getValue() << std::endl;
    
}