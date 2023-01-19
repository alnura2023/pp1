#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    char a;
    int n=1, max=0;
    cin>>s;
    if(s.size() == 1)
    {
        cout<<s<<" "<<1;
        return 0;
    }
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i]==s[i + 1])
        {
            n+=1;
        }
        else
        {
            if(n>max)
            {
                a=s[i];
                max=n;
            }
            n=1;
        }
    }
    if(s[s.size()-1]==s[s.size()-2])
    {
        if(n>max)
        {
            cout<<s[s.size()-1]<<" "<<n;
            return 0;
        }
    }
    cout<<a<<" "<<max;
}
