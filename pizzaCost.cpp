// Copyright (c) 2022 Enoch Amedjrovi All rights reserved.
// Created by : Enoch Amedjrovi
// Date:March5,2025
// This program formats the total cost with $ and rounded to 2 decimal places
#include <iostream>
#include <iomanip>

int main() {
// set constants
const float HST = 0.13;
const float LABOUR_COST = 2;
const float RENTAL_COST = 2.25;
const float INGRED_COST = 1.5;

int diameter;
float subtotal, tax, total;

// input
std::cout << "Enter the diameter of the pizza(inches): ";
std::cin >> diameter;

// process
subtotal = LABOUR_COST + RENTAL_COST + (INGRED_COST * diameter);
tax = HST * subtotal;
total = subtotal + tax;

// output
std::cout << "\nThe total cost of the pizza is "
<< "$" << std::fixed << std::setprecision(2)
<< std::setfill('0') << total << ".\n";
}
