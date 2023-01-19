#include <iostream>
using namespace std;
int main(){
    string s; 
    cin>>s;
    char c=s[0];
    for(int i=0; i<s.size(); i++){
        if(s[i]>c) 
        c=s[i];
    }
    cout<<c;
}