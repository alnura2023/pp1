#include <iostream>
using namespace std;
void strochka(){
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(i%2==0)
        s[i]=toupper(s[i]);
        cout<<s[i];
    }
}
int main(){
    strochka();
}