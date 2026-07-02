#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string name;
    int age;
    double height;
    double weight;
    int score;
    double bmi;
    string category;
    string grade;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your height (meters): ";
    cin >> height;
    cout << "Enter your weight: (kg): ";
    cin >> weight;
    cout << "Enter your test score(0 - 100): ";
    cin >> score;

    cout << fixed << setprecision(2);

    bmi = weight / (height * height);
    if (bmi < 18.5)
    {
        category = "Underweight";
    }
    else if (bmi < 25)
    {
        category = "Normal weight";
    }
    else if (bmi < 30)
    {
        category = "Overweight";
    }
    else 
    {
        category = "Obese";
    }

    if (score >= 90)
    {
        grade = "A";
    }
    else if (score >= 80)
    {
        grade = "B";
    }
    else if (score >= 70)
    {
        grade = "C";
    }
    else if (score >= 60)
    {
        grade = "D";
    }
    else 
    {
        grade = "F";
    }

    cout << "Hey " << name << ", you're " << age << " years old with a BMI of " << bmi << " (" << category << ") and you got a grade " << grade << ". Well done." << endl;

    return 0;
}
