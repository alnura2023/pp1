#include <iostream>
#include <map>
#include <set>
using namespace std;
int main(){
	int n;
	cin>>n;
	map <string, set<int>> mp;
	for(int i=0; i<n; i++){
		string s;
		int x;
		cin>>s>>x;
		mp[s].insert(x);
	}
	for(auto s : mp){
		cout<<s.first<<" ";
		if(s.second.size()<3)
		cout<<"NO BONUS"<<endl;
		else 
		cout<<"+1"<<endl;
	}
	return 0;
}