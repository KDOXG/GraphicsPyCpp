from lib.CppModule import fractal
import matplotlib.pyplot as plt

# pip install -e . -vvv

v = fractal(1600, 1000)
plt.matshow(v)
plt.show()