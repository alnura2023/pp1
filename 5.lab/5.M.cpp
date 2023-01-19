#include <iostream>
using namespace std;
int main(){
    string s;
    char x;
    int n, cnt=0;
    cin>>s>>x>>n;
    for(int i=0; i<s.size(); i++){
        if(x==s[i]){
            cnt++;
        }
    }
    if(cnt==n){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}