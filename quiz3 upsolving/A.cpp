#include <iostream>
using namespace std;
bool lie(string s){
    bool flag=false;
    for (int i=0; i<s.size(); i++){
        if (s[i]>='0' && s[i]<='9'){
        return false;
        }
    }
    return true;
}

int main() {
    string s;
    getline(cin, s);
    string probl="";
    for (int i=0; i<s.size(); i ++){
        if (s[i]==' '){
            if (lie(probl)){
                cout<<probl<<endl;
            }
            probl=" ";
        }
        else{
            probl+=s[i];
        }
    }
    if(lie(probl)){
        cout<<probl<< endl;
    }
    return 0;
}
