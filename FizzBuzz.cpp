//
// Fizz Buzz implementation.
//
#include <iostream>
#include "FizzBuzz.h"

void fizzBuzz(int fizzDiv, int buzzDiv, int countBy, int maxCount){
    for (int i = 1; i < maxCount; i += countBy){
        std::string output = "";
        if (i % fizzDiv == 0){
            output += "Fizz";
        }
        if (i % buzzDiv == 0){
            output += "Buzz";
        }
        if (output.empty()){
            output += std::to_string(i);
        }
        std::cout << output << std::endl;
    }
    std::cout << "Starting Fizz Buzz:\n";
}