#include<iostream>
using namespace std;
int main(){
    cout<<"Enter no. of columns/rows of square matrix ";
    int n;
    cin>>n;
    int arr[n][n];
    cout<<"enter values of array ";
    for(int i=0;i<n;i++){//taking input of array
        for(int j=0;j<n;j++){
            int x;
            cin >> x;
            arr[i][j]=x;
        }

    }
    //code for printing mid row and mid column
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==n/2 || j==n/2){
                cout<<arr[i][j];
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    
    }
}