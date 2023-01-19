#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int, int>> v;
    int x, y;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());
    for(auto now=v.begin(); now!=v.end(); now++){
        cout<<now->first<<" "<<now->second<<endl;
    }
    return 0;
}