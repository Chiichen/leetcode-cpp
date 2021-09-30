import matplotlib.pyplot as plt
import numpy as np
from mpl_toolkits import mplot3d
import pandas as pd
from mpl_toolkits.mplot3d import Axes3D
import csv
with open('data.csv','r') as f:
    reader = csv.reader(f)
    for row in reader:
        x = np.atleast_1d(row[0])
        y = np.atleast_1d(row[1])
        z = np.atleast_1d(row[2])
        x = x.astype(float)
        y = y.astype(float)
        z = z.astype(float)
        x = list (x)
        y = list (y)
        z = list (z)
print(x)
 
 
# 添加坐标轴(顺序是Z, Y, X)
#ax.set_zlabel('Z', fontdict={'size': 500, 'color': 'red'})
#ax.set_ylabel('Y', fontdict={'size': 500, 'color': 'red'})
#ax.set_xlabel('X', fontdict={'size': 500, 'color': 'red'})
