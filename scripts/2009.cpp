#include<cmath>
#include<iomanip>
#include<string>
#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> m,n;
	int num_m,num_n;
	while(cin>>num_m>>num_n){
		m.push_back(num_m);
		n.push_back(num_n);
	}
	for(int i=0;i<m.size();++i){
		int a = m[i];
		int b = n[i];
		double sq = a;	
		double sum = 0;
		for(int j = 1;j<= b;++j){
			sum +=sq;
			sq = sqrt(sq);
		}
		cout<<setiosflags(ios::fixed);
		cout<<setprecision(2)<<sum<<endl;
	}
}


