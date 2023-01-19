#include <iostream>
using namespace std;
void maximalka(){
    int a[4], max=-1e9;
    for(int i=0; i<4; i++){
        cin>>a[i];
    }
    for(int i=0; i<4; i++){
        if(a[i]>max)
        max=a[i];
    }
    cout<<max;
}
int main(){
    maximalka();
}