#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int n, cnt=0;
    cin>>n;
    map <int, int> mp;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    for(map <int, int> :: iterator it=mp.begin(); it!=mp.end(); it++){
        if(it->second>=2)
        cnt++;
    }
    cout<<cnt;
    return 0;
}