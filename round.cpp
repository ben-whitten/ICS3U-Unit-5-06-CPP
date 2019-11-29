// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: November 2019
// This is a program which rounds a decimal number.

#include <iostream>
#include <cstdlib>
#include <cmath>


void Rounding(int decimal, float &number) {
    // This is what rounds the number
    number = (number*(pow(10, decimal))+ 0.5);
    number = static_cast<int>(number);
    number = static_cast<float>(number);
    number = number/(pow(10, decimal));
}

main() {
    // this function just calls other functions
    std::string chosenNumber;
    std::string decimalAsString;
    int decimal;
    float number;

    while (true) {
        std::cout << "Input the number: ";
        std::cin >> chosenNumber;
        std::cout << "" << std::endl;
        std::cout << "Input the number of decimal places to round to: ";
        std::cin >> decimalAsString;
        std::cout << "" << std::endl;

        try {
            number = std::stof(chosenNumber);
            decimal = std::stoi(decimalAsString);
            // call functions
            Rounding(decimal, number);
            break;
        } catch (std::invalid_argument) {
        std::cout << "That was not a valid number."
        << std::endl;
        }
    }
    std::cout << number << std::endl;
}
