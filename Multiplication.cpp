#include <iostream>
using namespace std;
int main(){
    int n, i, j, sum,k;
    cout<<"Matrix of order n";
    cin>>n;
    int a[n][n], b[n][n], c[n][n];
    cout<<"Enter " <<n<< "  elements for first array";
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
     cout<<"Enter "<< n <<"  elements for second array";
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cin>>b[i][j];
        }
    }
     cout<<"Multiplication of an array"<<endl;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            sum=0;
        for(k=0; k<n; k++){
            sum=sum+a[i][k]*b[k][j];
        }
        c[i][j]=sum;
        cout<<c[i][j]<<"  ";

        }
        cout<<endl;
    }
    return 0;

}