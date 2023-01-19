#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x, y;
    vector <pair<int, int>> v;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());
    for(vector <pair<int, int>> :: iterator it=v.begin(); it!=v.end(); it++){
        cout<<it->first<<' '<<it->second<<endl;
    }
    return 0;
}