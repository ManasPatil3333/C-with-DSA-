#include <iostream>
using namespace std;

// 1] Pattern : 
/*
        1
       123
      12345    
     1234567    
    123456789
     1234567
      12345
       123
        1

int main() {
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    for(int i=1; i<=num; i++) {
        for(int j=0; j<num-i; j++) {
            cout<<" ";
        }
        int m = 1;
        for(int k=1; k<(i*2); k++) {
            cout<<m;
            m++;
        }
        cout<<"\n";
    }
    for(int i=1; i<num; i++) {
        for(int j=0; j<i; j++) {
            cout<<" ";
        }
        int n = 1;
        for(int k=1; k<(num-i)*2; k++) {
            cout<<n;
            n++;
        }
        cout<<"\n";
    }
    return 0;
}
*/

// 2] Pattern :
/*
        A
       ABC
      ABCDE
     ABCDEFG
    ABCDEFGHI
     ABCDEFG
      ABCDE
       ABC
        A

int main() {
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    for(int i=1; i<=num; i++) {
        for(int j=0; j<num-i; j++) {
            cout<<" ";
        }
        char m = 'A';
        for(int k=1; k<(i*2); k++) {
            cout<<m;
            m++;
        }
        cout<<"\n";
    }
    for(int i=1; i<num; i++) {
        for(int j=0; j<i; j++) {
            cout<<" ";
        }
        char n = 'A';
        for(int k=1; k<(num-i)*2; k++) {
            cout<<n;
            n++;
        }
        cout<<"\n";
    }
    return 0;
}
*/

// 3] Pattern :
/*
      *
      *
    *****
      *
      * 

int main() {
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    for(int i=1; i<num; i++) {
        for(int j=1; j<num; j++) {
            cout<<" ";
        }
        for(int k=1; k<2; k++) {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=1; i<num*2; i++) {
        cout<<"*";
    }
    cout<<endl;
    for(int i=1; i<num; i++) {
        for(int j=1; j<num; j++) {
            cout<<" ";
        }
        for(int k=1; k<2; k++) {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
*/

// 4] Pattern :

int main() {
    int rows;
    cout<<"Enter number of rows : ";
    cin>>rows;
    for(int i=1; i<=rows; i++) {
        for(int j=0; j<rows-i; j++) {
            cout<<" ";
        }
        for(int k=1; k<i*2; k++) {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}