#include <iostream>
using namespace std;
int main(){
    string s, t; 
    int n;
    cin>>s>>t;
    n=s.find(t);
    if(n!=-1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}