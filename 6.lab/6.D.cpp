#include <iostream>
using namespace std;
bool massiv(int n, int a[], int x){
    for(int i=0; i<n; i++){
        if(x==a[i])
        return true;
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
    if(massiv(n, a, x))
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}