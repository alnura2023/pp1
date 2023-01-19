#include <iostream>
using namespace std;
string strochka(string s){
    string t;
    for(int i=0; i<s.size(); i++){
        int cnt=0;
        for(int j=0; j<10; j++){
            if(s[i]=="aeiouAEIOU"[j]) 
            cnt++;
        }
        if(cnt==0) 
        t+=s[i];
    }
    return t;
}
int main(){
    string s;
    getline(cin, s);
    cout<<strochka(s);
}