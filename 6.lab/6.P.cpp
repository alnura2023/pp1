#include <iostream>
using namespace std;
void pos(){
    int n;
    cin>>n;
    if(n<0)
    cout<<(-1)*n;
    else
    cout<<n;
}
int main(){
    pos();
}