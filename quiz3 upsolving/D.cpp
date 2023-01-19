#include <iostream>
using namespace std;
int main(){
    int n;
    string s, d="0123456789ABCDEF";
    cin>>n;
    while(n>0){
        s=d[n%16]+s;
        n/=16;
    }
    cout<<s;
    return 0;
}