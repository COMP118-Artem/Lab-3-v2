// Lab 3 v2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Author:Artem Samusev

#include <iostream>
#include <cassert>
using namespace std;

int printMenu();
void fillinarr(int[], const int);
void multarr(const int[], const int[], int[], const int);
void displayarr(const int[], const int);
int sumodd(const int[], const int);
bool allisposit(const int[], const int);
void averageodd(const int[], const int, int&);


int main() {
    int choice;
    const int SIZE = 10;
    int odd;
    int price[SIZE] = { 12, 4, 8, 1, 17, 2, 4, 2, 9, 1 };
    int quantity[SIZE], total[9];

    do {
        choice = printMenu();

        switch (choice) {
        case 1:
            fillinarr(quantity, SIZE);
            break;
        case 2:
            multarr(quantity, price, total, SIZE);
            break;
        case 3:
            displayarr(total, SIZE);
            break;
        case 4:
            sumodd(quantity, SIZE);
            break;

        case 5:
            if (allisposit(quantity, SIZE))
            {
                cout << "all is positive" << endl;
            }
            else
            {
                cout << "at least one content is negative" << endl;
            }
            break;
        case 6:
            averageodd(quantity, SIZE, odd);
            break;
        default:
            assert(true);
        }
    } while (choice != 7);

    cout << "\nHave a nice day:)" << endl;
    return 0;
}
