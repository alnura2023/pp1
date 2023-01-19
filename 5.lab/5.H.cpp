#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a[10];
    for(int i=0; i<10; i++){
        a[i]=0;
    }
    for(int i=0; i<10; i++){
        a[s[i]-48]+=1;
    }
    for(int i=0; i<10; i++){
        for(int j=i; j<10; j++){
            if(a[i]!=0 and a[j]!=0 and a[i]!=a[j]){
                cout<<"No";
                return 0;
            }
        }
    }
    cout<<"Yes";
    return 0;
}