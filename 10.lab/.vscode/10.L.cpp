#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int n, sum=0;
	cin>>n;
	int p;
	p=(1+n)*n/2;
	vector<int> v(p);
	for(int i=1; i<=n; i++){
		fill(v.begin()+sum, v.begin()+sum+i, i);
		sum+=i;
	}
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	return 0;
}