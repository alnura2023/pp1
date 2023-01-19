#include <iostream>
#include <set>
using namespace std;
int main(){
    int n, sum=0;
    cin>>n;
    set<int> s;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    for(auto now=s.begin(); now!=s.end(); now++){
        sum+=*now;
    }
    cout<<sum;
    return 0;
}