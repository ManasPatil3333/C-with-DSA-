#include <iostream>
using namespace std;

/*
1] Program to find the factorial of given number : 

int factorial(int n);
int factorial(int n) {
    if(n==1) {
        return 1;
    }
    int res = n*factorial(n-1);
    return res;
}
int main() {
    int n;
    cout<<"Enter the number to find it's factorial : ";
    cin>>n;
    int ans = factorial(n);
    cout<<"Factorial of "<<n<<" is "<<ans<<"."<<endl;
    return 0;
}
*/

/*
2} Program to find the fiibonacci series of given number :

int fibonacci(int n);
int fibonacci(int n) {
    if(n==1 || n==0) {
        if(n==0) {
            return 0;
        }
        if(n==1) {
            return 1;
        }
    }
    int nm1 = fibonacci(n-1);
    int nm2 = fibonacci(n-2);
    int res = nm1 + nm2;
    return res;
}
int main() {
    int n;
    cout<<"Enter thr number to find it's fibonacci series : ";
    cin>>n;
    int ans = fibonacci(n);
    cout<<"Fibonacci series of "<<n<<" is "<<ans<<"."<<endl;
    return 0;
}
*/

/*
3] Given an integer, find out the sum of the digits usig recursion :

int sumOfDigit(int n);
int sumOfDigit(int n) {
    if(n>=0 && n<=9) {
        return n;
    }
    int res = sumOfDigit(n/10) + (n%10);
    return res;
}
int main() {
    int n;
    cout<<"Enter a number : ";
    cin>>n; 
    int ans = sumOfDigit(n);
    cout<<"Sum of the given digit is "<<ans<<"."<<endl;
    return 0;
}
*/

/*
4] Given two numbers p & q, find the value p^q using a recurssive function. :

int power(int p, int q);
int power(int p, int q) {
    if(q==0) {
        return 1;
    }
    if(q==1) {
        return p;
    }
    int res = power(p,q-1) * p;
    return res;
}
int main() {
    int p,q;
    cout<<"Enter a number : ";
    cin>>p;
    cout<<"Enter the power : ";
    cin>>q;
    int ans = power(p,q);
    cout<<"Answer : "<<ans<<endl;
    return 0;
}
*/

/*
5] Given an aaray , print all the elements of the array recurrsively :

int printArray(int *arr, int idx, int n);
int printArray(int *arr, int idx, int n) {
    if(idx == n) {
        return 1;
    }
    cout<<arr[idx]<<"\t";
    printArray(arr, idx+1, n);
}
int main() {
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array :";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    printArray(arr, 0, n);
    return 0;
}
*/

/*
6] Print the maximum element of the array :
*/
int printMaxElement(int *arr, int idx, int n, int res);
int printMaxElement(int *arr, int idx, int n, int res) {
    if(idx == n) {
        return res;
    }
    if (arr[idx] > res) {
        res = arr[idx];
    }
    printMaxElement(arr, idx+1, n, res);
}
int main() {
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array :";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int ans = printMaxElement(arr, 0, n, 0);
    cout<<"Maximum element in the array : "<<ans<<endl;
    return 0;
}