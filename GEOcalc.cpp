// File Name: GEOcalc.cpp
//Programmer: Charles Duncan
//Date: 10/3/2025
//Requirements: Menu driven program to calculate areas of geometric shapes



#include <iostream>
using namespace std;

int main() {
    int choice;
    const double PI = 3.14159;

    do {
        // Display menu
        cout << "\nGeometry Calculator\n";
        cout << "1. Calculate the Area of a Circle\n";
        cout << "2. Calculate the Area of a Rectangle\n";
        cout << "3. Calculate the Area of a Triangle\n";
        cout << "4. Quit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        // Handle menu selection
        switch(choice) {
            case 1: {
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                if (radius < 0) {
                    cout << "Error: Radius cannot be negative.\n";
                } else {
                    double area = PI * radius * radius;
                    cout << "The area of the circle is: " << area << endl;
                }
                break;
            }
            case 2: {
                double length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                if (length < 0 || width < 0) {
                    cout << "Error: Length and width cannot be negative.\n";
                } else {
                    double area = length * width;
                    cout << "The area of the rectangle is: " << area << endl;
                }
                break;
            }
            case 3: {
                double base, height;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                if (base < 0 || height < 0) {
                    cout << "Error: Base and height cannot be negative.\n";
                } else {
                    double area = 0.5 * base * height;
                    cout << "The area of the triangle is: " << area << endl;
                }
                break;
            }
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Error: Please enter a number between 1 and 4.\n";
        }

    } while (choice != 4);

    return 0;
}
