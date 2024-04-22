#include<iostream>
using namespace std;

void print_dec(int *arr , int n , int i){
    if(i ==n){
        return;
    }

    cout<<arr[i]<<" ";
    print_dec(arr,n,i+1);
}


int main(){
      int arr[]={1 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15};

      int n=sizeof(arr)/sizeof(int);
      print_dec(arr,n,0);
      return 0;
}