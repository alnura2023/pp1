#include <iostream>
using namespace std;
int sum(int n){
    int m, k=0;
    while(n>0){
        m=n%10;
        n/=10;
        k+=(m/2);
    }
    return k;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}