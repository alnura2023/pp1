#include <iostream>
using namespace std;
int sum(string s){
    int n=0;
    for(int i=0; i<s.size(); i++){
        n+=s[i]-48;
    }
    return n;
}
int main(){
    string s;
    cin>>s;
    cout<<sum(s);
    return 0;
}