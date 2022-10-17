from lib.CppModule import fractal
import matplotlib.pyplot as plt

v = fractal(3000, 2000)
plt.matshow(v)
plt.show()