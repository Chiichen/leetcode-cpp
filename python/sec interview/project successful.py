import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
from mpl_toolkits.mplot3d import Axes3D

x = [pd.read_csv('data.csv',usecols=[0])]
y = [pd.read_csv('data.csv',usecols=[1])]
z = [pd.read_csv('data.csv',usecols=[2])]

fig = plt.figure()
ax = Axes3D(fig)
ax.scatter(x, y, z)
plt.show()