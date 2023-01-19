#include <iostream>
using namespace std;
int main(){
    int n, l, r, sum=0;
    cin>>n>>l>>r;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(i>=l-1 && i<=r-1){
            sum+=arr[i];
        }
    }
    cout<<sum;
    return 0;
}