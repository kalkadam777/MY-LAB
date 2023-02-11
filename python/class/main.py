from func import loadfile


l = loadfile('db.txt')

for i in l:
    print(i.salary,i.name)