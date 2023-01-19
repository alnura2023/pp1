#include <iostream>
#include <map>
using namespace std;
int main(){
    int n, k=0; 
    cin>>n;
    map<int, int> mp;
    for(int i=0; i<n; i++){
        int x; 
        cin>>x;
        mp[x]++;
    }
    for(auto now=mp.begin(); now!=mp.end(); now++){
        if(now->second>=2) 
        k++;
    }
    cout<<k;
    return 0;
}