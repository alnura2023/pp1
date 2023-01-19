#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, k, cnt=0;
    cin>>n>>k;
    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        if(k==v[i]){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}