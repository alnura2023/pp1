#include <iostream>
using namespace std;
int main(){
    int n, max=0, maxx=0;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(max==a[i][j]){
                a[i][j]=0;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           if(a[i][j]>maxx){
                maxx=a[i][j];
            }
        }
    }
    cout<<maxx;
    return 0;
}