// #include <iostream>
// using namespace std;

// int main() {
//     int arr[]= {5,7,7,8,8,10};
//     bool isFound = false;
//     int target = 8 ;
//     int size = sizeof(arr)/sizeof(arr[0]);
//     for(int i =0; i<size; i++){
//         if(arr[i]==target){
//             cout<<"Element found at position : "<<i+1;
//             isFound=true;
//             break;
//         }
//     }
//     if(!isFound){
//         cout<<"Element not found";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int arr[]= {5,7,7,8,8,10};
    bool isFound = false;
    int target = 8;
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            cout << "Element found at position : " << i << endl;
            isFound = true;
        }
    }

    if(!isFound) {
        cout << "Element not found";
    }

    return 0;
}
