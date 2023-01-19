#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string, int> mp;
    for(int i=0; i<n; i++){
        string s;
        int k;
        cin>>s>>k;
        if(!mp[s])
        mp[s]=k;
        else
        mp[s]+=k;
    }
    for(auto now:mp){
        cout<<now.first<<" "<<now.second<<endl;
    }
    return 0;
}