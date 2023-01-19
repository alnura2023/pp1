#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n, m, l, max=INT_MIN;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cin>>l;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(max<arr[i][j]){
                max=arr[i][j];
                
            }
        }
    }
    if(max>l){
        cout<<"Penalty!";
    }
    if(max<=l){
        cout<<"No penalty for today.";
    }
    return 0;
}