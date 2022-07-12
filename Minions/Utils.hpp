#pragma once
#include "Includes.h"
namespace Utils
{
    inline std::string RandomString(int length) 
    {
        std::string result = { };
        std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        srand((unsigned)time(0) * 5);
        for (unsigned int i = 0; i < length; i++)
            result += alphabet[rand() % (alphabet.length() - 1)];
        return result;
    }
}