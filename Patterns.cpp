#include <iostream>
using namespace std;

/*
1] Pattern :

    ******
    ******
    ******

int main() {
    int rows, cols;
    cout<<"Enter rows : ";
    cin>>rows;
    cout<<"Enter columns : ";
    cin>>cols;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
*/
/*
2] Pattern : 

    ******
    *    *
    *    * 
    ******

int main() {
    for(int i=0; i<4; i++) {
        for(int j=0; j<6; j++) {
            if(i==1 || i==2) {
                if(j==0 || j==5) {
                    cout<<"*";
                } else {
                    cout<<" ";
                }
            } else {
                cout<<"*";
            }
        }
        cout<<"\n";
    }
    return 0;
}
*/
/*
3] Pattern :

    *
    **
    ***
    ****

int main() {
    for(int i=0; i<4; i++) {
        for(int j=0; j<i+1; j++) {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
*/
/*
4] Pattern :

    ****
    ***
    **
    *

int main() {
    for(int i=0; i<4; i++) {
        for(int j=0; j<4-i; j++) {
            cout<<"*"; 
        }
        cout<<"\n";
    }
    return 0;
}
*/
/*
5] Pattern :

       *
      ***
     *****
    *******

int main() {
    for(int i=0; i<4; i++) {
        for(int j=0; j<3-i; j++) {
            cout<<" ";
        }
        for(int k=0; k<i+1; k++) {
            cout<<"*";
        }
        for(int l=0; l<i; l++) {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
*/
/*
6] Pattern :

    1 2 3 4 5 6 7
    2 3 4 5 6 7 1
    3 4 5 6 7 1 2
    4 5 6 7 1 2 3
    5 6 7 1 2 3 4
    6 7 1 2 3 4 5 
    7 1 2 3 4 5 6 

int main() {
    for(int i=0; i<7; i++) {
        int m = 1;
        for(int j=0; j<7-i; j++) {
            cout<<i+m<<" ";
            m++;
        }
        int n = 1;
        for(int k=0; k<i; k++) {
            cout<<n<<" ";
            n++;
        }
        cout<<"\n";
    }
}
*/
/*
7] Pattern :

    123456
    1    6
    1    6
    123456

int main() {
    for(int i=0; i<4; i++) {
        int m = 1;
        for(int j=0; j<6; j++) {
            if(i==1 || i==2) {
                if(j==0 || j==5) {
                    if(j==0) {
                        cout<<"1";
                    }
                    if(j==5) {
                        cout<<"6";
                    } 
                } else {
                    cout<<" ";
                }
            } else {
                cout<<m;
                m++;
            }
        }
        cout<<"\n";
    }
    return 0;
}
*/
/*
8] Pattern :

    121212
    212121
    121212
    212121

int main() {
    int m,n;
    m=1;
    n=2;
    for(int i=0; i<4; i++) {
        for(int j=0; j<6; j++) {
            if((i+j)%2 == 0) {
                cout<<m;
            } else {
                cout<<n;
            }
        }
        cout<<"\n";
    }
    return 0;
}
*/
/*
9] Pattern :

    1
    12
    123
    1234

int main() {
    for(int i=0; i<4; i++) {
        int m = 1;
        for(int j=0; j<i+1; j++) {
            cout<<m;
            m++;
        }
        cout<<"\n";
    }
    return 0;
}
*/
/*
10] Pattern :

       1
      121
     12321
    1234321

int main() {
    for(int i=0; i<4; i++) {
        int m = 1;
        for(int j=0; j<3-i; j++) {
            cout<<" ";
        }
        for(int k=0; k<i+1; k++) {
            cout<<m;
            m++;
        }
        for(int l=i; l>0; l--) {
            cout<<l;
        }
        cout<<"\n";
    }
    return 0;
}
*/
/*

*/