#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter no. of Elements";
    cin>>n;
    int arr[n];
    for (int i =0; i<n; i++)
    cin>>arr[i];
    for (int i=0; i<n-1; i++){
        int minindex=i;
        for (int j=i+1; j<n; j++){
            if( arr[j]<arr[minindex])
            minindex =j;
        }
        if (minindex !=1){
            int temp=arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;

        }
    }
    for(int i=0; i<n; i++)
    cout<<arr[i]<<"  ";
    return 0;
}
