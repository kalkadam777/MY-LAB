#include <iostream>
#include <vector>
#include <cmath>
#include <time.h>
#include <string>
#include <algorithm>

using namespace std;

struct Human
{
    string id, name, surname, dob, location;
    int accountTNG,accountUSD;
    double percentTNG, percentUSD;
    string Hg(){
        return name + ' ' + surname + ' ' + dob + ' ' + location + ' ' + to_string(percentTNG )+ ' ' + to_string(percentUSD) + ' ' + to_string(accountTNG) + ' ' + to_string(accountUSD);
        }
    Human(string i,string n, string sn, string d, string l, double perT,double perU,int acT,int acU ){
    name = n;
    surname = sn;
    dob = d;
    location = l;
    id = i;
    percentTNG = perT;
    percentUSD = perU;
    accountTNG = acT;
    accountUSD = acU;
    }
    Human() {

    }
};
struct BANK{
   Human personalInfo;
   double calcDepositTNG(){
    int n = 4,b;
    b = (accountTNG + accountTNG*(percentTNG/100))*n;
    cout << b;
   }
};

int main() {
	BANK b1;
    b1.personalInfo = Human("220022111", "Erkebulan", "Koishybai", "23.01.2005", "Almaty", 14.0, 1.5, 1000000, 5000);

	cout <<b1.personalInfo.surname << endl << b1.personalInfo.Hg();
}