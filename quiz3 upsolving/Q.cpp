#include <iostream> 
using namespace std; 
int main(){ 
    int n; 
    cin>>n; 
    string s[n]; 
    for(int i=0; i<n; i++) { 
        cin>>s[i]; 
    } 
    string t="@gmail.com"; 
    for(int i=0; i<n; i++) { 
        if(s[i].find(t)!=string::npos){ 
            s[i].erase(s[i].end()-10,s[i].end()); 
            cout<<s[i]<<endl; 
        } 
    } 
    return 0; 
}
