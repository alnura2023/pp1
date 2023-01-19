#include <iostream>
using namespace std;
int main(){
    int n, m, min=1e9, sum=0;
    cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    cout<<"coordinates of min elements: "<<endl;
    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            if(a[i][j]<min){
                min=a[i][j];
            }
        }
        for(int i=0; i<n; i++){
            if(a[i][j]==min){
                cout<<i+1<<";"<<j+1<<endl;
                break;
            }
        } 
        sum+=min;
        min=1e9;
    }
    cout<<endl<<"Their sum:"<<endl<<sum;
    return 0;
}