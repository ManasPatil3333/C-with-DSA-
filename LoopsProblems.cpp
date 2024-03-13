#include <iostream>
using namespace std;

// 1] Program to count the number of digits of a given number :
/*
int main() {
    int number;
    int count = 0;
    cout<<"Enter a number : ";
    cin>>number;
    int num = number;
    while(num>0) {
        num = num/10;
        count++;
    }
    cout<<number<<" is a "<<count<<" digits number."<<endl;
    return 0;
}
*/

// 2] Program to sum the digits of a given number :
/**/
int main() {
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int sum = 0;
    while(num>0) {
        int lastDigit = num%10;
        sum = sum + lastDigit;
        num = num/10;
    }
    cout<<"Sum : "<<sum<<endl;
    return 0;
}