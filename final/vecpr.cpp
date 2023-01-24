#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main(){
	vector < pair <int , int > > vt;
	int n = 5;
	for(int i = 0; i < n;i++){
		pair < int , int> pr;
		pr.first = i;
		pr.second = n- i;
		vt.push_back(pr);
	}
	for(int i = 0; i < vt.size();i++){
		cout << vt[i].first <<" " << vt[i].second << endl;
	}
	return 0;
}
