// Palindrome.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
class Solution {
public:
    bool isPalindrome(std::string s) {
        int l = 0;
        size_t r = s.length() - 1;
        while (l < r)
        {
            if (s[l] != s[r])
                {
                    return false; 
                }
            l++;
            r--;
        }

        return true;
    }
};

int main()
{
    Solution sol;
    std::cout << sol.isPalindrome("anamana") << std::endl;

    std::cin.get();
}


