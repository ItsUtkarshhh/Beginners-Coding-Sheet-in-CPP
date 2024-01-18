// Write a Program to print "Starting with Programming and Basics!"
#include<iostream>
using namespace std;

int main() {
    cout<<"Starting with Programming and Basics!";
}

// Write a Program to Print Integer Number Entered by User
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    cout<<n;
}

// Write a Program to Add Two Integer Numbers Entered by user
#include<iostream>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    cout<<"Sum of two integers"<<a+b;
}

// Write a program where the user is asked to enter two integers (divisor and dividend) and the quotient and the remainder of their division is computed.(Both divisor and dividend should be integers.)
#include<iostream>
using namespace std;

int main() {
    int dividend, divisor, quotient, remainder;
    cin>>dividend>>divisor;
    cout<<"Quotient : "<<dividend/divisor;
    cout<<"Remainder : "<<dividend%divisor;
}

// Write a Program to Find Size of int, float, double and char in your computer.
#include<iostream>
using namespace std;

int main() {
    cout<<sizeof(int)<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(char)<<endl;
}

// Write a Program to Swap Two Number.
#include<iostream>
using namespace std;

int main() {
    int x,y;
    cin>>x>>y;
    cout<<"X : "<<x<<" & Y : "<<y<<endl;
    int temp = y;
    y = x;
    x = temp;
    cout<<"X : "<<x<<" & Y : "<<y<<endl;
}

// Write a Program to Find ASCII Value of a Character
#include<iostream>
using namespace std;

int main() {
    char ch;
    cin>>ch;
    cout<<int(ch);
}

// Write a Program to Multiply two decimal Numbers entered by User
#include<iostream>
using namespace std;

int main() {
    float a, b;
    cin>>a>>b;
    cout<<a*b;
}
