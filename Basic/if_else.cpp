// Question No.1 Positive, Negative or Zero
#include <iostream>
using namespace std;
int main() {
    int Number1;
    int Number2;
    cout << "Enter a First Number: ";
    cin >> Number1;
    if (Number1>0){
        cout << "Positive";
    }
    else if (Number1==0){
        cout << "Zero";
    }
    else {
        cout << "Negative";
    }

    return 0;
}

// Question No.2 Even or Odd
#include <iostream>
using namespace std;
int main() {
    int Number;
    cout << "Enter Your Number: ";
    cin >> Number;
    if (Number%2==0 && Number%4==0){
        cout << "Even and Divisible BY 4";
    }
    else if (Number%2==0 && Number%4!=0){
        cout << "Even but Not Divisible BY 4";
    }
    else {
        cout << "Odd Number";
    }
    return 0;
}

// Question No.3 Grade Calculation
#include <iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter Your Marks: ";
    cin >> marks;
    if (marks<=100 && marks>=90){
        cout << "Grade A";
    }
    else if (marks<90 && marks>=75){
        cout << "Grade B";
    }
    else if (marks<75 && marks>=60){
        cout << "Grade C";
    }
    else if (marks<60 && marks>=40){
        cout << "Grade D";
    }
    else if (marks<40 && marks>=0){
        cout << "Fail";
    }
    else if (marks>100 || marks<0){
        cout << "Invalid Number";
    }

    return 0;
}

// Question No.4 Electricity Bill Calculator
#include <iostream>
using namespace std;
int main() {
    int meter;
    cout << "Enter Your Meter Number: ";
    cin >> meter;
    int calculate;
    int sum = 0;
    if (meter<=100 && meter>=0){
        sum += meter*5;
    }
    else if (meter>100 && meter<201){
        calculate = meter - 100;
        sum += 100*5;
        sum  += calculate*7;
    }
    else if (meter>200 && meter<=300){
        calculate = meter - 200;
        sum += 100*5;
        sum += 100*7;
        sum  += calculate*10;
    }
        else if (meter>300){
        calculate = meter - 300;
        sum += 100*5;
        sum += 100*7;
        sum += 100*10;
        sum  += calculate*15;
    }
cout << sum;
    return 0;
}

//Question No.4 Electricity Bill with fixed charges
#include <iostream>
using namespace std;
int main() {
    int meter;
    cout << "Enter Your Meter Number: ";
    cin >> meter;
    int calculate;
    int sum = 0;
    if (meter<=100 && meter>=0){
        sum += meter*5;
    }
    else if (meter>100 && meter<201){
        calculate = meter - 100;
        sum += 100*5;
        sum  += calculate*7;
    }
    else if (meter>200 && meter<=300){
        calculate = meter - 200;
        sum += 100*5;
        sum += 100*7;
        sum  += calculate*10;
    }
        else if (meter>300){
        calculate = meter - 300;
        sum += 100*5;
        sum += 100*7;
        sum += 100*10;
        sum  += calculate*15;
    }

cout << "Bill = " << sum << "\n";
cout << "Fixed charge = 50" << "\n";
int Fixed_charge;
Fixed_charge = sum+50;
cout << "Fixed charge = " << Fixed_charge << "\n";

    return 0;
}


//Question No.5 
#include <iostream>
using namespace std;

int main (){
    int salary;
    cout << "Enter Your Salary: ";
    cin >> salary;
    int sum = 0;
    int HRA;
    int DA;
    if (salary<=20000){
        HRA = salary*0.1;
        DA = salary*0.05;
        sum = salary+HRA+DA;
    }
    else if (salary>20000 && 50000>=salary){
        HRA = salary*0.15;
        DA = salary*0.1;
        sum = salary+HRA+DA;
    }
    else if (salary>50000 && salary<=100000){
        HRA = salary*0.2;
        DA = salary*0.15;
        sum = salary+HRA+DA;
    }
    else if (salary>100000){
        HRA = salary*0.25;
        DA = salary*0.2;
        sum = salary+HRA+DA;
    }
cout << "HRA = " << HRA << "\n";
cout << "DA = " << DA << "\n";
cout << "Final Salary = " << sum << "\n";
}

//Question No.6 Advance Version of Electricity Bill with fixed charges
#include <iostream>
using namespace std;

int main() {
    int unit;
    int sum = 0;
    int possible;
    int minus;
    cout << "Enter Your Electricity Unit: ";
    cin >> unit;
    if (0<=unit && 100>=unit){
        sum = unit*5;
    }
    else if (100<unit && 200>=unit){
        minus = unit-100;
        sum = 100*5+minus*7;
    }
    else if (200<unit && 300>=unit){
        minus = unit-200;
        sum = 100*5+100*7+minus*10;
    }
    else if (300<unit){
        minus = unit-300;
        sum = 100*5+100*7+100*10+minus*15;
    }
if (sum>1000){
    int discount = sum *0.05;
    cout << "5% discount applied" << "\n";
    cout << sum-discount+50;
}
else if (sum<=1000 && 0>sum){
    int fixedCharge = sum+50;
    cout << sum << "\n";
    cout << "Added Fixed Charges: ";
    cout << fixedCharge;
}
else{
    cout << "Invalid Number";
}
    return 0;
}