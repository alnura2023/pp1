#include <iostream>
using namespace std;
int gcd (int a, int b) {
    while (b>0) {
        a%=b;
        swap(a, b);
    }
    return a;
}
int main(){
    int numb;
    cin>>numb;
    int arr[numb];
    for (int i=0; i<numb; i ++){
        cin>>arr[i];
    }
    int gcdr=-1;
    for (int i=0; i<numb; i ++){
        for (int j= i+1; j<numb; j ++){
            if (gcd(arr[i], arr[j]) > gcdr){
                gcdr=gcd(arr[i], arr[j]);
            }
        }
    }
    cout<<gcdr<<endl;
    return 0;
}
