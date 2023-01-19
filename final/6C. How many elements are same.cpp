#include <iostream>
using namespace std;
int same(int n, int a[], int b[]){
    int cnt=0, m=n;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i]==b[j]){
                b[j]=b[m-1];
                m--;
                cnt++;
                break;
            }
        }
    }
    return cnt;
}
int main(){
    int n; 
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
        cin>>b[i];
    cout<<same(n, a, b);
    return 0;
}