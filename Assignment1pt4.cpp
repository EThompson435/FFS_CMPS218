#include <iostream>
using namespace std;

// Function to print the multiplication table
void printMultiplicationTable(int startRange, int endRange, int multiplyStart, int multiplyEnd) {
    // Print the table header
    cout << "\nHere is the multiplication table for " << startRange << " to " << endRange
        << " in the range of " << multiplyStart << " to " << multiplyEnd << "\n";
    cout << "X";

    // Print the top row (multiplication numbers)
    for (int i = multiplyStart; i <= multiplyEnd; i++) {
        cout << "\t" << i;
    }
    cout << "\n";

    // Print the table body
    for (int i = startRange; i <= endRange; i++) {
        cout << i;  // Print the row header (current number in the range)
        for (int j = multiplyStart; j <= multiplyEnd; j++) {
            cout << "\t" << i * j;  // Print the multiplication result
        }
        cout << "\n";
    }
}

int main() {
    int startRange, endRange, multiplyStart, multiplyEnd;
    string response;

    cout << "Welcome to the Multiplication Table Generator!" << endl;

    do {
        // Ask user for the starting and ending ranges for the multiplication table
        cout << "Enter the starting range for Multiplication Table: ";
        cin >> startRange;

        cout << "Enter the ending range for Multiplication Table: ";
        cin >> endRange;

        // Ask user for the starting and ending ranges for multiplying the numbers
        cout << "Enter the starting range for multiplying the numbers in Multiplication Table: ";
        cin >> multiplyStart;

        cout << "Enter the ending range for multiplying the numbers in Multiplication Table: ";
        cin >> multiplyEnd;

        // Print the multiplication table
        printMultiplicationTable(startRange, endRange, multiplyStart, multiplyEnd);

        // Ask the user if they want to create another multiplication table
        cout << "\nDo you want to create another multiplication table? (Y/N): ";
        cin >> response;

    } while (response == "Y" || response == "y");  // Continue if user enters 'Y' or 'y'

    // Thank the user and exit the program
    cout << "Thank you for using the multiplication table generator!" << endl;
    return 0;
}