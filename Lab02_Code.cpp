#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double calculateBMI(double weightKg, double heightM) {
    if (heightM <= 0) return 0.0;
    return weightKg / (heightM * heightM);
}

string healthStatus(double bmi) {
    if (bmi < 18.5) return "Underweight";
    else if (bmi < 25.0) return "Normal";
    else if (bmi < 30.0) return "Overweight";
    else return "Obese";
}

int main() {
    double height, weight;
    cout << "Enter height (in meters): ";
    cin >> height;
    cout << "Enter weight (in kg): ";
    cin >> weight;

    double bmi = calculateBMI(weight, height);
    cout << fixed << setprecision(2);
    cout << "BMI: " << bmi << "\n";
    cout << "Status: " << healthStatus(bmi) << "\n";
    return 0;
}