#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n, max=INT_MIN, p;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max=arr[i];
            p=i;
            p++;
        }
    }
    cout<<p;
    return 0;
}