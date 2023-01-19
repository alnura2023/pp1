#include <iostream>
using namespace std;
int main(){
    int i, n;
    bool entoprime=true;
    cin>>n;
    if(n==0 || n==1){
        entoprime=false;
    }
    for(i=2; i<=n/2; ++i){
        if(n%i==0){
            entoprime=false;
            break;
        }
    }
    if(entoprime)
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}