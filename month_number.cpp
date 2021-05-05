// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Tue/May4/2021
// This program is a month program


#include <iostream>


int main() {
    // this function checks what month name to desplay according to its number.



    int monthNumber;


    // input
    std::cout << "Enter the number of a month(ex: 3 for March):"
    << std::endl;
    std::cin >> monthNumber;


    // process & output
    if (monthNumber == 1) {
        // output
        std::cout << monthNumber << " January" << std::endl;
    } else if (monthNumber == 2) {
        // output
        std::cout << monthNumber << " February" << std::endl;
    } else if (monthNumber == 3) {
        // output
        std::cout << monthNumber << " March" << std::endl;
    } else if (monthNumber == 4) {
        // output
        std::cout << monthNumber << " April" << std::endl;
    } else if (monthNumber == 5) {
        // output
        std::cout << monthNumber << " May" << std::endl;
    } else if (monthNumber == 6) {
        // output
        std::cout << monthNumber << " June" << std::endl;
    } else if (monthNumber == 7) {
        // output
        std::cout << monthNumber << " July" << std::endl;
    } else if (monthNumber == 8) {
        // output
        std::cout << monthNumber << " August" << std::endl;
    } else if (monthNumber == 9) {
        // output
        std::cout << monthNumber << " September" << std::endl;
    } else if (monthNumber == 10) {
        // output
        std::cout << monthNumber << " October" << std::endl;
    } else if (monthNumber == 11) {
        // output
        std::cout << monthNumber << " November" << std::endl;
    } else if (monthNumber == 12) {
        // output
        std::cout << monthNumber << " December" << std::endl;
    } else {
        // output
        std::cout << "This number is not a month number!" << std::endl;
    }


     std::cout << "\nDone." << std::endl;
}
