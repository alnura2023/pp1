#include <iostream>
#include <cstring> 
using namespace std;
int main(){
    int sum=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='0' and s[i]<='9'){
            sum+=s[i]-'0';
        }  
    }
    cout<<sum;
    return 0;
}