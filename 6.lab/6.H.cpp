#include <iostream>
using namespace std;
bool val(int n){
    int m;
    while(n>0){
        m=n%10;
        n/=10;
        if(m%2!=0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(val(n))
    cout<<"Valid";
    else
    cout<<"Not valid";
    return 0;
}