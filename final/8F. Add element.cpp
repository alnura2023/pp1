#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, k, a;
    cin>>n;
    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cin>>k>>a;
    v.insert(v.begin()+k, a);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}