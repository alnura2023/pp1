#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a, b;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(x%2==0){
            a.push_back(x);
        }
        else{
            b.push_back(x);
        }
    }
    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end());
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    for(int i=0; i<b.size(); i++){
        cout<<b[i]<<" ";
    }
    return 0;
}