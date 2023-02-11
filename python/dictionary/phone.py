from func import addPhone
Smartphones = {}
l = ['Model','Color','Screen Size','RAM','Chipset Model','Wi-FI','5G Support','Storage Capacity','Camera','Operating System','Price']
Smartphones['Samsung'] = addPhone('A52','Black',6.5,8,'Qualcomm Snapdragon 720G',5,'No',256,64,'Android 11',219990)
Smartphones['Xiaomi'] = addPhone('Redmi Note 11','Gray',6.43,4,'Qualcomm Snapdragon 680',5,'No',128,50,'Android 11',102900)
Smartphones['Iphone'] = addPhone('11','Purple',6.1,4,'Apple A13 Bionic',5,'No',128,24,'IOS',285770)
Smartphones['Iphonе'] = addPhone('14','Blue',6.1,6,'Apple A15 Bionic',6,'Yes',128,24,'IOS',422270)
Smartphones['Iphоne'] = addPhone('14 Pro Max','Gold',6.7,6,'Apple A16 Bionic',6,'Yes',1024,72,'IOS',1070500)
Smartphones['Google'] = addPhone('Pixel 6A','Green',6.2,6,'Google Tensor',6,'Yes',128,24,'Android 12',239000)


# Сортировка по цене
# l = []
# for i in Smartphones.keys():
#     l.append(Smartphones[i]['Price(T)'])
# l.sort()
# print(l)
# Сортировка по имени
# Name = sorted(Smartphones)
# print(Name)
# n = {}
# for i in Name:
#     n[i] = Smartphones[i]
# for x, y in n.items():
#     print('\nComp:',x)
#     for key in y:
#         print(key + ':',y[key])
# Сортировка по размеру дисплея
# d = []
# for i in Smartphones.keys():
#     d.append(Smartphones[i]['Screen Size(in)'])
# d.sort()
# print(d)


    