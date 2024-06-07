#include <iostream>
#include <string>

extern "C" __declspec(dllexport) bool checkString(std::string originalStr, std::string search);