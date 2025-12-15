# E. Klee's SUPER DUPER LARGE Array!!!

Time limit per test: 2 seconds

Memory limit per test: 256 megabytes

Klee has an array a of length n containing integers [k,k+1,...,k+n−1] in that order. Klee wants to choose an index i (1≤i≤n) such that x=|a1+a2+⋯+ai−ai+1−⋯−an| is minimized. Note that for an arbitrary integer z, |z| represents the absolute value of z.

Output the minimum possible value of x.

## Input

The first line contains t (1 ≤ t ≤ 104) — the number of test cases.

Each test case contains two integers n
and k (2 ≤ n,k ≤ 109) — the length of the array and the starting element of the array.

## Output

For each test case, output the minimum value of x on a new line.

## Example

### Input
```
4
2 2
7 2
5 3
1000000000 1000000000
```

### Output
```
1
5
1
347369930
```

## Note

In the first sample, a=[2,3]. When i=1 is chosen, x=|2−3|=1. It can be shown this is the minimum possible value of x.

In the third sample, a=[3,4,5,6,7]
. When i=3 is chosen, x=|3+4+5−6−7|=1. It can be shown this is the minimum possible value of x.