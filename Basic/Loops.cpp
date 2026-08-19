//Question No.1 Sum of first n natural numbers using for loop
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter Your Number: ";
    cin >> n;
    int i;
    int sum =0;
    for (i=1; n>=i; i++){
        sum += i;
    }
cout << sum;
    return 0;
}

//Question No.2 Even or Odd number Sum using for loop
#include <iostream>
using namespace std;

int main() {
    int i=1;
    int n;
    cout << "Enter Your Value: ";
    cin >> n;
    int even =0;
    int Odd = 0;
    for (i; n>=i; i++){
        if (i%2==0){
            even = i+even;
        }
        else{
            Odd = i+Odd;
        }
    }
cout << "Sum Of Even Number = " << even << "\n";
cout << "Sum Of Odd Number = " << Odd << "\n";
    return 0;
}

//Question No.3 Count positive negative and zero on 10 input number
#include <iostream>
using namespace std;
int main() {
    int i;
    int n;
    int positive = 0;
    int negative = 0;
    int zero = 0;
    for (i=1; i<=10; i++){
        cin >> n;
        if (n>0){
            positive++;
        }
        else if (n<0){
            negative++;
        }
        else if (n==0){
            zero++;
        }
    }
cout << "Positive: = " << positive << "\n";
cout << "Negative: = " << negative << "\n";
cout << "Zero: = " << zero << "\n";
    return 0;
}