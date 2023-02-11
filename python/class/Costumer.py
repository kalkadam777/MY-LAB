from Human import Human

class Costumer(Human):
    def __init__(self, name, surname, dateOfBirth, nation, city) -> None:
        super().__init__(name, surname, dateOfBirth, nation, city)

    def __str__(self) -> str:
        return super().__str__()

