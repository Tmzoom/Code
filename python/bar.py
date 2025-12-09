import matplotlib.pyplot as plt
import numpy as np
classes = [(135,140), (140,145), (145,150), (150,155)]
midpoints = [(lower + upper) / 2 for lower, upper in classes]
frequencies = [4, 12, 16, 8]
plt.bar(midpoints, frequencies, width=5, edgecolor='black', alpha=0.7)
plt.xlabel("Height of Students (m)")
plt.ylabel("Number of Students")
plt.title("Histogram of Student Heights")
plt.show()