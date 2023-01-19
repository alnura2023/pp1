#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
bool newsort(vector<int> v, vector<int> t){
	int sum=0;
	int summ=0;
	for(int i=0; i<v.size(); i++){
		sum+=v[i];
	}
	for(int i=0; i<t.size(); i++){
		summ+=t[i];
	}
	if(sum>summ){
		return false;
	}
	else{
		if(sum<summ){
			return true;
		}
		else{
			if(v.size()>t.size()){
				return false;
			}
			else{
				if(v.size()<t.size()){
					return true;
				}
				else{
					for(int i=0; i<v.size();i++){
						if(v[i]>t[i]){
							return false;
						}else{
							if(v[i]<t[i]){
								return true;
							}
						}
					}
					return true;
				}
			}
		}
	}
}
int main(){
	int n;
	cin>>n;
	vector<vector<int>> v;
	int m;
	for(int i=0; i<n; i++){
		cin>>m;
		vector<int> vm;
		int k;
		for(int i=0; i<m; i++){
			cin>>k;
			vm.push_back(k);
		}
		v.push_back(vm);
	}
	sort(v.begin(), v.end(), newsort);
	for(int i=0; i<v.size(); i++){
		for(int j=0; j<v[i].size(); j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}