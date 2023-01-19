#include <iostream>
using namespace std;
int main(){
    long n, m, sum=0, summ;
    cin>>n;
    while(n!=0){
        m=n%10;
        n=n/10;
        sum+=m;
        summ=sum-m;
    }
    if(summ%10==m){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}