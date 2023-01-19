#include <iostream>
using namespace std;
int main(){
    int n, k=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        while(arr[i]!=0){
            if(arr[i]%10==0)
                k++;
                arr[i]/=10;
        }
    }
    cout<<k;
    return 0;
}