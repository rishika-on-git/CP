#include<iostream>
using namespace std;

int pow_linear(int x , int n){
    if(n==1){
        return n;
    }

    if(n==0){
        return 1; //anything raised to power 0  is 1.
    }


    int p = pow_linear(x , n-1);
    return x*p;


    // recursion x^(n-1) calculate krdega aur hm usme bs x multiply krdege.
}

int main(){

    int x , n;
    cin>>x>>n;

    cout<<pow_linear(x,n)<<endl;
    return 0;
     
}