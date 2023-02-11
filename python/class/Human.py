class Human:
    def __init__(self, name, surname, dateOfBirth, nation, city) -> None:
        self.name = name
        self.surname = surname
        self.dateOfBirth = dateOfBirth
        self.nation = nation
        self.city = city
    
    def __str__(self) -> str:
        return self.name+' '+self.surname+' '+self.dateOfBirth+' '+self.nation+' '+self.city

