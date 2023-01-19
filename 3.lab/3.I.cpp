#include <iostream>
using namespace std;
int main(){
    int n, l, r, sum=0;
    cin>>n>>l>>r;
    l--;
    r--;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    while(l<=(l+r)/2){
        swap(arr[l], arr[r--]);
        l++;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
