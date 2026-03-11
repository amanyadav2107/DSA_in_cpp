#include <iostream>
using namespace std;

int main() {
    int arr[]={10,25,7,14,99,3};
    int n= sizeof (arr)/sizeof (arr[0]);
    int key =14;
    int index= -1;
    for(int i=0; i,n; i++){
        if(arr[i]==key){
            index=i;
            break;
        }
    }
    if(index!= -1)
    cout <<"no. found at "<<index+1<<" Position";
    else
    cout<<"Not found";

    
    return 0;
}