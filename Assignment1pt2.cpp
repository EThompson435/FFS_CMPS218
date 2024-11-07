#include <iostream>
#include <string>
using namespace std;

// Function to get the month meaning
string getMonthMeaning(int month) {
    switch (month) {
    case 1: return "Janus";
    case 2: return "Juno";
    case 3: return "Mars";
    case 4: return "Venus";
    case 5: return "Mercury";
    case 6: return "Ceres";
    case 7: return "Apollo";
    case 8: return "Artemis";
    case 9: return "Zeus";
    case 10: return "Hera";
    case 11: return "Poseidon";
    case 12: return "Hestia";
    default: return "Invalid month";
    }
}

// Function to get the day number meaning
string getDayMeaning(int day) {
    if (day == 1) return "Self-Started";
    else if (day == 2) return "Diplomatic";
    else if (day == 3) return "Creative";
    else if (day == 4) return "Disciplined";
    else if (day == 5) return "Adventurous";
    else if (day == 6) return "Responsible";
    else if (day == 7) return "Intellectual";
    else if (day == 8) return "Powerful";
    else if (day == 9) return "Humanitarian";
    else if (day == 10) return "Leader";
    else return "Day number meaning not available";
}

// Function to get the year meaning
string getYearMeaning(int year) {
    if (year >= 2000 && year <= 2023) {
        if (year >= 2000 && year <= 2009) return "Millennial";
        else if (year >= 2010 && year <= 2019) return "Generation Z";
        else if (year >= 2020 && year <= 2023) return "Generation Alpha";
    }
    return "Year meaning not available";
}

int main() {
    string response;
    int month, day, year;

    cout << "Welcome to Birthday Date Meaning Generator!" << endl;

    do {
        // Input the birthday information
        cout << "Please enter the month of your birthday (1-12): ";
        cin >> month;

        cout << "Please enter the day of your birthday (1-31): ";
        cin >> day;

        cout << "Please enter the year of your birthday (2000-2023): ";
        cin >> year;

        // Display the meaning for the month, day, and year
        cout << "The month of " << (month == 1 ? "January" : month == 2 ? "February" :
            month == 3 ? "March" : month == 4 ? "April" : month == 5 ? "May" :
            month == 6 ? "June" : month == 7 ? "July" : month == 8 ? "August" :
            month == 9 ? "September" : month == 10 ? "October" : month == 11 ? "November" : "December")
            << " means " << getMonthMeaning(month) << endl;

        cout << "The " << day << "th of the month means " << getDayMeaning(day) << endl;

        cout << "The year " << year << " means that you are " << getYearMeaning(year) << endl;

        // Ask if the user wants to try again
        cout << "Would you like to try another one? (Y/N): ";
        cin >> response;

    } while (response == "Y" || response == "y");

    cout << "Thanks for playing!" << endl;
    return 0;
}