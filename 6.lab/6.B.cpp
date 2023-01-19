#include <iostream>
using namespace std;
void massiv(){
    int n;
    cin>>n;
    int a[n], b[n], c[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    for(int i=0; i<n; i++){
        c[i]=b[i]-a[i];
    }
    for(int i=0; i<n; i++){
        if(c[i]>0)
        cout<<c[i]<<" ";
        else
        cout<<c[i]*(-1)<<" ";
    }
}
int main(){
    massiv();
    return 0;
}