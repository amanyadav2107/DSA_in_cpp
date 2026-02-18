#include<iostream>
using namespace std;
int main(){
    int a[3][3],b[3][3],c[3][3],i,j,k,sum;
    cout<<"Enter 9 elemenbt for first array :" ;
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter 9 elemenbt for second array :" ;
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            cin>>b[i][j];
        }
    }
    cout<<"Multiplication of matrices"<<endl;
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            sum=0;
            for(k=0;k<=2;k++){
                sum=sum+a[i][k]*b[k][j];

            }
            c[i][j]=sum;
            cout<<c[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}