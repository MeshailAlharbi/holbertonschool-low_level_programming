# Benchmarking Metrics: Naive vs Single-Pass Algorithm

## Overview
This document presents execution time measurements and a performance comparison between two C implementations: a naive nested loop algorithm ($O(N^2)$) and a single-pass algorithm ($O(N)$).

## Execution Environment
- **Compiler Flags**: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long`
- **Array Size**: 50,000 elements
- **Number of Runs**: 3

## Benchmark Data

| Run | Naive Algorithm Time (s) | Single-pass Algorithm Time (s) |
| :--- | :--- | :--- |
| **Run 1** | 2.752286 | 0.000106 |
| **Run 2** | 2.750439 | 0.000106 |
| **Run 3** | 2.754029 | 0.000107 |
| **Average** | **2.752251** | **0.00010633** |

## Relative Difference & Analysis
- **Average Time (Naive)**: ~2.752251 seconds
- **Average Time (Single-pass)**: ~0.00010633 seconds
- **Performance Factor**: The naive algorithm is approximately **25,884 times slower** than the single-pass algorithm.

## Conclusion
The drastic difference in execution time directly highlights the impact of algorithmic complexity ($O(N^2)$ vs $O(N)$). The single-pass implementation reduces unnecessary iterations, keeping CPU activity and energy usage significantly lower.
