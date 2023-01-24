#include<iostream>
#include<map>
using namespace std;

int main(){
	int n;
	cin >> n;
	map < string , string > mp;
	for(int i = 0 ; i < n ; i++){
		string s , t;
		bool flag = false;
		cin >> s >> t;
		map < string , string > :: iterator it = mp.begin();
		for(it ; it != mp.end();it++){
			if(it->second == s ){
				mp[it->first] = t;
				flag = true;
			}
		}
		if(!flag) mp[s]=t;
	}
	map < string , string > :: iterator it = mp.begin();
	for( ; it!= mp.end(); it++){
		cout << it->first << " " << it->second << endl;
	}
	
	
	return 0;
}
