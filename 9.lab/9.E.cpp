#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int n, k=0;
    cin>>n;
    map<string, int> mp;
    for(int i=0; i<n; i++){
        string x;
        cin>>x;
        mp[x]++;
    }
    for(auto now=mp.begin(); now!=mp.end(); now++){
        if(now->second==3)
        k++;
    }
    cout<<k;
    return 0;
}