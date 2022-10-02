// Copyright(c) 2022 Ioana Marinescu All rights reserved.
// Created By: Ioana Marinescu

// Date: Oct. 2, 2022
// calculates circumference of a circle using
// user inputed radius and tau

#include <iostream>

int main() {
    // constants
    float TAU = 6.28;

    // variables
    float radius, circumference;

    // getting user input
    std::cout << "Enter radius value (cm): ";
    std::cin >> radius;

    // Calculations
    circumference = TAU * radius;

    // displays results
    std::cout << "The circumference is " << circumference << "cm" << std::endl;
}
