#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main(){
	set < pair <int , int > > s;
	int n = 5;
	for(int i = 0; i < n;i++){
		s.insert(make_pair (i , i ));
	}
	s.insert(make_pair(3 , 3));
	s.insert(make_pair(2 , 3));
	s.insert(make_pair(3 , 2));
	set < pair <int , int > > :: iterator it = s.begin();
	for(; it!= s.end() ; it++){
		cout << (*it).first << " " << (*it).second << endl;
	}
	return 0;
}
