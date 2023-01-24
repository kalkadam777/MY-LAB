#pragma once

#include <iostream>
#include <string>

using namespace std;


class Employee {
public:
	int salary;
	string ID, name, surname, dateOfBirth, city, job, reason;
	bool status;

public:
	Employee(string dd="none", string nm = "none", string snm = "none", string dOB = "none", string ct = "none", int slr = -1, string j = "none", bool stt = 1, string rsn = "none")
	{
		ID = dd;
		salary = slr;
		name = nm;
		surname = snm;
		dateOfBirth = dOB;
		city = ct;
		job = j;
		status = stt;
		reason = rsn;
	}

	string toString() {
		string s = ID + ' ' + name + ' ' + surname + ' ' + dateOfBirth + ' ' + city + ' ' + to_string(salary) + ' ' + job + ' ' + to_string(status);
		if (status == false) {
			s += ' ' + reason;
		}
		return s;
	}

	string tableContent() {
		string s =
			"Human: " + surname + ' ' + name + '\n'
			+ "Date of Birthday: " + dateOfBirth
			+ "\nCity: " + city
			+ "\nSalary: ~" + to_string(salary)
			+ "\nJob: " + job +
			+"\nStatus: " + to_string(status);
            if(status == 0)
            {
                s += "\n" + reason;
            }
            return s;
	}
};