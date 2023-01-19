#include <iostream> 
#include <string> 
using namespace std; 
string a(string s){ 
    if(s=="0"){ 
        return "false"; 
    } 
    else if(s=="1"){ 
        return "true"; 
    } 
    else{ 
        return s; 
    } 
} 
int main(){ 
    string s; 
    cin>>s; 
    cout<<a(s); 
    return 0; 
}
