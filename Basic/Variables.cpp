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
}
