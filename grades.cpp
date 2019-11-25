// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: November 2019
// This program takes the grade level and returns the middle percentage mark

#include <iostream>
#include <string>

int Calculate(char mark[]) {
    // This function calculates the user's grade level as a percentage mark

    // Variables
    int percentage;

    // Process
    switch (mark[0]) {
        case '4' :
            if (mark[1] == '+') {
                percentage = 98;
            } else if (mark[1] == '-') {
                percentage = 91;
            } else {
                percentage = 83;
            }
            break;
        case '3' :
            if (mark[1] == '+') {
                percentage = 78;
            } else if (mark[1] == '-') {
                percentage = 75;
            } else {
                percentage = 71;
            }
            break;
        case '2' :
            if (mark[1] == '+') {
                percentage = 68;
            } else if (mark[1] == '-') {
                percentage = 65;
            } else {
                percentage = 61;
            }
            break;
        case '1' :
            if (mark[1] == '+') {
                percentage = 58;
            } else if (mark[1] == '-') {
                percentage = 55;
            } else {
                percentage = 51;
            }
            break;
        case 'R' :
            percentage = 25;
            break;
        default :
            percentage = -1;
    }
    return percentage;
}

int main() {
    // This function allows the user to input a mark and receive an outputted %

    // Variables
    char userMark[10] = "         ";
    int userPercentage;

    // Input
    std::cout << "Enter your grade level:" << std::endl;
    std::cin >> userMark;

    // Process
    if (userMark[1] != '+' && userMark[1] != '-' && userMark[1] != 0) {
        userPercentage = -1;
    } else {
        userPercentage = Calculate(userMark);
    }

    // Output
    if (userPercentage == -1) {
        std::cout << "" << std::endl;
        std::cout << "Error!" << std::endl;
    } else {
        std::cout << "" << std::endl;
        std::cout << "Your percentage mark is " << userPercentage
        << "%." << std::endl;
    }
}
