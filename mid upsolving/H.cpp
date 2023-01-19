#include <iostream>
using namespace std;
void prod(int arr[], int n){
    int a=arr[0], b=arr[1];
    for(int i=0; i<n; i++)
      for(int j=i+1; j<n; j++)
         if(arr[i]*arr[j]>a*b)
            a=arr[i], b=arr[j];
    cout<<a*b;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    prod(arr, n);
    return 0;
}
