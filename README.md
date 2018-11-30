# Introduction

This tutorial follows Tim Mattson's tutorial on open MP
Link to the lectures: https://www.youtube.com/watch?v=nE-xN4Bf8XI&index=2&list=PLLX-Q6B8xqZ8n8bwjGdzBJ25X2utwnoEG

## Lecture 1 - Module 1


### Moore's Law
Moore's law made programmers to ignore the efficiency of their program because they expect hardware to catch up.
However, Moore's law didn't take into account the power usage of having more transistors at faster clock.
The relationship between power and scalar performance is ~< quadratic.
This is unsustainable, and is often referred to as the power wall.

There are efforts to improve the power usage of fast computers.
For instance Pentium M, which optimizes many pipeline stages of previous processors.

The calculation for power is given by

    Power = CVF^2
    
It can be shown that using parallelism, we can get more work done with less power.
Because increasing the number of cores, or parallelism, is a linear relationship.
However, if we say, to improve the clock cycle, that would be a square relationship.

Therefore, it is no longer the case where software programmers don't have to care about their programs.
They need to integrate parallelism into their program's architecture.

## Lecture 2 - Module 2

Here we provide a quick review of concurrency and parallelism.

---- IMAGE OF CONCURRENT AND PARALLEL EXECUTION ------


### Concurrent Application

An application for which computations logically executes in concurrency.
In other words, concurrency is embedded inside the problem space.
For instance, consider a computer game.
There is no clear way to have parallelism because computer game requires user input and unless one is provided, no execution is possible!

Usually, in the problem space, there are a huge blob of concurrent functions that have no clear way to be parallelized.
Then there is a subset that are parallelizable.
Once we have identified this subset of the problem we can then use many parallelism algorithms that are available.

### OpenMP

Is a set of compiler directives.
The structure is usually like

    #pragma omp construct [clause [clause ...] ...]
    
