# Niven Number

A **Niven Number** (or **Harshad Number**) is a special integer that is completely divisible by the sum of its digits when expressed in a given base (usually base 10).

### Example:
Let's take the number **18**:
* Digits: 1 and 8
* Sum of digits = $1 + 8 = 9$

Now, divide the original number by the sum:
$$18 / 9 = 2$$

Since 18 is perfectly divisible by 9 (leaves a remainder of 0), **18 is a Niven Number**.

---

## Algorithm

To check whether a number is a Niven Number or not, follow these steps:

1. **Take Input:** Get an integer number from the user.
2. **Store Original Value:** Create a temporary variable and store the original number in it (needed for the final division check).
3. **Initialize Sum:** Set a variable `digit_sum = 0` to store the sum of the digits.
4. **Digit Extraction & Sum Loop:** While the number is greater than 0:
   * Extract the last digit of the number using the modulo operator: 
     $$\text{digit} = \text{number} \pmod{10}$$
   * Add the extracted `digit` to the `digit_sum` variable:
     $$\text{digit\_sum} = \text{digit\_sum} + \text{digit}$$
   * Remove the last digit from the number using integer division:
     $$\text{number} = \lfloor \text{number} / 10 \rfloor$$
5. **Divisibility Check:** Check if the original number is perfectly divisible by the calculated `digit_sum`.
   * If **`original number % digit_sum == 0`**, then it is a **Niven Number**.
   * Otherwise, it is **not a Niven Number**.
