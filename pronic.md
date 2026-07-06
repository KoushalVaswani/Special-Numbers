# Pronic Number

A **Pronic Number** (also known as a heteromecic number) is a number which is the product of two consecutive integers. 

---

## How It Works

A number n is a Pronic Number if it can be written in the form:
n = x * (x + 1)

Where x is any non-negative integer (x >= 0).

### Examples:
* **Check 6:** 2 * 3 = 6 (2 and 3 are consecutive integers) -> **Pronic Number**
* **Check 20:** 4 * 5 = 20 (4 and 5 are consecutive integers) -> **Pronic Number**
* **Check 12:** 3 * 4 = 12 (3 and 4 are consecutive integers) -> **Pronic Number**
* **Check 10:** There are no two consecutive integers that multiply to 10 -> **Not a Pronic Number**

---

## Logic & Algorithm

1. Take the input number from the user.
2. Run a loop from `x = 0` up to the square root of the number.
3. In each iteration, check if `x * (x + 1) == number`:
   * If it matches, the number is a Pronic Number. Break the loop.
4. If the loop completes and no such pair is found, it is not a Pronic Number.

---

## Other Examples
Some examples of Pronic numbers are:
`0, 2, 6, 12, 20, 30, 42, 56, 72, 90, 110, 132, ...`
