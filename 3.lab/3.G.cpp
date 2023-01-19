#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n, max=INT_MIN, min=INT_MAX, indmax;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max=arr[i];
            indmax=i;
        }
    }
    arr[indmax]=min;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}