from datetime import datetime

# d = datetime.now()
# print(d.year,'/',d.month,'/',d.day,sep='')

# d = datetime.now()
# print(d.strftime('%d/%m/%Y'))
class Employee:
    def __init__(self, id, name, surname, dateOfbirth, nation, city, job, salary, status) -> None:
        self.id = id
        self.name = name 
        self.surname = surname
        self.dateOfbirth = datetime.strptime(dateOfbirth,'%d.%m.%Y')
        self.nation = nation
        self.city = city
        self.job = job
        self.salary = int(salary)
        self.status = int(status)
        
    
    def __str__(self) -> str:
        return "{} {} {} {} {} {} {} {} {}".format(self.id, self.name, self.surname, self.dateOfbirth.strftime('%d/%m/%Y'), self.nation, self.city, self.job, self.salary, self.status)
        

fileR = open('db.txt','r')
l = []   
for line in fileR:
    s = line.split()
    l.append(Employee(s[0],s[1],s[2],s[3],s[4],s[5],s[6],s[7],s[8]))
fileR.close()
l.sort(key=lambda x:x.salary,reverse=True)
for i in l:
    print(i)


# h1 = Human('No Name','Names','Karaganda','22.01.2021')
# h2 = Human('Erkebulan','Koishybai','Almaty','20.01.2005')
# h3 = Human('Alzhan','Daribaev','Indusia','03.02.2005')
# h4 = Human('Uzbek','Kuttybek','Uzbekia','15.08.2004')
# h5 = Human('Emilien','Zharasbaev','Astana','23.09.2004')
# h6 = Human('Anuar','Kalkadamov','Almaty','28.01.1988')
# h7 = Human('Bakdaulet','Kalkadamov','Taldykorgan','20.11.1986')
# l = [h1,h2,h3,h4,h5,h6,h7]
# l.sort(key=lambda x:x.dateOfbirth)
# for i in l:
#     print(i)