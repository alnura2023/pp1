#include <iostream>
using namespace std;
double p(double n, double m){
    double x;
    x=m*100/n;
    return x; 
}
int main(){
    int a, b;
    double c;
    cin>>a>>b;
    c=p(a,b);
    cout<<c;
    return 0;
}