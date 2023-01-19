#include <iostream>
using namespace std;
int main(){
    int sume=0, sumo=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(i%2==0){
            sume++;
        }
        else{
            sumo++;
        }
    }
    if(sume==sumo){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}