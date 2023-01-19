#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<map<char, int>> v;
	for (int i=0; i<n; i++){
		string s;
		cin>>s;
		map<char, int> mp;
		for(int j=0; j<s.size(); j++){
			mp[s[j]]++;
		}
		v.push_back(mp);
	}
    bool b=false;
	for(char ch='a'; ch<='z'; ch++){
		bool ok=true;
		for(auto h : v) {
			if(h[ch]==0){
				ok = false;
			}
		}
		if(ok){
			cout<<ch<<" ";
			b=true;
		}
	}
	if (!b)
	    cout<<"NO COMMON CHARACTERS";
	return 0;
}
