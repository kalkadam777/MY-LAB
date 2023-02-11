l = [
    {
        'comp': 'Toyota', 
        'model': 'camry', 
        'year': 20, 
        'max speed': 115.2, 
        'from 0 to 100': 11.5
    }, 
    {
        'comp': 'Ford', 
        'model': 'Mustang', 
        'year': 95, 
        'max speed': 150.0, 
        'from 0 to 100': 8.6
    }, 
    {
        'comp': 'Mers',
        'model': 'Benz', 
        'year': 81, 
        'max speed': 90.0, 
        'from 0 to 100': 0.0
    }
]

l2 = []
for i in l:
    l2.append(i['max speed'])

print(max(l2))

for i,e in enumerate(l):
    if max(l2) in e.values():
        print("The Fastest car in a shop is", e['model'], 'with the maximum speed of',e['max speed'])