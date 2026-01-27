// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
// int name (){
//     cout<<"Hello world";
//     return 4+5;
// }

// int main() {
//    cout<<name();
//     return 0;
// }


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int sum(int n){
    if(n==0){
        return 1;
    }
    return n+sum(n-1);
}

int main() {
    cout<<sum(3);
    return 0;
}