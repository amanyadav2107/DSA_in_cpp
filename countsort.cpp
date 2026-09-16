#include <iostream>
using namespace std;
int main(){
    cout<<"Enter size : ";
    int size;
    cin>>size;
    int arr[100];
    for(int i =0; i<size;i++){
        cin>>arr[i];
    }    int max = arr[0];
    for(int i =0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int count[max+1] = {0};
    for(int i=0; i<size;i++){
        count[arr[i]]++;
    }
    //prefixSum
    for(int i =1; i<=max; i++){
        count[i] += count[i-1];
    }

    int result[size];
    for(int i =size-1; i>=0; i--){
        int val = arr[i];
        int prefixCount = count[val];
        result[prefixCount-1] = val;
        count[val]--;
    }

    for(int i=0; i<size; i++){
        cout<<result[i]<<" ";
    }
    return 0;
}