#include<iostream>
using namespace std;
int main()
{
    int r1,c1;
    cin>>r1>>c1;
    int A[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }//steam halil
    int r2,c2;
    int B[r2][c2];
    cin>>r2>>c2;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<B[i][j];
        }
    }
    if(c1!=c2){
        cout<<"matrix multplication not possible for this input"<<endl;
    }
    int c[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int value =0;
            for(int k=0;k<r2;k++){
                value +=A[i][k]*B[k][j];
            }
            c[i][j]=value;
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<c[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}