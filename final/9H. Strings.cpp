#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string, int> mp;
    for(int i=1; i<=n; i++){
        string s;
        cin>>s;
        mp.insert(make_pair(s, i));
    }
    for(auto now:mp)
    cout<<now.first<<" "<<now.second<<endl;
    return 0;
}