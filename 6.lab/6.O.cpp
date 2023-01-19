#include <iostream>
using namespace std;
bool lucky(int n){
    int m, k, sum=0;
    k=n%10;
    while(n>0){
        m=n%10;
        n/=10;
        sum+=m;
    }
        if(sum%k!=0){
            return false;
        }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(lucky(n))
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}