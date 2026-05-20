// CountVowelsDigits.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

bool isVowel(char letter)
{
    letter = tolower(letter);
    return letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u';
 }


bool haveVowelDigit(const string& str)
{
    if (str.empty()) return false;
    if(!isVowel(str[0])) return false;
    return any_of(str.begin(), str.end(), ::isdigit);
}

int countVowelDigitStrings(const vector<string>& dataset)
{
    int result = static_cast<int>(count_if(dataset.begin(), dataset.end(), haveVowelDigit));
    return result;
}

int main()
{
    
    vector<string> test = {
    "Apple2024",   // A — гласная, и есть цифры → ✅
    "elephant",    // e — гласная, но нет цифр → ❌
    "123hello",    // h — не гласная → ❌
    "O7",          // O — гласная, есть цифра → ✅
    "sky",         // s — не гласная → ❌
    "uNiVeRsE5"    // u — гласная, есть 5 → ✅
    };

    cout << countVowelDigitStrings(test) << endl;
    cin.get();

}