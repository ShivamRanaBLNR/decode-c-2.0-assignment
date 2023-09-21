#include<iostream>
using namespace std;
int main(){
    int m;
    int n;
    cout<<"enter row and column size ";
    cin>>m;
    cin>>n;
    cout<<"enter values of array1";
    int arr1[m][n];
    int arr2[m][n];
    for(int i=0;i<m;i++){//array1 valuse putting
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            arr1[i][j]=x;
        }
    }
    cout<<"insert values of array2";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            arr2[i][j]=x;
        }
    }
    //updation
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr1[i][j]+=arr2[i][j];
        }
    }
    //printing array
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

}