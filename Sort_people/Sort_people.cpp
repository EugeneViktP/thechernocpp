// Sort_people.cpp : 
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    using namespace std::string_literals;
    int count;
    std::cin >> count;
    std::vector<std::pair<int, std::string>> people{};
    for (int i = 0; i < count; i++)
    {
        std::string name;
        int score;
        std::cin >> name >> score;
        people.push_back({ score, name });
    }

    std::sort(people.begin(), people.end());
    std::reverse(people.begin(), people.end());

    for (const auto& element : people)
    {
        std::cout << element.second << " "s << std::endl;
    }

    
    
    
    
    std::cin.get();
}

