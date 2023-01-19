#include <iostream>
#include <set>
using namespace std;
int main(){
    string str;
    cin>>str;
    set<int> s;
    for(int i=0; i<str.size(); i++){
        s.insert(tolower(str[i]));
    }
    cout<<s.size()<<endl;
    for(auto now=s.begin(); now!=s.end(); now++){
        cout<<(char)*now<<" ";
    }
    return 0;
}