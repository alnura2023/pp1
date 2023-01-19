#include <iostream>
using namespace std;
int maximalochka(string s){
    int max=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>max)
        max=s[i];
    }
    return max-48;
}
int main(){
    string s;
    cin>>s;
    cout<<maximalochka(s);
    return 0;
}