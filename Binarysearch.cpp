#include <iostream>
using namespace std;

int main() {
    int arr[]={3,7,10,14,25,99};
    int n= sizeof (arr)/sizeof (arr[0]);
    int key =14;
    int index= -1;
    int low =0, high=n-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
        {index=mid;
        break; }
        else if(arr[mid]<key)
        low = mid+1;
        else
        high =mid-1;
    }
    if(index!=-1)
    cout<<"Found at "<<index+1<<" Position";
    else
    cout<<"not found";
    return 0;
}
