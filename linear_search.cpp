#include <iostream>
using namespace std;

int main() {
    int arr[]= {1,2,3,23,55,99,4};
    bool isFound = false;
    int target = 3;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i =0; i<size; i++){
        if(arr[i]==target){
            cout<<"Element found at position : "<<i+1;
            isFound=true;
            break;
        }
    }
    if(!isFound){
        cout<<"Element not found";
    }

    return 0;
}