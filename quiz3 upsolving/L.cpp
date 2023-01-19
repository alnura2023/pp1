#include <iostream>
using namespace std;
int main(){
    string s, t;
    getline(cin, s);
    for(int i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Y' || s[i]>='a' && s[i]<='y'){
            t=s[i]+1;
            cout<<t;
        }
        else if(s[i]=='Z' || s[i]=='z'){
            t=s[i]-25;
            cout<<t;
        }
        else
        cout<<s[i];
    }
    return 0;
}