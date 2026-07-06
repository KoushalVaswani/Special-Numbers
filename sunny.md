# Sunny Number

A number N is called a Sunny Number if the square root of N + 1 is an integer. In other words, if you add 1 to the number and the result is a perfect square, then the original number is a Sunny Number.

## Mathematical Condition

Square root of (N + 1) = Integer

---

## Examples

*   **3 is a Sunny Number:**  
    3 + 1 = 4  
    Square root of 4 = 2 (which is an integer)

*   **8 is a Sunny Number:**  
    8 + 1 = 9  
    Square root of 9 = 3 (which is an integer)

*   **15 is a Sunny Number:**  
    15 + 1 = 16  
    Square root of 16 = 4 (which is an integer)

*   **5 is NOT a Sunny Number:**  
    5 + 1 = 6  
    Square root of 6 is approximately 2.44 (which is not an integer)

---

## Logic / Algorithm

1. Take an integer input N.
2. Calculate M = N + 1.
3. Find the square root of M.
4. Check if the square root is a whole number (integer).
5. If yes, then N is a Sunny Number; otherwise, it is not.
