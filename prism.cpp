// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Roman Cernetchi
// Created on: January 2021
// This program calculates the surface area of a rectangular prism

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

double calculateArea(float length, float width, float height) {
    // calculates the surface area of a rectangular prism
    double surfaceArea;
    std::cout.precision(4);

    // process
    surfaceArea = (width*length+height*length+height*width)*2;

    return surfaceArea;
}

int main() {
    // input the length, width, and height
    double area;
    float userLength;
    float userWidth;
    float userHeight;
    std::string lengthString;
    std::string widthString;
    std::string heightString;
    std::cout.precision(4);

    while (true) {
        try {
            // input
            std::cout << "Enter the radius of a rectangular prism(cm): ";
            std::cin >> lengthString;
            std::cout << "Enter the width of a rectangular prism(cm): ";
            std::cin >> widthString;
            std::cout << "Enter the height of a rectangular prism(cm): ";
            std::cin >> heightString;
            std::cout << std::endl;

            userLength = std::stoi(lengthString);
            userWidth = std::stoi(widthString);
            userHeight = std::stoi(heightString);

            if (userLength <= 0 || userWidth <= 0 || userHeight <= 0) {
                std::cout << "Invalid input" << std::endl;
            }

            break;
        } catch (std::invalid_argument) {
            std::cout << "This was not a number"<< std::endl;
        }
    }

    // call functions
    area = calculateArea(userLength, userWidth, userHeight);

    // output
    std::cout << "The surface area is " << std::setprecision(1)
    << std::fixed << area << " cm²" << std::endl;
}
