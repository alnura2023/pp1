#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, k, m=0;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        if(k==v[i])
        m++;
    }
    cout<<m;
    return 0;
}