#include "Reverser.h"

int Reverser::reverseDigit(int value)
{
    if (value < 0) {
        return -1;
    }
    if (value < 10 && value > 0) {
        return value;
    } else {
        int lastDigit = value % 10;
        int remainingDigits = value/10;

        int reversedDigit = reverseDigit(remainingDigits);
        int numOfDigits = countValue(reversedDigit);

        return (lastDigit * powerOfTen(numOfDigits) + reversedDigit);
    }
}

int Reverser::countValue(int value)
{
    int count = 0;
    while (value != 0) 
    {
        count++;
        value /= 10;
        
    }
    return count;
}

int Reverser::powerOfTen(int numOfDigits) 
{
    int result = 1;
    for (int i=0; i<numOfDigits; ++i)
    {
        result *= 10;
    }
    return result;
}
std::string Reverser::reverseString(std::string characters)
{
    if (characters.length() == 0) 
    {
        return "ERROR";
    }
    if (characters.length() == 1) 
    {
        return characters;
    } 
    else 
    {
        return (reverseString(characters.substr(1)) + characters[0]);
    }
}
