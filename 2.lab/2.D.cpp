#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    if(n<m)
        cout<<2;
    else if(n%m>1) 
        cout<<(n/m)*2+2;
    else if(n%m==1) 
    cout<<(n/m)*2+1;
    return 0;
}