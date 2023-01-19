#include <iostream>
using namespace std;
int fib(int a, int b, int n){
    if(n==1){
        return a+b;
    }
    int c=a+b;
    return fib(b, c, n-1);
}
int main(){
    int n, a=0, b=1;
    cin>>n;
    if(n==1){
        cout<<0;
    }
    else if(n==2){
        cout<<1;
    }
    else{
        cout<<fib(a, b, n-2);
    }
    return 0;
}