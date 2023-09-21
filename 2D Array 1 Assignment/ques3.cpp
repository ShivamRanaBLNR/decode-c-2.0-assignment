#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={1,2,-3,4,0,0,-4,2,1,-1,2,3,-4,-5,-7,0};
    int r1,r2,l1,l2;
    int sum=0;
    cout<<"enter l1 r1 l2 r2 ";
    cin>>l1>>r1>>l2>>r2;
    for(int j=min(l1,l2);j<=max(l1,l2);j++){
        for(int i=min(r1,r2);i<=max(r1,r2);i++){
            sum+=arr[j][i];
        }

    }
    cout<< sum;

}
