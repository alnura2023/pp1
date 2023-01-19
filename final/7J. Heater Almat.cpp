#include <iostream>
using namespace std;
int summ(int n){
    int m, sum=0;
    while(n>0){
        m=n%10;
        n/=10;
        sum+=(m/2);
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<summ(n);
    return 0;
}