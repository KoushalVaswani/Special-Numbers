# Buzz Number

A **Buzz Number** is a special number that either ends with the digit 7 or is completely divisible by 7. 

---

## How It Works

A number is classified as a Buzz Number if it satisfies at least one of the following two conditions:
1. **Divisibility Test:** The number leaves a remainder of 0 when divided by 7 (Number % 7 == 0).
2. **Last Digit Test:** The last digit of the number is 7 (Number % 10 == 7).

### Examples:
* **Check 49:** 49 is perfectly divisible by 7 (7 * 7 = 49) -> **Buzz Number**
* **Check 27:** 27 ends with 7 -> **Buzz Number**
* **Check 57:** 57 ends with 7 (even though it is not divisible by 7) -> **Buzz Number**
* **Check 22:** It neither ends with 7 nor is divisible by 7 -> **Not a Buzz Number**

---

## Logic & Algorithm

1. Take the input number from the user.
2. Check if the number is divisible by 7 (`number % 7 == 0`) **OR** if the last digit is 7 (`number % 10 == 7`).
3. If either condition is true, the number is a Buzz Number.
4. If both conditions are false, it is not a Buzz Number.

---

## Other Examples
Some examples of Buzz numbers are:
`7, 14, 17, 21, 27, 28, 35, 37, 42, 47, 49, 56, 57, 63, 67, 70, ...`
