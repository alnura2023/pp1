#include <iostream>
using namespace std;
string prob(int a[], int i, int n, int k){
    if(i==n) 
    return "no";
    for(int j=0; j<n; j++){
        if(i!=j){
            if(abs(a[i]-a[j])<=k) 
            return "cheater"; 
        }  
    }
    return prob(a, i+1, n, k);
}
int main(){
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++) 
    cin>>a[i];
    cout<<prob(a, 0, n, k);
    return 0;
}