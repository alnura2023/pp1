#include <iostream>
using namespace std;
int main(){
    string s, t, ans; 
    cin>>s>>t;
    for(int i=0; i<t.size()/s.size(); i++){
        ans+=s;
    }
    cout << (ans == t ? "YES" : "NO");
    return 0;
}