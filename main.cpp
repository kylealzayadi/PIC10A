//
//  main.cpp
//  Homework 1
// Created by Kyle Alzayadi, 4/10/24

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    
    int sum = num1 + num2;
    cout << "Their Sum is " << sum << endl;

    int product = num1 * num2;
    cout << "Their Product is " << product << endl;

    double average = static_cast<double>(num1 + num2) / 2;
    cout << "Their Average is " << average << endl;

    int absolutevalue = abs(num1 - num2);
    cout << "The Absolute value of their difference is " << absolutevalue << endl;

    int larger = (num1 > num2) ? num1 : num2;
    cout << "The larger of the two is " << larger << endl;

    bool largethansq = (larger > pow(min(num1, num2), 2));
    cout << "The larger is greater than the smaller squared: " << boolalpha << largethansq << endl;

    bool leasteven = (min(num1, num2) % 2 == 0);
    cout << "The least of them is even: " << boolalpha << leasteven << endl;

    // Problem 2
    
    int start, finish;

        cout << "Please enter the experiment start time in military time format: ";
        cin >> start;
        cout << "Please enter the experiment end time in military time format: ";
        cin >> finish;

        int startMinutes = (start / 100) * 60 + (start % 100);
        int finishMinutes = (finish / 100) * 60 + (finish % 100);

        int durationMinutes = finishMinutes - startMinutes;
        int timeHours = durationMinutes / 60;
        int timeMinutes = durationMinutes % 60;

        cout << "Experiment Duration: " << timeHours << " hours and " << timeMinutes << " minutes" << endl;
    
    return 0;
}

    
