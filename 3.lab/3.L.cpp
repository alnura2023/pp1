#include <iostream>
using namespace std;
int main() {
    int counta, countb, countc;
    cin>>counta;
    int a[counta];
    for(int i=0; i<counta; i++){
        cin>>a[i];
    }
    cin>>countb;
    int b[countb];
    for(int j=0; j<countb; j++){
        cin>>b[j];
    }
    countc=counta+countb;
    int c[countc];
    for(int k=0; k<countc; k++){
        if(k<counta) 
        c[k]=a[k];
        else 
        c[k]=b[k-counta];
    }
    int temp;
    for (int i=0; i<countc-1; i++) {
        for(int j=0; j<countc-i-1; j++) {
            if(c[j]>c[j+1]){
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
    for(int g=0; g<countc; g++){
        cout<<c[g]<<" ";
    }
    return 0;
}