#include <iostream>
using namespace std;
int ev(string s){
    int n=0;
    for(int i=0; i<s.size(); i++){
        if((s[i]-48)%2==0)
        n++;
    }
    return n;
}
int main(){
    string s;
    cin>>s;
    cout<<ev(s);
    return 0;
}