#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main(){
	int m, n;
	cin>>n>>m;
	vector<int> v;
	vector<int> t;
	int k;
	for(int i=0; i<n; i++){
		cin>>k;
		v.push_back(k);
	}
	for(int i=0; i<m; i++){
		cin>>k;
		t.push_back(k);
	}
	vector<int>:: iterator it1;
	vector<int>:: iterator it2;
	it1=unique(v.begin(), v.end());
	it2=unique(t.begin(), t.end());
	v.resize(distance(v.begin(), it1));
	t.resize(distance(t.begin(), it2));
	vector<int> u(v.size()+t.size());
	for(int i=0; i<u.size(); i+=2){
		u[i]=v[i/2];
	}
	for(int i=1; i<u.size(); i+=2){
		u[i]=t[i/2];
	}
	vector<int>:: iterator it;
	it=unique(u.begin(), u.end());
	u.resize(distance(u.begin(),it));
	for(int i=0; i<u.size(); i++){
		cout<<u[i]<<" ";
	}
	return 0;
}