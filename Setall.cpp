#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> set1;
    set1.insert(23);
    set1.insert(3);
    set1.insert(32);
    set1.insert(93);
    set1.insert(9);
    set1.insert(43);
    set<int>set2;
    set2.insert(999);

    for(auto value: set1){
        cout<<value<<" ";
    }cout<<endl;

    if(set1==set2){
        cout<<"Set1 and set2 are equal.";
    }
    else{
        cout<<"Set1 and set2 are not equal.";
    }cout<<endl;


    int sum = accumulate(set2.begin(),set2.end(),0);
    cout<<"Sum of Elements: " <<sum<<endl;

    set<int>result;
    set_union(set1.begin(),set1.end(),
    set2.begin(),set2.end(),
    inserter(result,result.begin())
); cout<<endl;

    for(auto value: result){
        cout<<value<<" ";
    }cout<<endl;
    return 0;
}