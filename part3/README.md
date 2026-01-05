# 第三部分答案(1、2 题)

[TOC]

已知新原点 $O'$ 位于 $(x_0, y_0)$，新 $x$ 轴方向单位向量：$\vec{e_x'} = (\cos \alpha, -\sin \alpha)$新 $y$ 轴方向单位向量：$\vec{e_y'} = (\sin \alpha, \cos \alpha)$

## t1

### q1

设原坐标为 $(x_1, y_1)$，则$(x_1, y_1) = (x_0, y_0) + x'_1 \vec{e_x'} + y'_1 \vec{e_y'}$

故有

$$
\begin{cases}
x_1 = x_0 + x'\_1 \cos \alpha + y'\_1 \sin \alpha \\
y_1 = y_0 - x'\_1 \sin \alpha + y'\_1 \cos \alpha
\end{cases}
$$

### q2

原坐标系原点在新坐标系中的坐标$(x'_O, y'_O)$:

$$
\begin{cases}
x'\_O = (0 - x_0, 0 - y_0) \cdot \vec{e_x'} \\
y'\_O = (0 - x_0, 0 - y_0) \cdot \vec{e_y'}
\end{cases}
$$

解得 $O$ 在新坐标系下的坐标为：$$(-x_0 \cos \alpha + y_0 \sin \alpha, \ -x_0 \sin \alpha - y_0 \cos \alpha)$$

### q3

设新坐标系下点$P$的坐标为$(x', y')$，原坐标系下坐标为$(x, y)$，则有

$$
\begin{bmatrix}
x' \\
y'
\end{bmatrix} =
\begin{bmatrix}
\cos \alpha & \sin \alpha \\
-\sin \alpha & \cos \alpha
\end{bmatrix} \cdot
\begin{bmatrix}
x - x_0 \\
y - y_0
\end{bmatrix}
$$

### 思考题

1.
2. 矩阵变为 3x3 方阵，每一行分别是新坐标系的 $x', y', z'$ 轴在原坐标系下的单位方向向量。$$\begin{bmatrix} x' \\ y' \\ z' \end{bmatrix} = \begin{bmatrix} e'_{x1} & e'_{x2} & e'_{x3} \\ e'_{y1} & e'_{y2} & e'_{y3} \\ e'_{z1} & e'_{z2} & e'_{z3} \end{bmatrix} \begin{bmatrix} x - x_0 \\ y - y_0 \\ z - z_0 \end{bmatrix}$$

## t2

**由于歧义问题，将初始条件中的初态拉伸距离$x$改为$x_0$**

### q1

弹簧弹力$F = -kx$, 物块加速度 $a = \frac{d^2x}{dt^2}$, 由牛顿第二定律可得，$ F = ma = m \frac{d^2x}{dt^2} $，解得$$x(t) = x_0 \cos\left(\sqrt{\frac{k}{m}} t\right)$$

### q2

已知物体受到弹力 $F = -kx$ 和阻力 $f = -\mu v = -\mu \frac{dx}{dt}$
则有$$m \frac{d^2x}{dt^2} = -kx - \mu \frac{dx}{dt}$$
解微分方程得$$x(t) = x_0 e^{-\frac{\mu}{2m}t} \left( \cos(\omega t) + \frac{\mu}{2m\omega}\sin(\omega t) \right)$$，其中 $\omega = \sqrt{\frac{k}{m} - \frac{\mu^2}{4m^2}}$。

### q3

**由于歧义问题，将初始条件中的初态旋转角度$\theta$改为$\theta_0$**
（为什么非设成同一个符号）

转动惯量$I = \frac{1}{2}mr^2$

$$
\frac{d^2\theta}{dt^2} = - \frac{k \theta}{I} = - \frac{2k \theta}{mr^2}
$$

解得$$\theta(t) = \theta_0 \cos\left(\sqrt{\frac{2k}{mr^2}} t\right)$$

### q4

~~不幸，我没学过信号知识，现学~~
题干信息：*当前的果 ($x(t)$) 是过去所有因 ($u(\tau)$) 按照距离现在的时间长短 ($t-\tau$) 进行加权 ($h$) 后的总和*  
结果：$$x(t) = \int_{0}^{t} u(\tau) h(t-\tau) d\tau$$

## t3

不幸，本以为自己有时间自学机器人学（还有把手上的活捡起来），结果发现之前翘的课太多了，不得不为期末埋头补习

当然，可以用当前的ai帮我干完，但是也没什么意义 ：（