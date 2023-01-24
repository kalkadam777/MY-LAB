#include<iostream>
#include<set>
#include<vector>
#include<map>

using namespace std;

int main(){

	map < string , string > mp;
	mp["Hello"] = "Privet";
	mp["Sun"] = "Solnce";
	mp["Moon"] = "Luna";
	
	map < string , string > mp2;
	mp2["Salam"] = "Hello";
	mp2["Kun"] = "Sun";
	mp2["Ai"] = "Moon";
	 
	string s;
	cin >> s; 
	cout << mp[mp2[s]] << endl;
	
	map < string , string > :: iterator  it = mp.begin();
	for(; it!= mp.end() ; it++){
		cout << it->first << " " << it->second << endl;
	}
	
}
