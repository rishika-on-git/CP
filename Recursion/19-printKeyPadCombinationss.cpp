// print all combinations of keypad


// for eg 578 to rec chlega jb tk ye empty string na ho jaye mtb 8 tak.
#include<iostream>
using namespace std;



void print_keypad_combinations(string s , vector<string>& codes , string ans){
    if(s.size() == 0){
        cout<<ans<<endl;
        return;
    }


    int digit = s[0] - '0';
    string code = codes[digit];


    for(int i = 0 ; i < code.size() ; i++){
        print_keypad_combinations(s.substr(1) , codes , ans + code[i] );
    }

    
}