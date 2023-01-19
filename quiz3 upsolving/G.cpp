#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n;
    cin>>n;
    int k=0;
    char a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(a, a+n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<s.size(); j++){
            if(a[i]==s[j]){
                k++;
            }
        }
        cout<<a[i]<<" - "<<k<<endl;
        k=0;
    }
    return 0;
}
