#include <iostream>
#include <string>
#include <iomanip>  // For controlling output format

using namespace std;

// Function to calculate BMI
double calculateBMI(double weight, double heightInches) {
    return (703 * weight) / (heightInches * heightInches);
}

// Function to determine BMI category
string getBMICategory(double bmi) {
    if (bmi < 18.5) {
        return "Underweight";
    } else if (bmi >= 18.5 && bmi < 24.9) {
        return "Normal weight";
    } else if (bmi >= 25 && bmi < 29.9) {
        return "Overweight";
    } else {
        return "Obesity";
    }
}

int main() {
    // Declare variables to store user input
    string name, gender;
    int age, heightFeet, heightInches;
    double weight, heightInchesTotal, bmi;

    // Ask the user for their information
    cout << "Please enter your name: ";
    getline(cin, name);

    cout << "Please enter your age: ";
    cin >> age;

    cout << "Please enter your Gender (male/female): ";
    cin >> gender;

    cout << "Please enter your height in feet: ";
    cin >> heightFeet;

    cout << "Please enter your height in inches: ";
    cin >> heightInches;

    cout << "Please enter your weight in pounds: ";
    cin >> weight;

    // Convert height to inches
    heightInchesTotal = (heightFeet * 12) + heightInches;

    // Calculate BMI
    bmi = calculateBMI(weight, heightInchesTotal);

    // Get the BMI category
    string bmiCategory = getBMICategory(bmi);

    // Output the result
    cout << fixed << setprecision(2); // Display BMI with two decimal places
    cout << "\nHi " << name << "," << endl;
    cout << "You are a " << gender << ". You are " << age << " years old." << endl;
    cout << "You are currently " << heightFeet << "'" << heightInches << "\" and you currently weigh " << weight << " pounds." << endl;
    cout << "Your BMI is " << bmi << ", which is considered " << bmiCategory << "." << endl;
    cout << "Thank you for using the BMI Calculator!" << endl;

    return 0;
}