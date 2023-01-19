#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, a, b;
    cin>>n;
    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cin>>a>>b;
    v.erase(v.begin()+a, v.begin()+b+1);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}