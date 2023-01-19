#include <iostream>
using namespace std;
void strochka(){
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]==tolower(s[i]))
        s[i]=toupper(s[i]);
        cout<<s[i];
    }
}
int main(){
    strochka();
}