#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool comp( pair < string , string > pr1 , pair < string , string > pr2 ){
	// if ( a1 > a2 ) return 
	if( pr1.first[0] > pr1.second[0])
}

int main(){
	int a[100];
	vector < pair < string , string > > vt;
	vt.push_back(15);
	vt.pop_back();
	// for cin 
	sort(vt.begin() , vt.end() , comp );
	
	cout << vt.size() << endl;
	for(int i = 0; i < vt.size();i++){
		cout << vt[i] << " ";
	}	
}
