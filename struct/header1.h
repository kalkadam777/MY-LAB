#pragma once

#include <fstream>
#include <string>
#include "header.h"
#include <vector>

using namespace std;

vector<Employee> loadFile(string fileName){
	ifstream fileR(fileName);
	vector<Employee> vec;
	Employee tmp;
	string str;
	
	while (getline(fileR, str))
	{
		string id, name, sname, dob, city, salary, job, st, r;
		int i = 0;
		while (str[i]!=' ')
		{
			id += str[i];
			i++;
		}
		i++;
		while (str[i] != ' ') {
			name += str[i];
			i++;
		}
		i++;
		while (str[i]!=' ')
		{
			sname += str[i++];
		}
		i++;
		while (str[i]!=' ')
		{
			dob += str[i++];
		}
		i++;
		while (str[i]!=' ')
		{
			city += str[i++];
		}
		i++;
		while (str[i] != ' ')
		{
			salary += str[i++];
		}
		i++;
		while (str[i] != ' ')
		{
			job += str[i++];
		}
		i++;
		st = str[i];
		if (st=="0")
		{
			i+=2;
			while (i<str.length())
			{
				r += str[i++];
			}
		}
		tmp = Employee(id, name, sname, dob, city, stoi(salary), job, stoi(st), r);
		vec.push_back(tmp);
	}
	return vec;
}
bool cmpName(Employee& a,Employee& b){
	return a.name < b.name;
}
void listOutput(vector<Employee>vec){
	for (int i = 0; i < vec.size(); i++)
{
	cout << vec[i].toString() << endl;
}
}
vector<Employee> SortbyName(vector<Employee>vec){
	sort(vec.begin(),vec.end(),cmpName);
	return vec;
}
bool cmpId(Employee& a,Employee& b){
	return a.ID < b.ID;
}
vector<Employee>SortbyId(vector<Employee>vec){
	sort(vec.begin(),vec.end(),cmpId);
	return vec;
}
bool cmpCity(Employee& a,Employee& b){
	return a.city < b.city;
}
vector<Employee>SortbyCity(vector<Employee>vec){
	sort(vec.begin(),vec.end(),cmpCity);
	return vec;
}
bool cmpSalary(Employee& a,Employee& b){
	return a.salary < b.salary;
}
vector<Employee>SortbySalary(vector<Employee>vec){
	sort(vec.begin(),vec.end(),cmpSalary);
	return vec;
}
void fillter(vector<Employee>vec,string a){
	for (int i = 0; i < vec.size(); i++)
	{
		if(vec[i].toString().find(a) != -1){
			cout << vec[i].toString() << endl;
		}
	}
	
}