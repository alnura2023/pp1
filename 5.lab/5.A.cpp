#include <iostream>
using namespace std;
int main(){
    string s; 
    cin>>s;
    int sm=0, cp=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' and s[i]<='z') 
        sm++;
        if(s[i]>='A' and s[i]<='Z') 
        cp++;
    }
    cout<<sm<<" "<<cp;
    return 0;
}