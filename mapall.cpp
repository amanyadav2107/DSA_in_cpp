#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int, string> map1;
    map1.insert({1,"Ash"});
    map1.insert({4,"jai"});
    map1.insert({2,"Avi"});
    map1.insert({2,"Avin"});

    for(auto value: map1){
        cout<<value.first<<" "<<value.second;
        cout<<endl;
    }cout<<endl;

    cout<<"Size: "<<map1.size();
    map1.erase(4);
    for(auto value: map1){
        cout<<value.first<<" "<<value.second;
        cout<<endl;
    }cout<<endl;
    return 0;
}