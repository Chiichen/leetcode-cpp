import matplotlib.pyplot as plt
import numpy as np
from mpl_toolkits import mplot3d
import pandas as pd
import csv
x=[]
y=[]
z=[]
# 打开文件
with open ('data.csv') as csvfile:
    plots = csv.reader(csvfile, delimiter=',')
    for row in plots:
        x.append(int(row[1]))  #将第一列数据添加到x列表
        y.append(int(row[2]))
        z.append(int(row[3]))  #将第二列数据添加到y列表
fig = plt.figure()
sub = fig.add_subplot(111)
sub.plot(x,y,z,marker='s')
plt.show()