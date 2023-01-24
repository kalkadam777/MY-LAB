#include<iostream>
#include<set>

using namespace std;

int main(){
	set < int > s;
	s.insert(15);
	s.insert(3);
	s.insert(7);
	s.insert(15);
	s.insert(7);
	s.insert(7);
	// 3 7 15
	s.erase();
	set < int > :: iterator it = s.begin(); 
	for( ; it != s.end(); it++){
		cout << *it << " ";
	}
//	cout << s[0];
	
	return 0;
}
