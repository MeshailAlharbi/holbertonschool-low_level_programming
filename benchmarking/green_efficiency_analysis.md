# Green Efficiency and Performance Analysis



## Measurement Methodology

This project explores software efficiency through controlled benchmarking experiments in C. To measure execution time accurately without relying on complex external profiling tools, we utilized the standard library header `<time.h>` and the `clock()` function, scaling raw clock ticks to seconds using `CLOCKS_PER_SEC`. All source code was compiled using strict compiler flags (`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long`) to ensure code compliance, prevent undefined behavior, and maintain a consistent build standard. 



To minimize environmental noise and ensure reliable data, experiments were executed multiple times on the same local environment, and averages were computed to smooth out minor runtime variations caused by operating system scheduling.



## Observed Performance Differences

The benchmarking comparison between two implementations solving the same task over a dataset of 50,000 elements revealed dramatic performance disparities. The naive nested-loop implementation, which evaluates conditions using an $O(N^2)$ approach, recorded an average execution time of approximately 2.752 seconds across multiple trials. In contrast, the optimized single-pass algorithm, operating at an $O(N)$ time complexity, completed the same logical operation in an average of 0.000106 seconds. 



Comparing these figures, the naive algorithm proved to be approximately 25,884 times slower than the single-pass implementation. This huge divergence highlights how algorithmic complexity directly dictates execution duration.



## Relation Between Runtime and Energy Consumption

While this experiment does not measure actual power draw in watts directly at the hardware level, runtime serves as a direct proxy for CPU activity. Modern processors consume dynamic energy proportional to the time circuits remain active and switching under load. 



An algorithm that runs for nearly 2.75 seconds forces the CPU core to sustain high activity cycles for a task that could otherwise be resolved in a fraction of a millisecond. When scaled across enterprise applications, high-frequency execution loops, or millions of end-users, inefficient $O(N^2)$ loops translate directly into massive cumulative electrical waste, increased cooling requirements, and a heightened carbon footprint.



## Limitations of the Experiment

Several limitations must be acknowledged in this experimental setup. First, execution time is used as an indirect proxy for energy consumption; true energy profiling requires specialized hardware power rails or hardware performance counters. Second, measurements are susceptible to minor fluctuations caused by background OS interrupts, CPU frequency scaling, and thermal throttling on the test machine. Finally, the fixed dataset size of 50,000 elements, while sufficient to demonstrate complexity scaling, does not capture cache-miss behaviors or memory bandwidth bottlenecks that appear at much larger scales.



## Practical Engineering Takeaway

The primary lesson from this benchmarking exercise is that measurement discipline and algorithmic choice far outweigh low-level micro-optimizations. Developers must evaluate the computational complexity of their designs before deployment. Choosing an optimal algorithm reduces runtime, saves hardware energy, lowers infrastructure costs, and contributes directly to sustainable software engineering practices.
