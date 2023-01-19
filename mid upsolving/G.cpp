#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, m, k;
    cin>>n>>m>>k;
    if(k==1){
        for(int i=n; i<=m; i++){
            if(sqrt(i)==int(sqrt(i))){
                cout<<i<<" ";
            }
        }
    }
    if(k==-1){
        for(int i=m;i>=n;i--){
            if(sqrt(i) == int(sqrt(i))){
                cout<<i<<" ";
            }
        }
    }
}