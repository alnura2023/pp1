#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s;
	cin>>s;
	stack<char> c;
	for(int i=0; i<(int)s.size(); i++){
		if(s[i]=='(') 
		c.push('(');
		else if(s[i]==')'){
			if(c.size()==0){
				cout<<"NO\n";
				return 0;
			}
			else if(c.top()==')'){
				cout<<"NO\n";
				return 0;
			}
			else c.pop();
		}
	}
	if(c.size()==0)
	cout<<"YES\n";
	else
	cout<<"NO\n";	
	return 0;
}