#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cout<<"Enter a string : ";
    string s;
    getline(cin,s);
    string copy;
    for(int i = s.length()-1; i>=0; i--){
        copy += s[i];
    }
    if(copy == s){
        cout<<"Input string is  a palindrome.";
    }
    else{
        cout<<"Input string is not palindrome.";
    }
    return 0;
}