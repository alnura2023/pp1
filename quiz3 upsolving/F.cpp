#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    string s;
    string chars="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cin>>s;
    for(char c: chars){
        s.erase(std::remove(s.begin(), s.end(), c), s.end());
    }
    cout<<s;
    return 0;
}
