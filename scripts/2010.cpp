#include<cmath>
#include<iomanip>
#include<string>
#include<iostream>
#include<vector>
using namespace std;

struct bound{
	int m;
	int n;
}range;

int main(){
	vector<bound> range_list;
	while(cin>>range.m>>range.n){
		range_list.push_back(range);
	}
	for(int i=0;i<range_list.size();++i){
		int min = range_list[i].m;
		int max = range_list[i].n;
		int empty = 1;
		for(int j=min;j<=max;++j){
			int num = pow(j % 10,3) + pow(j /10 % 10,3) + pow(j / 100 % 100,3);
			if(num == j){
				empty = 0;
				cout<<j;
				if(j !=max){
					cout<<" ";
				}
			}
		}
		if( empty == 1){
			cout<<"no";
		}
		cout<<endl;
	}
}


