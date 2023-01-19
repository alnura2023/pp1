#include <iostream>
using namespace std;
int Min(int n){
    int min=9;
    int temp;
    while(n>0){
        temp=n%10;
            if(temp<=min)
            min=temp;
            n=n/10;
    }
    return min;
}
int Max(int n){
    int max=0;
    int temp;
    while(n>0){
        temp=n%10;
        if(temp>=max)
        max=temp;
        n=n/10;
    }
    return max;
 }
int main(){
    int n;
    cin>>n;
    cout<<Max(n)<<" ";
    cout<<Min(n);
    return 0;
}