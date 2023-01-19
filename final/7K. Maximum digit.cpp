#include <iostream>
using namespace std;
int maximum(string s){
    int max=-1e9;
    for(int i=0; i<s.size(); i++){
        int n=s[i]-48, m;
        while(n>0){
            m=n%10;
            n/=10;
            if(m>max){
                max=m;
            }
        }
    }
    return max;
}
int main(){
    string s;
    cin>>s;
    cout<<maximum(s);
    return 0;
}