def addCar(c,m,y,mV,f0):
    car = {}
    car['comp']=c
    car['model'] = m
    car['year']=y
    car['max speed'] = mV
    car['from 0 to 100'] = f0
    return car


l = {
    '15081':{
        'comp': 'Toyota', 
        'model': 'camry', 
        'year': 2020, 
        'max speed': 115.2, 
        'from 0 to 100': 11.5
    }, 
    '21495':{
        'comp': 'Ford', 
        'model': 'Mustang', 
        'year': 1995, 
        'max speed': 150.0, 
        'from 0 to 100': 8.6
    }, 
    '07529':{
        'comp': 'Mers',
        'model': 'Benz', 
        'year': 1981, 
        'max speed': 90.0, 
        'from 0 to 100': 0.0
    }
}

l['00010']=addCar('Nissan','Pathfinder',2009,120,11)
l['91532']=addCar('Tesla', 'S', 2022, 150, 3.2)

for i in l:
    print(i,*l[i].values())

keys = list(l.keys())
keys = sorted(keys)
print(keys)

# sl = {i: l[i] for i in keys}

sl = {}
for i in keys:
    sl[i]=l[i]

for i in sl:
    print(i,*sl[i].values())