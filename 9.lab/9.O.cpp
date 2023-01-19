#include <iostream>
#include <map>
using namespace std;
int main(){
    int n; 
    cin>>n;
    map<string, string> m;
    for(int i=0; i<n; i++){
        string login, password; 
        cin>>login>>password;
        m[login]=password;
    }
    int k; 
    cin>>k;
    for(int i=0; i<k; i++){
        string login, password; 
        cin>>login>>password;
        if(m[login].empty()) 
        cout<<"login error"<<endl;
        else if(m[login]!=password) 
        cout<<"password error"<<endl;
        else 
        cout<<"correct password"<<endl;
    }
    return 0;
}