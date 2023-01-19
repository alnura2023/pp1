#include <iostream>
using namespace std;
int main(){
    int n, m=0, k=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            m++;
        }
        else{
            k++;
        }
    }
    cout<<m<<" "<<k;
    return 0;
}