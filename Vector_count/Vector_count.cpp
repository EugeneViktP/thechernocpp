// Vector_count.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <algorithm>

int countData(const std::vector<bool>& dataset)
{
    int result = count(dataset.begin(), dataset.end(), true);
    return result;
}



int main()
{
    std::cout << "Count quantity: ";
    std::cout << countData({ true, false, true, true, false, true }) << std::endl;
    std::cin.get();
}


