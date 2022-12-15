#include <iostream>

using namespace std;
class Employee{
    public:
    string id,name,surname,dob,city,job;
    int salary;
    bool status;
    Employee(string id,string name,string surname,string dob,string city,int salary,string job,bool status){
        this->id = id;
        this->name = name;
        this->surname = surname;
        this->dob = dob;
        this->city = city;
        this->job = job;
        this->salary = salary;
        this->status = status;
        
    }
    
    string toString(){
        return id+' '+name+' '+surname+' '+dob+' '+city+' '+to_string(salary)+' '+job+' '+to_string(status);
    }

    string tableContent() {
		return
			"Human: " + surname + ' ' + name + '\n'
			+ "Date of Birthday: " + dob
			+ "\nCity: " + city
			+ "\nSalary:~ " + to_string(salary)
			+ "\nJob: " + job + 
            + "\nStatus: " + to_string(status);
    }
};
int main(){
    Employee myObj ("040231","Erkebulan","Koishybai","23.01.2005","Almaty",400000,"Backend Developer",1);
    cout << myObj.tableContent();
    return 0;
}