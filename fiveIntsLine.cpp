// Copyright (c) 2023 Santiago Hewett All rights reserved.
//
// Created by: Santiago Hewett
// Date: Nov, 21, 2023
// This program will display all integers between 1000 and 2000
// and skip every 5 digits with if inside a loop

#include <iostream>

    int
    main() {
    // Display a message about the program
    std::cout << "This program will display all integers between 1000 and 2000";
    std::cout << " and skip every 5 digits.\n";

    // For loop to set the range between 1000 and 2000
    for (int counter = 1000; counter <= 2000; counter++) {
        // If statements to skip lines when needed
        if (counter == 1000) {
            std::cout << counter << ", ";
        } else if (counter % 5 == 0) {
            std::cout << "\n"
                      << counter << ", ";
        } else {
            std::cout << counter << ", ";
        }
    }
}
