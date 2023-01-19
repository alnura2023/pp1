#include <iostream>
using namespace std;
char get(int c){
    if(c>=10){
        return 'A'+c-10;   
    }
    return c+'0';
}
void rec(int n, int k){
    if(n==0)
    return;
    rec(n/k, k);
    cout<<get(n%k);
}
int main(){
    int n, k;
    cin>>n>>k;
    rec(n, k);
    return 0;
}