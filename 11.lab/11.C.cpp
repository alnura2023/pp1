#include <iostream>
#include <iomanip>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
map<string, int> mp;
int main(){	
	int n, total=0;
	cin>>n;
	map<string, int> mp;
	for (int i=0; i<n; i++){
		string name;
		int point;
		cin>>name>>point;
		mp[name]+=point;
		total+=point;
	}
	vector <pair<double, string>> v;
	map <string, int>::iterator it=mp.begin();
	for(it=mp.begin(); it!=mp.end(); it++){
		v.push_back(make_pair((double)it->second/total*100.0, it->first));
	}
	sort(v.rbegin(), v.rend());
	for(int i=0; i<v.size(); i++)
	cout<<setprecision(6)<<v[i].second<<" "<<v[i].first<<"%"<<endl;
}