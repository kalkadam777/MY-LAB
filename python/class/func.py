from Employee import Employee


def loadfile(fileName) -> list:
    fileR = open(fileName,'r')
    
    l = []
    for line in fileR:
        s = line.split()
        l.append(Employee(s[0],s[1],s[2],s[3],s[4],s[5],s[6],s[7],s[8]))
        
    fileR.close()
    return l
