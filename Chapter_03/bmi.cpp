// Write a program that prompts the user to enter a weight in pounds and height in inches and
// then displays the BMI. Note that one pound is 0.45359237 kilograms and one inch is
// 0.0254 meters. Listing 4.6 gives the program.

// Conditions
// Below 18.5 Underweight
// 18.5–24.9 Normal
// 25.0–29.9 Overweight
// Above 30.0 Obese

// Enter weight in pounds:
// Enter Weight in pounds: 146
// Enter height in inches: 70
// BMI is 20.95
// Normal
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Conversion constants
    const double KILOGRAMS_PER_POUND = 0.45359237;
    const double METERS_PER_INCH = 0.0254;

    double weightInPounds, heightInInches;

    // Prompt user for input
    cout << "Enter weight in pounds: ";
    cin >> weightInPounds;

    cout << "Enter height in inches: ";
    cin >> heightInInches;

    // Calculate BMI
    double weightInKilograms = weightInPounds * KILOGRAMS_PER_POUND;
    double heightInMeters = heightInInches * METERS_PER_INCH;
    double bmi = weightInKilograms / (heightInMeters * heightInMeters);

    // Display formatted BMI (2 decimal places)
    cout << fixed << setprecision(2);
    cout << "BMI is " << bmi << endl;

    // Determine weight category
    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    } else if (bmi < 25.0) {
        cout << "Normal" << endl;
    } else if (bmi < 30.0) {
        cout << "Overweight" << endl;
    } else {
        cout << "Obese" << endl;
    }

    return 0;
}