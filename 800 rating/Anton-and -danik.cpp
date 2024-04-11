#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    string s;
    cin>>s;
    int cntA=0;
    int cntD=0;

    for(int i = 0; i<s.length(); i++){
        if(s[i]=='A'){
            cntA++;
        }else {
            cntD++;
        }
    }

    if(cntA>cntD){
        cout<<"Anton"<<endl;
    }else if(cntD>cntA){
        cout << "Danik"<<endl;
    }else{
        cout << "Friendship"<<endl;
    }
}