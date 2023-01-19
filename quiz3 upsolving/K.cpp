#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    reverse(s.begin(), s.end());
    int sum=0, temp=1;
    for(int i=0; i!=s.length(); i++){
        sum=sum+temp*(s[i]-48);
        temp*=2;
    }
    cout<<sum;
    return 0;
}
