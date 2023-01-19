#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map <string, int> mp;
    for(int i=0; i<n; i++){
        string s;
        int k;
        cin>>s>>k;
        if(!mp[s])
        mp[s]=k;
        else
        mp[s]+=k;
    }
    for(map <string, int> :: iterator it=mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}