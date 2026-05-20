// TwoSums.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        
        std::unordered_map<int, int> m_hash; // <value, index>
        /*int r = nums.size() - 1;
        int sum = 0;*/

        for (int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];
            if (m_hash.count(diff))
            {
              
                return { m_hash[diff], i};
            }
            m_hash[nums[i]] = i;
        }
        return {};
    }
};

int main()
{
    Solution sol;
    std::vector<int> vec = { 3, 2, 4 };
    std::vector<int> result = sol.twoSum(vec, 6);

    std::cout << result[0] << " " << result[1] << std::endl;
    
    std::cin.get();
}

