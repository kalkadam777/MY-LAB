from Human import Human

class Employee(Human):
    def __init__(self, id, name, surname, dateOfBirth, nation, city, job, salary, status) -> None:
        super().__init__(name, surname, dateOfBirth, nation, city)
        self.id = id 
        self.job = job
        self.status = int(status)
        self.salary = int(salary)
        
    def __str__(self) -> str:
        return self.id+' '+super().__str__()+' '+self.job+' '+str(self.salary)+' '+str(self.status)