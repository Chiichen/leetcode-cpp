def dx(self,num:int) -> int:
    if len(str(num))==1:
        print(num)
    else:
        res=0
        for i in str(num):
            res+=int(i)
        if 0<res<10:
            print(res)
        else:
            return dx(num)
        