#include <iostream>
using namespace std;
int main(){
    int n, sumo=0, sume=0, a=0, b=0, c=0, m=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            c++;
            sume+=arr[i];
            a=sume*c;
        }
        if(arr[i]%2!=0){
            m++;
            sumo+=arr[i];
            b=sumo*m;
        }
    }
    cout<<"Left hand magic power:"<<" "<<a<<endl<<"Right hand magic power:"<<" "<<b;
    return 0;
}