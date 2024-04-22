// this is great way for calculating the power of a number.
// since it has logarithmic time complexity.

#include <iostream>

using namespace std;

// if n is even --> x^n is (x^n/2 * x^n/2) else (x^n/2 * x^n/2 * x)


int power_log(int x , int n){
    if(n == 0)
        return 1;
    if(n == 1)
        return x;
    int a = power_log(x,n/2);
    int b = a*a;
    if(n%2 == 0)
        return b;
    else
        return x*b;
}

int main(){
    int n ;
    int x;
    cin>>x;
    cin>>n;
    cout<<power_log(x,n)<<endl;
    return 0;
}