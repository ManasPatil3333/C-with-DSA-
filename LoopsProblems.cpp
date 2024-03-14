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
/*
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
*/

// 3] Reverse the digit :
/*
int main() {
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    int num = number;
    int sum = 0;
    while(num>0) {
        int last = num%10;
        sum = sum*10 + last;
        num = num/10;
    }
    cout<<"The reverse of "<<number<<" is "<<sum<<"."<<endl;
    return 0;
}
*/

// 4] Find the sum of the given series ( series : S = 1 - 2 + 3 = 4 + n... ) :
/*
int main() {
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int sum = 0;
    for(int i=1; i<=num; i++) {
        if(i%2 == 0) {
            sum -= i;
        } else {
            sum += i;
        }
    }
    cout<<"Sum is the series : "<<sum;
    return 0;
}
*/

// 5] Print the first n factorial number :
/*
int main() {
    int num;
    cout<<"Enter a number : "; 
    cin>>num;
    for(int i=1; i<=num; i++) {
        if(num%i == 0) {
            cout<<i<<"\t"; 
        }
    }
    return 0;
}
*/

// 6] Print the first n factorial number :
/*
int main() {
    int num;
    cout<<"Enter a number : "; 
    cin>>num;
    int product = 1;
    for(int i=1; i<=num; i++) {
        product *= i;
    }
    cout<<"The factorial of "<<num<<" is "<<product<<"."<<endl;
    return 0;
}
*/

// 7] Given two number. find first number raise to second number :

int main() {
    int num1, num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    int res = 1;
    while(num2>0) {
        res = res * num1;
        num2--;
    }
    cout<<"result : "<<res;
    return 0;
}