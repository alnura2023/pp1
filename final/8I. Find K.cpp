#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, k;
    cin>>n;
    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cin>>k;
    for(int i=0; i<n; i++){
        if(k==v[i]){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}