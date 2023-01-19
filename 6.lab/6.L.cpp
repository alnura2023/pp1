#include <iostream>
using namespace std;
bool strochka(string s, int n){
    int cnt=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='0' and s[i]<='9')
        cnt++;
        else
        cnt=0;
        if(cnt==n)
        return true;
    }
    return false;
}
int main(){
    string s;
    int n;
    cin>>s>>n;
    if(strochka(s, n))
    cout<<"Valid";
    else
    cout<<"Not valid";
    return 0;
}