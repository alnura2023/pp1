#include <iostream>
using namespace std;
bool perfectsquarrre(int n){
    for(int i=1; i*i<=n; i++){
        if((n%i==0) && (n/i==i)){
            return true;
        }
    }
    return false;
}
int main(){
    long long int n ;
    cin>>n ;
    if(n==0 || perfectsquarrre(n))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}