#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n, m, cnt=0;
    cin>>n>>m;
    int a[n+1];
    for(int i=1; i<=n; i++){
        cin>>a[i]; 
    }
    for(int i=1; i<=n; i++){
        if(a[i]<=m) {
            cnt++;
        } 
    }
    cout<<cnt; 
    return 0;
}

