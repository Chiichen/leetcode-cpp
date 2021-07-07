import math
a = int(input('Enter your upper bound'))
b = int(1)
c = int(2)
print('第1项为1')
print('第2项为1')
for i in range (2, a):
    if math.ceil(i/2) == i/2:   #判断为偶
        print('第{0}项为{1}'.format(i+1,c))
        b = b+c
        c = b+c #构造第二组数列
    else:
        print('第{0}项为{1}'.format(i+1,b))
    