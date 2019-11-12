import numpy as np
import matplotlib.pyplot as plt

plt.figure()
data = np.loadtxt("implicit.dat")
plt.title(data[:,1][-1])
plt.plot(data[:,0], data[:,1])
plt.axis('square')
plt.xlabel('X')
plt.ylabel('Y')
plt.savefig("implicit.png")