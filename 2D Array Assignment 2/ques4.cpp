#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "enter the value of n ";
    cin>>n;
    int arr[n][n];
    
    int lc=0,lr=0,mc=n-1,mr=n-1;
    int x=1;
    //
    while(lr<=mr && lc<=mc && x<=(n*n)){
        for(int i=lc;(i<=mc) && (x<=(n*n));i++){//right
            arr[lr][i]=x;
            x++;
        }
        lr++;
        for(int i=lr;i<=mr && x<=(n*n);i++){//down
            arr[i][mc]=x;
            x++;
        }
        mc--;
        for(int i=mc;i>=lc && x<=(n*n);i--){//left
            arr[mr][i]=x;
            x++;
        }
        mr--;
        for(int i=mr;i>=lr && x<=(n*n);i--){//up
            arr[i][lc]=x;
            x++;
        }
        lc++;
    }
        
    
    //print
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
