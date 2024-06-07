// test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../LibraryPracticing/Header.h"
#include "Windows.h"
int main()
{
    std::string str1, str2;
    std::cout << "Enter original string and then string to search for... " << std::endl;
    std::cin >> str1 >> str2;
    std::cout << "Does " << str1 << " contain " << str2 << "? ";
    if (checkCharsInString(str1, str2))
        std::cout << " Answer: Yes" << std::endl;
    else 
        std::cout << " Answer: No" << std::endl;
    system("pause");

    HINSTANCE load;
    load = LoadLibrary(L"dynamicLib.dll");
    typedef bool(*checkString) (std::string, std::string);
    checkString CheckString;
    CheckString = (checkString)GetProcAddress(load, "checkString");

    if (CheckString(str1, str2))
        std::cout << " Answer: Yes" << std::endl;
    else
        std::cout << " Answer: No" << std::endl;
    system("pause");
}