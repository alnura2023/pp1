#include <iostream>
using namespace std;
int dish(int sum, string s) {
    for(int i=0; i<s.size(); i++) {
        sum+=s[i];
    }
    return sum;
}
int main() {
    string s;
    cin>>s;
    int a=dish(0,s);
    if(a>=300){
        cout<<"It is tasty!";
    }
    else if(a<300){
        cout<<"Oh, no!";
    }
    return 0;
}
