#include<iostream>
using  namespace std;

// abc ke subsequences will be --> a  b  c   ab  bc ac abc " " .


void printSubseqence(string s , string ans){
    if(s.length()==0){
        cout<<ans << endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);
    printSubseqence(ros,ans);
    printSubseqence(ros,ans+ch);
}


// HM PRINT M ANS STORE NI KRTE WHILE GOING UP WE KEEP ON CALCULATING THE ANS.
// for 3 length string --> 2^3 / 2 ke pairs bne and each pair has 3 characters .. so total length = 4*3 = 12

// so for n length string --> 2^n-1 * n characters hoge .. so itni memory ek time p nhi mil payegi .. for eg to store subsequences of 30 length string .. 31gb to ram hogi
int main(){
    string s;
    cin>>s;
    printSubseqence(s,"");
    return 0;
}