#include "Header.h"
extern "C" __declspec(dllexport) bool checkString(std::string originalStr, std::string search)
{
	    int amount = 0, pos = 0;
    bool contains = true;
    for (size_t i = 0; i < originalStr.length(); i++)
    {
        if (originalStr[i] != '\0')
            for (size_t j = 0; j < originalStr.length(); j++)
            {
                if (i + j < originalStr.length()) {

                    if (originalStr[i + j] == search[j])
                        contains = true;
                    else {
                        contains = false;
                        break;
                    }
                }
                else
                    if (j < originalStr.length() - 1)
                        return false;

            }
        if (contains)
            return true;
    }
    return contains;
}
