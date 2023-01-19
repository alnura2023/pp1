#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n; 
    cin>>n;
    vector<string> v;
    vector<int> t;
    for(int i=0; i<n; i++){
        string name; 
        int point;
        cin>>name>>point;
        v.push_back(name);
        t.push_back(point);
    }
    sort(v.begin(), v.end());
    sort(t.begin(), t.end());
    for(int i=0; i<n; i++){
    cout<<v[i]<<" "<<t[i]<<endl;
    }
    return 0;
}