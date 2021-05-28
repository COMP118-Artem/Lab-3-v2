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
int printMenu() {
    int choice;

    do {
        cout << "\n === MENU ===";
        cout << "\n1) Enter quantity";
        cout << "\n2) Calculate total";
        cout << "\n3) Print total";
        cout << "\n4) Print the total sum of odd arrays";
        cout << "\n5) Positive numbers";
        cout << "\n6) Average of odd numbers";
        cout << "\n7) Exit";
        cout << "\nEnter the choice: ";

        cin >> choice;

        if (choice < 1 || choice > 7) {
            cout << "\nWrong choice, try again.";
        }
    } while (choice < 1 || choice > 7);
    return choice;
}

void fillinarr(int arr[], const int size) {
    assert(size > 0);

    for (int i = 0; i < size; ++i) {
        cout << "\nEnter an element for the array at " << i << ": ";
        cin >> arr[i];
    }
}
void multarr(const int arrQuantity[], const int arrPrice[], int arrTotal[], const int size) {
    assert(size > 0);



    for (int i = 0; i <= size; ++i) {
        arrTotal[i] = arrQuantity[i] * arrPrice[i];

        cout << "total price for the array at" << i << " : " << arrTotal[i] << endl;
    }



}
void displayarr(const int arr[], const int size) {
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        cout << "\nValue at " << i << ": " << arr[i];

        sum += arr[i];
    }

    cout << "\nThe total is: " << sum;
}
