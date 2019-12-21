// Copyright (c) 2019 Andrei Chirilov All rights reserved.
//
// Created by: Andrei Chirilov
// Created on: December 2019
// This program get's the marks from user and calculates the average

#include <iostream>
#include <list>


float Average(std::list<int> marks) {
    // This calculates average of the marks

    // process
    int total = 0;
    float average = 0;
    int items = 0;

    for (int number : marks) {
        total = total + number;
        items = items + 1;
    }

    average = total / items;

    return average;
}


int main() {
    // This takes the user's marks and passes them to average()

    std::list<int> marks;
    int mark = 0;
    int average;


    while (mark != -1) {
        // input
        std::cout << "Mark: " << std::endl;
        std::cin >> mark;
        marks.push_back(mark);
    }

    marks.pop_back();

    average = Average(marks);

    std::cout << "Your average is " << average << std::endl;
}
