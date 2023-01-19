#include <iostream>
#include <set>
using namespace std;
int main(){
    string str;
    cin>>str;
    set <int> s;
    for(int i=0; i<str.size(); i++){
        s.insert(tolower(str[i]));
    }
    cout<<s.size()<<endl;
    for(set <int> :: iterator it=s.begin(); it!=s.end(); it++){
        cout<<(char)*it<<" ";
    }
    return 0;
}