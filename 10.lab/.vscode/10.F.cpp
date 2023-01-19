#include <iostream>
#include <map>
using namespace std;
int main(){
	map<int, double> mp;
	int n;
	cin>>n;
	int at1, at2, final, cr;
	double sum=0;
	for(int i=0; i<50; i++){
		mp[i]=0;
	}
	double cnt=1.0;
	for(int i=50; i<100; i+=5){
		mp[i]=cnt;
		mp[i+1]=cnt;
		mp[i+2]=cnt;
		mp[i+3]=cnt;
		mp[i+4]=cnt;
		cnt+=1.0/3.0;
	}
	mp[100]=4.0;
	double gpa=0;
	for(int i=0; i<n; i++){
		cin>>at1>>at2>>final>>cr;
		sum+=cr;
		if(at1+at2<30 || final<20){
			gpa+=mp[0];
		}
		else{
			gpa+=(mp[at1+at2+final]*cr);
		}
	}
	cout<<gpa/sum<<endl;
	return 0;
}