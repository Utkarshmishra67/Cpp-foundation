//  Question no. 1 -- Variables
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    int age;
    cout << "Enter your age: ";
    cin >> age;
    float height;
    cout << "Enter your height in meters: ";
    cin >> height;
    char grade;
    cout << "Enter your grade (A-F): ";
    cin >> grade;
    cout << "Hello, " << name << "! You are " << age << " years old, " << height << " ft tall, and your grade is " << grade << "." << endl;


// Question no. 2 -- Variables & Calculations

    string Name;
    getline(cin, Name);
    int Age;
    cin >> Age;
    int Physics;
    cin >> Physics;
    int Chemistry;
    cin >> Chemistry;
    int Math;
    cin >> Math;
    int Total = Physics + Chemistry + Math;
    float Average = Total / 3.0;
    cout << "Hello, " << Name << "! You are " << Age << " years old, and your total marks are " << Total << " with an average of " << Average << "." << endl;
}