#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, k=0;
    cin>>n;
    while(pow(2, k)<=n){
        cout<<pow(2, k)<<" ";
        k++;
    }
    return 0;
}