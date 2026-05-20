// Pointer_Ref.cpp 
//

#include <iostream>

int main()
{
    int x = 10;
    std::cout << "Initial Value: " << x << std::endl;
    int* ptr = &x;
    *ptr = 7;
    std::cout << "Current value (ptr): " << x << std::endl;

    int& ref = x;
    ref = 9;
    std::cout << "Current value (ref): " << x << std::endl;
    std::cin.get();
}