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


//Question 3 ----bill calculator-------

#include <iostream>
using namespace std;
int main() {
    int price1;
    int price2;
    int price3;
    int quantity1;
    int quantity2;
    int quantity3;

    cout << "Enter price of item 1: ";
    cin >> price1;
    cout << "Enter quantity: ";
    cin >> quantity1;
    cout << endl;
    cout << "Enter price of item 2: ";
    cin >> price2;
    cout << "Enter quantity: ";
    cin >> quantity2;
    cout << endl;
    cout << "Enter price of item 3: ";
    cin >> price3;
    cout << "Enter quantity: ";
    cin >> quantity3;
    cout << endl;

    int item1 = price1*quantity1;
    int item2 = price2*quantity2;
    int item3 = price3*quantity3;
    int subtotal = item1+item2+item3;
    int Discount = subtotal*0.1;
    int Final_amount = subtotal - Discount;

    cout << "---------- BILL ----------" << "\n";

    cout << "Item 1: " << item1 << "\n";
    cout << "Item 2: " << item2 << "\n";
    cout << "Item 3: " << item3 << "\n";
    cout << "Subtotal: " << subtotal << "\n";
    cout << "Discount: " << Discount << "\n";
    cout << "Final Amount: " << Final_amount << "\n";


    return 0;
}

//Question 4 ----Electricity Bill Calculator-------
#include <iostream>
using namespace std;
int main() {
    int previous_reading;
    int current_reading;
    int cost;
    cout << "Enter previous reading: ";
    cin >> previous_reading;
    cout << "Enter current reading: ";
    cin >> current_reading;
    cout << "Enter cost per unit: ";
    cin >> cost;
    int unit_consumed = current_reading-previous_reading;
    int Basic_bill = unit_consumed*cost;
    double service_cost = Basic_bill*0.05;
    int final_bill = Basic_bill+service_cost;

    cout << endl;
    cout << "-------ELECTRICITY BILL-------" << "\n";
    cout << "Unit Consumed: " << unit_consumed << "\n";
    cout << "Basic Bill: " << Basic_bill << "\n";
    cout << "Service Charge: " << service_cost << "\n";
    cout << "Final Bill: " <<final_bill << "\n";

    return 0;
}

//Question 5 ----Bank Account Calculator-------
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int Initial_balance;
    int deposit;
    int withdrawal;
    double interest;

    cout << "Enter initial balance: ";
    cin >> Initial_balance;
    cout << "Enter deposit: ";
    cin >> deposit;
    cout << "Enter withdrawal: ";
    cin >> withdrawal;
    cout << "Enter annual interest  rate: ";
    cin >> interest;

    int Balance = Initial_balance+deposit;
    int after_withdrawal = Balance-withdrawal;
    double Interest = after_withdrawal*interest/100;
    double final_amt = after_withdrawal+Interest;

    cout << "----------ACCOUNT SUMMARY----------" << "\n";
    cout << "Balance after deposit: " << Balance << "\n";
    cout << "Balance after withdrawal: " << after_withdrawal << "\n";
    cout << "Interest: " << Interest << "\n";
    cout << "Final Balance: " << final_amt << "\n";


    return 0;
}