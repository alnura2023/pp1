#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float m, a, b;
    cin>>a>>b;
    for(int i=-60;i<60;i++){
        if(pow(2,i)==b/a){
            m=i;
            cout<<"YES"<<" "<<m;
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
