#include <iostream>
using namespace std;
bool pol(string s){
    int n=0;
    for(int i=0; i<=s.size()/2-1; i++){
        if(s[i]==s[s.size()-1-i])
        n++;
    }
    return n=s.size()/2;
}
int main(){
    string s;
    cin>>s;
    if(pol(s))
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}