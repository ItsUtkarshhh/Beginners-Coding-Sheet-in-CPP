// Write a Program to Check Whether Number is Even or odd.
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n%2 == 0) {
        cout<<"Even";
    }
    else {
        cout<<"Odd";
    }
}

// Write a Program to Check Whether a Character is Vowel or Consonant.
#include<iostream>
using namespace std;

int main() {
    char ch;
    cin>>ch;
    if (ch == 'a' || ch == 'A') {
        cout<<"Vowel";
    }
    else if (ch == 'e' || ch == 'E') {
        cout<<"Vowel";
    }
    else if (ch == 'i' || ch == 'I') {
        cout<<"Vowel";
    }
    else if (ch == 'o' || ch == 'O') {
        cout<<"Vowel";
    }
    else if (ch == 'u' || ch == 'U') {
        cout<<"Vowel";
    }
    else {
        cout<<"Consonant";
    }
}

// Write a Program to Find Largest Number Among Three Numbers entered by users
#include<iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    if(n1>=n2 && n1>=n3) {
        cout<<"n1 is the largest number and its value is : "<<n1<<endl;
    }
    else if(n2>=n1 && n2>=n3) {
        cout<<"n2 is the largest number and its value is : "<<n2<<endl;
    }
    else {
        cout<<"n3 is the largest number and its value is : "<<n3<<endl;
    }
}

// Write a Program which accepts coefficients of a quadratic equation from the user and displays the roots (both real and complex roots depending upon the discriminant).
#include<iostream>
using namespace std;

// Here I have used the binary search!
int sqrt(int a) {
    int s = 0;
    int e = a;
    int mid = s + (e-s)/2;
    for(int i = 0; i<a; i++) {
        if(mid*mid>a) {
            e = mid-1;
        }
        else if(mid*mid<a) {
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return mid;
}

int main() {
    int a, b, c;
    cin>>a>>b>>c;
    if((b*b - 4*a*c) > 0) {
        cout<<"First Root : "<<((-2*b) + sqrt(b*b - 4*a*c))/(2*a)<<endl;
        cout<<"Second Root : "<<((-2*b) - sqrt(b*b - 4*a*c))/(2*a)<<endl;
    }
    else if((b*b - 4*a*c) < 0) {
        cout<<"First Root : "<<(-2*b)/2*a<<" + "<<sqrt(b*b - 4*a*c)/(2*a)<<"i"<<endl;
        cout<<"Second Root : "<<(-2*b)/2*a<<" - "<<sqrt(b*b - 4*a*c)/(2*a)<<"i"<<endl;
    }
    else {
        cout<<"First Root : "<<(-b)/a<<endl;
        cout<<"Second Root : "<<(-b)/a<<endl;
    }
}

// Write a Program to Check whether a year entered by user is Leap Year or not
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n%4 == 0 && n%100 == 0 && n%400 == 0) {
        cout<<"Leap Year";
    }
    else {
        cout<<"Not a Leap Year";
    }
}
