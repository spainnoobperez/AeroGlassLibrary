### T1

考虑二分答案 $k$ ，如果最终答案 $\leq k$ 需要满足将 $\leq k$ 的边加入图中后每个连通块的 $x$ 之和不多于连通块点数。

### T2

将 $a, b$ 从小到大排序。

1. 二分求出第 $L$ 个的值 $x$ 。
2. 计算出 $\leq x$ 的数的个数。
3. 计算出每个 $a_i$ 的找出最小 $k_i$ 使得 $a_i+b_{k_i} > x$ ，用堆来维护 $a_i+b_{k_i}$ 的最小值。每次取出一个  $a_i+b_{k_i}$ 后将 $k_i+1$ 并将新的 $a_i+b_{k_i}$ 放入堆中维护。直到找到第 $R$ 个数。

### T3

$F_{i,j}=a^{i-j}*b^{j-1}*C_{i-1}^{j-1}$