a = int(input('Enter your upper bound'))
for i in range(1, a):
    print(i)
    print('第{0}项为{1}'.format(i,([1//5**(1//2)][((1+5**(1//2))//2)**i-((1-5**(1//2))//2)**i])))