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
*/

/*
7] Find the sum of the elements of the array :

int printSum(int *arr, int idx, int n, int sum);
int printSum(int *arr, int idx, int n, int sum) {
    if(idx == n) {
        return sum;
    }
    sum = sum + arr[idx];
    printSum(arr, idx+1, n, sum);
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
    int res = printSum(arr, 0, n, 0);
    cout<<"Sum of all elements of the array : "<<res<<endl;
    return 0;
}
*/

/*
7] Remove all the occurence of the character from the string :

void removeChar(string &str, int idx, int n);
void removeChar(string &str, int idx, int n) {
    if(idx == n) {
        return ;
    }
    string curr = "";
    if(str[idx] == 'a') {
        curr = "";
    } else {
        curr = curr + str[idx];
    }
    cout<<curr;
    removeChar(str, idx+1, n);
}
int main() {
    string str;
    cout<<"Enter a word : ";
    cin>>str;
    int size = str.length();
    removeChar(str, 0, size);
    return 0;
}
*/

/*
9] Program to check whether the number or string is palindrome :
*/
string removeChar(string &str, int idx);
string removeChar(string &str, int idx) {
    if(idx == 0) {
        return " ";
    }
    string curr = "";
    curr = curr + num[idx];
    removeChar(str, idx-1, n);
    return curr;
}
int main() {
    string num;
    cout<<"Enter a number : ";
    cin>>num;
    int size = num.length();
    string ans = removeChar(str, size);
    if(ans == num) {
        cout<<num<<" is a palinedrone number.";
    } else {
        cout<<num<<" is not a palinedrone number.";
    }
    return 0;
}