#include <iostream>
using namespace std;
string rec(int n){
    if(n==1)
    return "Yes";
    if(n%2!=0)
    return "No";
    return rec(n/2);
}
int main(){
    int n;
    cin>>n;
    cout<<rec(n);
    return 0;
}