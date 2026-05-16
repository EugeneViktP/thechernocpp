// TwoSums.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int sum = 0;

        while (l < r)
        {
            sum = nums[l] + nums[r];
            if (sum == target)
            {
                std::cout << l << r << std::endl;
                return { l, r };
            }
            else if (sum > target)
            {
                r--;
            }
            else {
                l++;
            }
        }

    }
};

int main()
{
    Solution sol;
    std::vector<int> vec = { 2, 7, 10, 15 };

    sol.twoSum(vec, 9);
    
    std::cin.get();
}

