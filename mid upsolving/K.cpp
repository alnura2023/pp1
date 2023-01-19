#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[2][n];
	for(int i=0; i<2; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}
	int m=0;
	int t;
	cin>>t;
	for(int i=0; i<2; i++){
		for(int j=0; j<n; j++){
			if(a[0][j]<=t && t<=a[1][j]){
				m++;
			}
		}
	}
	cout<<m/2<< endl;
}

