#include<iostream>
using namespace std;

int maxArr( int *arr ,  int i , int size){
    if(i==size){
        return INT_MIN;
    }

    int maxiii = arr[i];

    return max(maxiii, maxArr(arr , i+1 , size));
    
}

int main(){

 int arr[]= {0,1,2,3,4,5,6,7,8,9,10 ,11,12,13,14,15,16,17};
 int size = sizeof(arr)/sizeof(arr[0]);

 cout<<maxArr(arr, 0, size);
 
}