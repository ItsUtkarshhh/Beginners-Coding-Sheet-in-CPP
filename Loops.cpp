#include<iostream>
using namespace std;

// Write a Program to Calculate Sum of first N Natural Numbers (here value of N is Entered by user)
int sumNatural(int n) {
    int ans = 0;
    for(int i = 1; i<=n; i++) {
        ans = i + ans;
    }
    return ans;
}

// Write a Program to Find Factorial of a given number N (N is entered by user)
int fact(int n) {
    if(n == 0) {
        return 1;
    }
    else {
        return n * fact(n-1);
    }
}

// Write a Program to Generate Multiplication Table of a number (entered by the user) using a for loop
void multiplicationTable(int n) {
    for(int i=1; i<=10; i++) {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
}

// Write a Program to Display Fibonacci Series element based on index (n is entered by user)
int fib(int n) {
    if(n==0) {
        return 0;
    }
    else if(n==1) {
        return 1;
    }
    else {
        return fib(n-1) + fib(n-2);
    }
}

// Write a Program to Display Fibonacci Series element based on index (n is entered by user)
int fibSeries(int n) {
    int first = 0; int second = 1; int next;
    cout<<"Fibonacci Series upto "<<n<<"th index is : ";
    if(n==0) {
        cout<<first;
    }
    else if(n==1) {
        cout<<second;
    }
    else {
        cout<<"0 1 ";
        for(int i=2; i<=n; i++) {
            next = first + second;
            cout<<first+second<<" ";
            first = second;
            second = next;
        }
    }
}

// Write a Program to Find GCD or HCF of two numbers entered by user
void GCD(int n) {

}

int main() {
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    cout<<"Sum of first natural number is : "<<sumNatural(a)<<endl;
    cout<<"Factorial of "<<b<<" is "<<fact(b)<<endl;
    multiplicationTable(c);
    cout<<d<<"th element of Fibonacci series is : "<<fib(d)<<endl;
    fibSeries(e);
    GCD(f);
}
