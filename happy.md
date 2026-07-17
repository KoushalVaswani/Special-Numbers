# Happy Number

A Happy Number is a positive integer that is defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits. Repeat the process until the number equals 1, or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are Happy Numbers.

### Example: 19
1. 1² + 9² = 1 + 81 = 82
2. 8² + 2² = 64 + 4 = 68
3. 6² + 8² = 36 + 64 = 100
4. 1² + 0² + 0² = 1 (Happy!)

---

### Logic
To determine if a number is happy, track the sums generated at each step. Using a set (or a hash table) allows you to store each result. If a sum repeats itself and it is not 1, a cycle has been detected, meaning the number is not a Happy Number.
