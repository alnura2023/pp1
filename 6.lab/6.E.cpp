#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double hypotenuse(int a, int b){
    double c;
    c=sqrt(a*a+b+b);
    return c;
}
int main(){
    int a, b;
    cin>>a>>b;
    cout<<setprecision(4)<<hypotenuse(a, b);
    return 0;
}