/*
This is a program that takes in a number and convert it to percentage, provided that 100% = 16.
You can change the value of 100% in the settings.

Example:
Value of 100%: 16
Entered number: 10
Answer: 10 is 62.5% of the number 16

Author: Yazeed al-Momani
Modified: Feb 27, 2023
*/

#include <iostream>
#include <iomanip>

using namespace std;

// Initializing functions
void intro(double max_value);
int get_route();
double settings(double current_value);
void calculate(double max_value);

int main()
{
    cout << setfill('*');

    int route_to{};
    double max_value{ 16 };

    intro(max_value);

    route_to = get_route();

    // answer != exit
    if (route_to != 3) {
        do {
            // answer == settings
            if (route_to == 1) {
                max_value = settings(max_value);
            }

            // answer == calculate
            if (route_to == 2) {
                calculate(max_value);
            }

            // Back to menu
            route_to = get_route();
        } while (route_to != 3); // answer != exit
    }

    return 0;
}

void intro(double max_value) {
    cout << "Percentage Calculator is a program that takes in a number and convert it to percentage, provided that 100% = " << max_value << ".\n";
    cout << "You can change the value of 100% in the settings.\n\n";
    cout << "Example:\n";
    cout << "Value of 100%: 16\n";
    cout << "Entered number: 10\n";
    cout << "Answer: 10 is 62.5% of the number 16\n\n";
    cout << "Author: Yazeed al-Momani\n";
    cout << "Modified: Feb 27, 2023\n";
}

int get_route() {
    int answer{};

    cout << endl << setw(50) << "";
    cout << "\nMAIN MENU\n";
    cout << setw(50) << "" << endl;
    cout << "\n1. Settings\n2. Calculate\n3. Exit\n\n";
    cout << "Type a number: ";

    cin >> answer;

    // Gaurd
    if (answer > 3 || answer < 1) {
        do {
            cout << "\nError: Invalid number. Choose a valid number.\n";
            cout << "\nType a number: ";
            cin >> answer;
        } while (answer > 3 || answer < 1);
    }

    return answer;
}

double settings(double current_value) {
    double max_value{ current_value };

    cout << endl << setw(50) << "";
    cout << "\nSETTINGS\n";
    cout << setw(50) << "" << endl;
    cout << "\nCurrently the value of 100% is " << max_value << endl;
    cout << "\nChange the value to: ";

    cin >> max_value;

    // Gaurd
    if (max_value <= 0) {
        do {
            cout << "\nError: Invalid number. Choose a positive number:\n";
            cout << "\nChange the value to: ";
            cin >> max_value;
        } while (max_value <= 0);
    }

    return max_value;
}

void calculate(double max_value) {
    double entered_num{};
    double percentage{};

    cout << endl << setw(50) << "";
    cout << "\nCALCULATE\n";
    cout << setw(50) << "" << endl;
    cout << "\nEnter a number: ";
    cin >> entered_num;

    // Gaurd
    if (entered_num < 0) {
        do {
            cout << "\nError: Invalid number. Choose a positive number:\n";
            cout << "\nEnter a number: ";
            cin >> entered_num;
        } while (entered_num < 0);
    }

    percentage = entered_num / max_value * 100;

    cout << "\nAnswer: " << entered_num << " is " << percentage << "% of the number " << max_value << endl;
}