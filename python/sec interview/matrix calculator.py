from tkinter import  Tk,Menu,messagebox,Text,END
from re import match,findall
from numpy.linalg import inv,solve
from numpy import zeros,array,dot
from os.path import exists
def Show_Info():
    if exists("注意事项.txt"):
        pass
    else:#下面就是在文本中输入的内容
        f=open("注意事项.txt",'x+')
        f.write("本exe文件有以下基本功能:\n" )
        f.write("1.求可逆矩阵,注意事项:\n")
        f.write("1.求可逆矩阵,注意事项:\n")
        f.write("求可逆矩阵只需要输入一个矩阵就好，输入示例\n")
        f.write("[1 2 3\n")
        f.write("1 2 3\n")
        f.write("1 2 3]\n")
        f.write("注意中括号必须使用英文字符[ ],不能使用中文字符【 】相邻的两个数用一个空格隔开\n")
        f.write("2.求矩阵的点积，需要输入两个矩阵，矩阵的输入方法和上述一样中间用大写的的“X”隔开，输入示例：\n")
        f.write("[1 2 3\n")
        f.write("1 2 3\n")
        f.write("1 2 3]\n")
        f.write("X\n")
        f.write("[1 2 3\n")
        f.write("1 2 3\n")
        f.write("1 2 3]\n")
        f.write("3.求多元一次式的解，在这个过程中只需要未知数的系数即可(要带符号)等号和加减号不需要写，输出示例：\n")
        f.write("如果想求X+Y=0,3X+2Y=9就这样输入\n")
        f.write("1 1 0\n")
        f.write("3 2 9\n")
        f.write("相邻数字用一个空格隔开\n")
        f.write("输出是这样的[9 -9]即X=9,Y=-9未知数与上面的未知数对齐\n")
        f.write("4.求转置矩阵和求可逆矩阵输入相同\n")
        f.write("5.求矩阵的和和求矩阵的点积相同知识将'X'变成'+'即可\n")
        f.write("另外注意如果输出这样的[1. 2.]表示输出结果是[1.0 2.0]e是自然常数e后面的数是它的指数如果是负数则是负指数")
        messagebox.showinfo(title = "提示", message = "已在同目录下写下文档“注意事项.txt”请先在文档中查看")
def Martix_dot():
    global t1#声明变量
    global t2
    t2.delete(0.0, END)#删除文本框上一次的旧的不需要的内容
    L=t1.get(0.0,END)#得到文本框中的内容
    P2=[]#下面就是得到可以运算矩阵的过程
    P1=[]
    Content1=[]
    Content2=[]
    Q=L.split('X')
    P1,P2=Q[0],Q[1]
    P1=P1.split('\n')
    P2=P2.split('\n')
    for x in range(len(P1)):
        K1=findall('[0-9]{1,}',P1[x])
        if len(K1)>0:
            Content1.append(K1)
    A1=zeros((len(Content1),len(Content1[0])),int)
    for x in range(len(Content1)):
        for y in range(len(Content1[0])):
            A1[x][y]=Content1[x][y]
    for x in range(len(P2)):
        K2=findall('[0-9]{1,}',P2[x])#找到所有的数字形成一个列表
        if len(K2)>0:
            Content2.append(K2)
    A2=zeros((len(Content2),len(Content2[0])),int)
    for x in range(len(Content2)):
        for y in range(len(Content2[0])):
            A2[x][y]=Content2[x][y]
    try:
        t2.insert(0.0,dot(A1,A2))#在文本框中输入结果
    except:
        t2.insert(0.0,"输入有误")
def Invertible_matrix():
    global t1
    global t2
    t2.delete(0.0, END)
    L=t1.get(0.0,END)
    P=L.split('\n')
    Conten=[]
    for x in range(len(P)):
        K=findall('[0-9]{1,}',P[x])
        if len(K)>0:
            Conten.append(K)
    A=zeros((len(Conten),len(Conten[0])),int)
    for x in range(len(Conten)):
        for y in range(len(Conten[0])):
            A[x][y]=Conten[x][y]
    try:
        t2.insert(0.0,inv(A))
    except:    
        t2.insert(0.0,"输入有误")
def Polynomial():
    global t1
    global t2
    t2.delete(0.0, END)
    L=t1.get(0.0,END)
    P=L.split('\n')
    Conten=[]
    for x in P:
        if len(x)>0:
            Conten.append(x.split())
    print(Conten)
    A=zeros((len(Conten),len(Conten[0])-1))
    for x in range(len(Conten)):
        for y in range(len(Conten[0])-1):
            A[x][y]=int(Conten[x][y])
    B=[]
    for x in range(len(Conten)):
        B.append(int(Conten[x][len(Conten[0])-1]))
    t2.insert(0.0,solve(A,B))
def T():
    global t1#声明全局变量
    global t2#声明全局变量
    t2.delete(0.0, END)#删除文本框中的字符串
    L=t1.get(0.0,END)#得到文本框中的字符串
    P=L.split('\n')
    Conten=[]
    for x in range(len(P)):
        K=findall('[0-9]{1,}',P[x])#找到所有的数字
        if len(K)>0:
            Conten.append(K)
    A=zeros((len(Conten),len(Conten[0])),int)
    for x in range(len(Conten)):
        for y in range(len(Conten[0])):
            A[x][y]=Conten[x][y]
    try:
        t2.insert(0.0,A.T)
    except:
        t2.insert(0.0,"输入有误")
def plus():
    global t1
    global t2
    t2.delete(0.0, END)
    L=t1.get(0.0,END)
    P1=[]
    P2=[]
    Content1=[]
    Content2=[]
    Q=L.split('+')
    P1,P2=Q[0],Q[1]
    P1=P1.split('\n')
    P2=P2.split('\n')
    for x in range(len(P1)):
        K1=findall('[0-9]{1,}',P1[x])
        if len(K1)>0:
            Content1.append(K1)
    A1=zeros((len(Content1),len(Content1[0])),int)
    for x in range(len(Content1)):
        for y in range(len(Content1[0])):
            A1[x][y]=Content1[x][y]
    for x in range(len(P2)):
        K2=findall('[0-9]{1,}',P2[x])
        if len(K2)>0:
            Content2.append(K2)
    A2=zeros((len(Content2),len(Content2[0])),int)
    for x in range(len(Content2)):
        for y in range(len(Content2[0])):
            A2[x][y]=Content2[x][y]
    try:
        t2.insert(0.0,A1+A2)
    except:
        t2.insert(0.0,"输入有误")
Mywindow=Tk()   #创建GUI窗口

Mywindow.title("简单矩阵处理器")#GUI窗口的名字

Mywindow.geometry("800x450+500+250")#GUI窗口的大小

Mywindow.minsize(400,400)#GUI窗口的最小值

t1=Text(Mywindow,width=180,height=11,font=('Calibri 12  italic'))#创建一个文本框

t1.grid(row=0,column=0)#grid和pack()只能使用一个，都是文本框的"放置函数"

t1.insert(0.0, "请先点击“帮助”查看矩阵简单处理器的使用方法，并且在输入完之后再点击输出结果，并从中选取计算方式")#在第一个文本框中插入字符串

t2=Text(Mywindow,width=180,height=20,font=('Calibri 12  italic'))#创建第二个文本框

t2.grid(row=20,column=0)

t2.insert(0.0,"在此处输出结果")

Menu_All=Menu(Mywindow)#创建总菜单

MENU1=Menu(Menu_All,tearoff=0)#创建主菜单

MENU1.add_command(label="求可逆矩阵",command=lambda : Invertible_matrix())#创建副菜单

MENU1.add_command(label="求矩阵的点积",command=lambda : Martix_dot())#创建副菜单

MENU1.add_command(label="求多元一项式的解",command=lambda : Polynomial())#创建副菜单

MENU1.add_command(label="求转置矩阵",command=lambda:T())#创建副菜单

MENU1.add_command(label="求两个矩阵的加法",command=lambda :plus())#创建副菜单

Menu_All.add_cascade(label="输出结果",menu=MENU1,font=('Calibri 12 '))#创建副菜单

MENU2=Menu(Menu_All,tearoff=0)#创建主菜单

MENU2.add_command(label="输入注意事项",command=lambda : Show_Info())#创建副菜单

Menu_All.add_cascade(label='帮助',menu=MENU2,font=('Calibri 12 '))#总菜单显示

Mywindow.config(menu=Menu_All)#显示主菜单

Mywindow.mainloop()#循环