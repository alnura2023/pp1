#include <iostream>
#include <map>
using namespace std;
int main(){
    int n; 
    cin>>n;
    multimap<int, int> m;
    for(int i=1; i<=n; i++){
        int x, y; 
        cin>>x>>y;
        m.insert(make_pair(x+y, i));
    }
    for(auto i : m) 
    cout<<i.second<<" ";
}