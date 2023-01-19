#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, k, sum=0;
    cin>>n;
    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cin>>k;
    sort(v.begin(), v.end(), greater<int>());
    for(int i=0; i<k; i++){
        sum+=v[i];
    }
    cout<<sum;
    return 0;
}