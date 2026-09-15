// // Checking existent 
// #include <iostream>
// #include<set>
// using namespace std;

// int main() {
//     set<int> set1, set2;
//     set1.insert(1);
//     set1.insert(2);
//     set1.insert(3);
//     set2.insert(1);
//     set2.insert(2);
//     set1.erase(3);
//     set1.insert(set2.begin(), set2.end())
//     if(set!==set2)
//     cout<<"set are equal"<<endl;
//     else
//     cout<<"set are not equal"<<endl;
//     if(includes(set1.begin(), set1.end(),set2.begin(),set2.end()))
//     cout<<"set2 is subset of set 1"<<endl;
//     else
//     cout<<"set 2 is not the subset of set 1"<<endl;
//     int x=2;
//     if(set1.count(x)) 
//     cout<<x<< "exist in set"<<endl;
//     else
//     cout<<x<<"does not exist"<<endl;
//     cout<<"element of set1 :";
//     for(int val : set 1)
//     cout<< "val"<<"  ";
 
    
    
//     return 0;
// }

//Print Position using find() function
#include <iostream>
#include<set>
#include<iterator> //for distance ()
using namespace std;
int main(){
    set<int> s={10,20,30,40};
    int x=30;
    auto it=s.find(x);
    if(it!=s.end()){
        int pos= distance(s.begin(),it);
        cout<<"Position of"<< x setuni<< "is : "<<pos<<endl;
    }
    else{
        cout<<"element not found";
    }
    return 0;

    




}