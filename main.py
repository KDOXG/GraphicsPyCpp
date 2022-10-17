from lib.CppModule import fractal
import matplotlib.pyplot as plt
from sys import argv

width = 3000 if len(argv) != 3 else int(argv[1])
height = 2000 if len(argv) != 3 else int(argv[2])

v = fractal(width, height)
plt.matshow(v)
plt.show()