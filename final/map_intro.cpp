#include<iostream>
#include<set>
#include<vector>
#include<map>

using namespace std;

int main(){
	int a[5];
	
	int a[0] = 5;
	int a[1] = 10;
	int a[2] = 3;
	int a[3] = 1;
	int a[4] = 20;
	a[3]+=7;
	cout << a[3]; // 1 + 7
	
	map < int , int > mp;
	mp[3] = 5;
	mp[10] = 10;
	mp[6] = 3;
	mp[7] = 1;
	mp[12] = 20;
	
	mp[10] = 13;
	
	cout << mp[10]; // 3 + 13
	map < int , int > :: iterator  it = mp.begin();
	for(; it!= mp.end() ; it++){
		cout << it->first << " " << it->second << endl;
	}
	
}
