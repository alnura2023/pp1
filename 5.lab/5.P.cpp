#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]!='z'){
            s[i]++;
        }
        else{
            s[i]='a';
        }
    }
    cout<<s;
    return 0;
}