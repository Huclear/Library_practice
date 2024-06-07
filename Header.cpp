#include "Header.h"

bool checkCharsInString(std::string initialString, std::string characters)
{
    int amount = 0, pos = 0;
    bool contains = true;
    for (size_t i = 0; i < initialString.length(); i++)
    {
        if (initialString[i] != '\0')
            for (size_t j = 0; j < characters.length(); j++)
            {
                if (i + j < initialString.length()) {

                    if (initialString[i + j] == characters[j])
                        contains = true;
                    else {
                        contains = false;
                        break;
                    }
                }
                else
                    if (j < initialString.length() - 1)
                        return false;

            }
        if (contains)
            return true;
    }
    return contains;
}
