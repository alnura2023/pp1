#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, m=0; 
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x; 
        cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            for(int k=0; k<n; k++)
                if(v[k]==(v[i]^v[j])){
                    m++;
                    break;
                }
    cout<<m;
    return 0;
}