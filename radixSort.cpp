#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arr[] = {121, 1 ,423, 23, 564, 45, 788};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(max<arr[i])
        max=arr[i];
        
    }

    for (int place =1; max/place>0; place=place*10){
        int output[100];
        int count[10]={0};
        for(int i=0; i<n;i++){
            int digit =(arr [i]/place)%10;
            count[digit]++;
        }
        for(int i=1; i<10; i++)
        count[i] =count[i]+count [i-1];
        for (int i=n-1; i>=0; i--){
            int digit =(arr[i]/place)%10;
            output[count[digit]-1]=arr[i];
            count[digit]--;
        }
        for (int i=0; i<n;i++)
        arr[i] =output[i];
    }
    for (int i=0; i<n; i++)
    cout<<arr[i]<<"  ";
    return 0;
}