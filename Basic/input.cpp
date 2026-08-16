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

// Question 2 Salary calculator
#include <iostream>
#include <string>
using namespace std;
int main() {
    string Name;
    int salary;
    int HRA;
    int DA;
    int Deduction;
    cout << "Enter Name: ";
    cin >> Name;
    cout << "Enter basic salary: ";
    cin >> salary;
    cout << "Enter HRA: ";
    cin >> HRA;
    cout << "Enter DA: ";
    cin >> DA;
    cout << "Enter deductions: ";
    cin >> Deduction;

    int GS = salary + HRA + DA;
    int NS = GS - Deduction;
    int ANS = NS*12;

    cout << "----- Employee Salary Details -----" << "\n";
    cout << "Name: " << Name << "\n";
    cout << "Basic Salary: " << salary << "\n";
    cout << "Gross Salary: " << GS << "\n";
    cout << "Net Salary: " << NS << "\n";
    cout << "Annual Net Salary: " << ANS << "\n"; 
    return 0;
}