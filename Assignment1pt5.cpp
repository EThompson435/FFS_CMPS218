#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <limits>

using namespace std;

// Function to handle addition
double add(double a, double b) {
    return a + b;
}

// Function to handle subtraction
double subtract(double a, double b) {
    return a - b;
}

// Function to handle multiplication
double multiply(double a, double b) {
    return a * b;
}

// Function to handle division
double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero is not allowed!" << endl;
        return numeric_limits<double>::quiet_NaN();  // Return NaN if division by zero
    }
    return a / b;
}

// Function to handle modulus
int modulus(int a, int b) {
    if (b == 0) {
        cout << "Error: Modulus by zero is not allowed!" << endl;
        return numeric_limits<int>::min();  // Return a large negative number as an error flag
    }
    return a % b;
}

// Function to handle exponentiation
double exponent(double a, double b) {
    return pow(a, b);
}

// Function to handle trigonometric functions (sin, cos, tan)
double sinFunc(double a) {
    return sin(a);
}

double cosFunc(double a) {
    return cos(a);
}

double tanFunc(double a) {
    return tan(a);
}

// Function to handle inverse trigonometric functions (asin, acos, atan)
double asinFunc(double a) {
    if (a < -1 || a > 1) {
        cout << "Error: asin domain error. Input must be in [-1, 1]." << endl;
        return numeric_limits<double>::quiet_NaN();
    }
    return asin(a);
}

double acosFunc(double a) {
    if (a < -1 || a > 1) {
        cout << "Error: acos domain error. Input must be in [-1, 1]." << endl;
        return numeric_limits<double>::quiet_NaN();
    }
    return acos(a);
}

double atanFunc(double a) {
    return atan(a);
}

// Function to handle sqrt (square root)
double sqrtFunc(double a) {
    if (a < 0) {
        cout << "Error: Square root of negative number is not allowed!" << endl;
        return numeric_limits<double>::quiet_NaN();
    }
    return sqrt(a);
}

// Function to handle ceil
double ceilFunc(double a) {
    return ceil(a);
}

// Function to handle abs (absolute value)
double absFunc(double a) {
    return fabs(a);
}

// Function to handle floor
double floorFunc(double a) {
    return floor(a);
}

// Function to handle max and min
double maxFunc(double a, double b) {
    return fmax(a, b);
}

double minFunc(double a, double b) {
    return fmin(a, b);
}

// Function to handle logarithmic functions (log, log10, log2)
double logFunc(double a) {
    if (a <= 0) {
        cout << "Error: Logarithm base must be greater than 0!" << endl;
        return numeric_limits<double>::quiet_NaN();
    }
    return log(a);
}

double log10Func(double a) {
    if (a <= 0) {
        cout << "Error: Logarithm base 10 must be greater than 0!" << endl;
        return numeric_limits<double>::quiet_NaN();
    }
    return log10(a);
}

double log2Func(double a) {
    if (a <= 0) {
        cout << "Error: Logarithm base 2 must be greater than 0!" << endl;
        return numeric_limits<double>::quiet_NaN();
    }
    return log2(a);
}

// Function to handle rounding
double roundFunc(double a) {
    return round(a);
}

// Helper function to parse a number from string
double parseNumber(const string& str) {
    stringstream ss(str);
    double num;
    ss >> num;
    return num;
}

int main() {
    string problem;
    char again;

    do {
        cout << "Enter a math problem (e.g., 2 + 3, sqrt 16, log 10, etc.): ";
        getline(cin, problem);

        // Check for space between the operands for basic operations (e.g., "2 + 3")
        size_t pos = problem.find_first_of("+-*/%^");
        if (pos != string::npos) {
            double num1, num2;
            char op;
            stringstream ss(problem);
            ss >> num1 >> op >> num2;

            switch (op) {
            case '+':
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case '-':
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case '*':
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case '/':
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            case '%':
                cout << "Result: " << modulus(static_cast<int>(num1), static_cast<int>(num2)) << endl;
                break;
            case '^':
                cout << "Result: " << exponent(num1, num2) << endl;
                break;
            default:
                cout << "Invalid operator!" << endl;
                break;
            }
        }
        else {
            // Handle single operand functions (e.g., sin, cos, sqrt, log)
            size_t spacePos = problem.find(' ');
            if (spacePos != string::npos) {
                string func = problem.substr(0, spacePos);
                double value = parseNumber(problem.substr(spacePos + 1));

                if (func == "sin") {
                    cout << "Result: " << sinFunc(value) << endl;
                }
                else if (func == "cos") {
                    cout << "Result: " << cosFunc(value) << endl;
                }
                else if (func == "tan") {
                    cout << "Result: " << tanFunc(value) << endl;
                }
                else if (func == "asin") {
                    cout << "Result: " << asinFunc(value) << endl;
                }
                else if (func == "acos") {
                    cout << "Result: " << acosFunc(value) << endl;
                }
                else if (func == "atan") {
                    cout << "Result: " << atanFunc(value) << endl;
                }
                else if (func == "sqrt") {
                    cout << "Result: " << sqrtFunc(value) << endl;
                }
                else if (func == "ceil") {
                    cout << "Result: " << ceilFunc(value) << endl;
                }
                else if (func == "abs") {
                    cout << "Result: " << absFunc(value) << endl;
                }
                else if (func == "floor") {
                    cout << "Result: " << floorFunc(value) << endl;
                }
                else if (func == "log") {
                    cout << "Result: " << logFunc(value) << endl;
                }
                else if (func == "log10") {
                    cout << "Result: " << log10Func(value) << endl;
                }
                else if (func == "log2") {
                    cout << "Result: " << log2Func(value) << endl;
                }
                else if (func == "round") {
                    cout << "Result: " << roundFunc(value) << endl;
                }
                else if (func == "max") {
                    double value2 = parseNumber(problem.substr(problem.find_last_of(' ') + 1));
                    cout << "Result: " << maxFunc(value, value2) << endl;
                }
                else if (func == "min") {
                    double value2 = parseNumber(problem.substr(problem.find_last_of(' ') + 1));
                    cout << "Result: " << minFunc(value, value2) << endl;
                }
                else {
                    cout << "Unknown function!" << endl;
                }
            }
            else {
                cout << "Invalid input. Please follow the correct format." << endl;
            }
        }

        // Ask if the user wants to solve another problem
        cout << "Would you like to solve another problem? (Y/N): ";
        cin >> again;
        cin.ignore();  // To clear the newline character after the previous input

    } while (again == 'Y' || again == 'y');

    cout << "Thank you for using the Math Calculator!" << endl;

    return 0;
}
