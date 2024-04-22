


#include<iostream>
using namespace std;

// Before the advent of QWERTY keyboards, texts and numbers were placed on the same key. For example, 2 has “ABC”, so if we wanted to write anything starting with ‘A’ we need to type key 2 once. If we wanted to type ‘B’, press key 2 twice and thrice for typing ‘C’. Below is a picture of such a keypad.

// Mobile-keypad

// Examples:

// Input: 234
// Output: adg adh adi aeg aeh aei afg afh 
//              afi bdg bdh bdi beg beh bei bfg 
//              bfh bfi cdg cdh cdi ceg ceh cei 
//              cfg cfh cfi

// Explanation:  All possible words which can be 
// formed are (Alphabetical order):
// adg adh adi aeg aeh aei afg afh 
// afi bdg bdh bdi beg beh bei bfg 
// bfh bfi cdg cdh cdi ceg ceh cei 
// cfg cfh cfi
// If 2 is pressed then the alphabet can be a, b, c, 
// Similarly, for 3, it can be d, e, f, and for 4 can be g, h, i. 

// Input: 5
// Output: j k l
// Explanation: All possible words which can be 
// formed are (Alphabetical order):
// j, k, l, only these three alphabets 
// can be written with j, k, l.

// 573 --> 73 -->-->" "vector<string> getKeyPadCombinations(string &s, vector<string> &codes) {
    // Base case
    if (s.length() == 0) {
        vector<string> bres;
        bres.push_back("");
        return bres;
    }

    char ch = s[0]; // Get the first digit
    string ros = s.substr(1); // Get the rest of the string

    // Recursive call with the remaining string and codes
    vector<string> mres = getKeyPadCombinations(ros, codes);

    // Get the corresponding codes for the current digit
    string codesAtCh = codes[ch - '0'];

    vector<string> fres;

    // For each character in the codes corresponding to the current digit
    for (int i = 0; i < codesAtCh.size(); i++) {
        char c = codesAtCh[i];
        // Append each character to each string obtained from the recursive call
        for (auto it : mres) {
            fres.push_back(it + c);
        }
    }

    return fres;
}
