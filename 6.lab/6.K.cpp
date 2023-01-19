#include <iostream>
using namespace std;
int sum(int n){
    int m, summ=0;
    while(n>0){
        m=n%10;
        n/=10;
        summ+=m;
    }
    return summ;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}