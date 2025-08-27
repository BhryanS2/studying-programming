import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

# Define a função
def f(x, y, z):
    return np.sin(x * y * z**2) + x**3

# Define o grid
x = np.linspace(-2, 2, 100)
y = np.linspace(-2, 2, 100)
x, y = np.meshgrid(x, y)

# Fixar z
z_fixed = 1.0  # você pode mudar esse valor para ver diferentes superfícies

# Calcula f(x, y, z_fixed)
z_vals = f(x, y, z_fixed)

# Plot
fig = plt.figure(figsize=(10, 6))
ax = fig.add_subplot(111, projection='3d')
ax.plot_surface(x, y, z_vals, cmap='viridis')

ax.set_xlabel('x')
ax.set_ylabel('y')
ax.set_zlabel('f(x, y, z)')
ax.set_title(f'Gráfico de f(x, y, z) com z = {z_fixed}')

plt.show()
