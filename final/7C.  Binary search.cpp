#include <iostream>
#include <cmath>
using namespace std;
bool mas(int n, int a[], int x){
    for(int i=0; i<n; i++){
        if(x==a[i]){
            return true;
        }
    }
    return false;
}
int main(){
    int n, x;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>x;
    if(mas(n, a, x))
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}