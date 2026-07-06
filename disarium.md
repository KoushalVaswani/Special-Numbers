# Disarium Number

A **Disarium Number** is a number defined such that the sum of its digits raised to the power of their respective positions is equal to the number itself.

---

## How It Works

For a given number with n digits:
Number = (d1^1) + (d2^2) + (d3^3) + ... + (dn^n)

Where:
* d1 is the first digit (at position 1)
* d2 is the second digit (at position 2), and so on.

### Example: 175
Let's check the number **175**:
* Position of 1 is 1 -> 1^1 = 1
* Position of 7 is 2 -> 7^2 = 49
* Position of 5 is 3 -> 5^3 = 125

**Sum:** 1 + 49 + 125 = 175

Since the sum **175** is equal to the original number, **175 is a Disarium Number**.

---

## Logic & Algorithm

1. **Count the number of digits** or find their positions from left to right.
2. Extract each digit of the number.
3. Calculate (digit^position) and add it to a `sum` variable.
4. Compare the final `sum` with the original number:
   * If `sum == original_number`, it is a Disarium Number.
   * Otherwise, it is not.

---

## Other Examples
Some examples of Disarium numbers are:
`1, 2, 3, 4, 5, 6, 7, 8, 9, 89, 135, 175, 518, ...`
