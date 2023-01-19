#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v;
	set<int> s;
	int m;
	int k;
	for(int i=0; i<n; i++){
		cin>>m;
		k=s.size();
		s.insert(m);
		if(k!=s.size()){
			v.push_back(m);
		}
	}
	do{
		for(int i=0; i<v.size(); i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
	while(next_permutation(v.begin(),v.end()));
	return 0;
}
