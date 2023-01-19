#include <iostream>
using namespace std;
bool massiv(int n, int a[], int m){
    for(int i=0; i<n; i++){
        if(m==a[i])
        return true;
    }
    return false;
}
int main(){
    int n, m;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>m;
    if(massiv(n, a, m))
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}