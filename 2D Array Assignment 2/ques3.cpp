#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int m=3;
    //code
    for(int j=0;j<m;j++){
        if(j%2==0){
            for(int i=m-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=0;i<m;i++){
                cout<<arr[i][j]<<" ";
            }
        }
    }//code is working
}
