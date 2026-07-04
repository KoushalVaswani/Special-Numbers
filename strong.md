# Strong Number

A **Strong Number** (also known as a Krishnamurthy number or Peterson number) is a special number whose sum of the factorials of its digits is equal to the number itself.

### Example:
Let's take the number **145**:
* Factorial of 1 ($1!$) = $1$
* Factorial of 4 ($4!$) = $24$
* Factorial of 5 ($5!$) = $120$

Sum = $1 + 24 + 120 = 145$

Since the sum is equal to the original number, **145 is a Strong Number**.

---

## Algorithm

To check whether a number is a Strong Number or not, follow these steps:

1. **Take Input:** Get an integer number from the user.
2. **Store Original Value:** Create a temporary variable and store the original number in it (needed for final comparison).
3. **Initialize Sum:** Set a variable `sum = 0` to store the sum of factorials.
4. **Digit Extraction & Factorial Loop:** While the number is greater than 0:
   * Extract the last digit of the number using the modulo operator: 
     $$\text{digit} = \text{number} \pmod{10}$$
   * Calculate the factorial of this extracted `digit`.
   * Add the calculated factorial value to the `sum` variable:
     $$\text{sum} = \text{sum} + \text{digit}!$$
   * Remove the last digit from the number using integer division:
     $$\text{number} = \lfloor \text{number} / 10 \rfloor$$
5. **Final Comparison:** Compare the final value of `sum` with the temporary variable (original number).
   * If **`sum == original number`**, then it is a **Strong Number**.
   * Otherwise, it is **not a Strong Number**.
