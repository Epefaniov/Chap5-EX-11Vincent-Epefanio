/*
    Assignment: Chapter 5 Excercise 11

    Programmer: Vincent Epefanio

    Date: 11/26/2024

    Requriements: Write a program that will predict the size of a population of organisms.

    The program should ask the user for the starting number of organisms,

    their average daily population increase (as a percentage),

    and the number of days they will multiply. A loop should display the size of the population for each day.

    Input Validation: Do not accept a number less than 2 for the starting size of the population.

    Do not accept a negative number for average daily population increase.

    Do not accept a number less than 1 for the number of days they will multiply.

*/



#include <iostream>
#include <iomanip>  

using namespace std;

int main() {
    
    int startingPopulation;
    double dailyIncreasePercentage;
    int daysToMultiply;

    
    cout << "Enter the starting population size (must be at least 2): ";
    while (true) {
        cin >> startingPopulation;
        if (startingPopulation >= 2) {
            break;
        } else {
            cout << "Starting population must be at least 2. Please enter again: ";
        }
    }

    
    cout << "Enter the average daily population increase percentage (as a positive number): ";
    while (true) {
        cin >> dailyIncreasePercentage;
        if (dailyIncreasePercentage >= 0) {
            break;
        } else {
            cout << "Population increase must be a non-negative number. Please enter again: ";
        }
    }

    
    cout << "Enter the number of days the population will multiply (at least 1 day): ";
    while (true) {
        cin >> daysToMultiply;
        if (daysToMultiply >= 1) {
            break;
        } else {
            cout << "The number of days must be at least 1. Please enter again: ";
        }
    }

    
    cout << "\nDay-wise population increase:\n";
    cout << "Day 1: " << startingPopulation << endl;

    
    double currentPopulation = startingPopulation;
    for (int day = 2; day <= daysToMultiply; ++day) {
        currentPopulation += currentPopulation * (dailyIncreasePercentage / 100);
        cout << "Day " << day << ": " << fixed << setprecision(2) << currentPopulation << endl;
    }

    return 0;
}
