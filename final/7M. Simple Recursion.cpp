#include <iostream>
#include <cmath>
using namespace std;
void rec(int n){
    if(n==1){
        cout<<n;
        return;
    }
    else{
        rec(n-1);
        cout<<" "<<n;
    }
}
int main(){
    int n;
    cin>>n;
    rec(n);
    return 0;
}