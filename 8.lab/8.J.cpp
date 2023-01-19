#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, min=1e9, max=-1e9;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        if(v[i]>max){
            max=v[i];
        }
        if(v[i]<min){
            min=v[i];
        }
    }
    cout<<max-min;
    return 0;
}