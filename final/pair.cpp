#include<iostream>

using namespace std;

int main(){
	pair < int , string > pr;
	
	pr.first =  5;
	pr.second = "sem`";
	
	pair< pair < int , string > , string > Bigpr;
	Bigpr.first = pr;
	Bigpr.second = "Privet";
	pair < string ,pair< pair < int , string > , string > > BigBigpr;
	BigBigpr.first = "Salam";
	BigBigpr.second.second = "Hello";
	BigBigpr.second.first.first = 7;
	cout << Bigpr.second << Bigpr.first.second << Bigpr.first.first;
	return 0;
}
