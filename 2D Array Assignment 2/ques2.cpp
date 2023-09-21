#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int m=3;
    //transpose
    for(int i=0;i<m;i++){
        for(int j=0;j<i;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }

    }
    //inverse each column
    for(int j=0;j<m;j++){
        for(int i=0,k=m-1;i<=k;i++,k--){
            int temp=arr[i][j];
            arr[i][j]=arr[k][j];
            arr[k][j]=temp;
        }
    }
    
    //print
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }//code is working
}
