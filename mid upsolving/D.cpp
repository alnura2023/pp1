#include <iostream> 
using namespace std; 
int cnt[1001]; 
int main(){
    int N=1001; 
    int n; 
    cin>>n; 
    for(int i=0; i<n; i++){ 
        int a; 
        cin>>a; 
        cnt[a]++; 
    } 
    int mx=0; 
    for(int i=0; i<N; i++){
        mx=max(mx, cnt[i]); 
    } 
    for(int i=N-1; i>=0; i--){ 
        if(mx==cnt[i]) 
        cout<<i<< " "; 
    }
    return 0;
}
