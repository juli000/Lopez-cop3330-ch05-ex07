/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Julio Lopez
 */

#include "std_lib_facilities.h"

int main() {
    float a;
    float b;
    float c;
    float x1;
    float x2;
    float d;
    cout << "Enter your numbers for a, b, and c seperated by a space: ";
    cin >> a >> b >> c;
    d = b * b;
    d = d - (4 * a * c);
    if (d < 0){
        cout << "No Real Solution\n";
    }
    else if (d == 0) {
        x1 = -b / (2 * a);
        cout << "x = " << x1 << '\n';
    } else if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << "First Solution = " << x1 << '\n';
        cout << "Second Solution = " << x2 << '\n';
    }
    return 0;
}