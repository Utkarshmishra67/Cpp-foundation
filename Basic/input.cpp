// Question 1 Student details and marks calculator
#include <iostream>
#include <string>

using namespace std;
int main() {
    string Name;
    int roll_number;
    int marks;
    int marks2;
    int marks3;
    int marks4;
    int marks5;
    float Total =0;
    float Average;
    float Percentage;
    cout << "Enter your Name: ";
    cin >> Name;
    cout << "Enter your Roll Number: ";
    cin >> roll_number;
    cout << "Enter your Marks: ";
    cin >> marks >> marks2 >> marks3 >> marks4 >> marks5;
    Total = marks+marks2+marks3+marks4+marks5;
    Average = Total/5;
    Percentage = (Total/500)*100;
    cout << "---- Student Result ----" << endl;
    cout << "Name: " << Name << endl;
    cout << "Roll Number: " << roll_number << endl; 
    cout << "Total: " << Total << endl;
    cout << "Average: " << Average << endl;
    cout << "Percentage: " << Percentage << "%";
    return 0;
}