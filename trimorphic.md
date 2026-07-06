# Trimorphic Number

A **Trimorphic Number** is a special number whose cube (number raised to the power of 3) ends with the number itself.

---

## How It Works

A number n is classified as a Trimorphic Number if:
(n^3) ends with n

### Examples:
* **Check 4:** 4^3 = 64 (64 ends with 4) -> **Trimorphic Number**
* **Check 5:** 5^3 = 125 (125 ends with 5) -> **Trimorphic Number**
* **Check 24:** 24^3 = 13,824 (13,824 ends with 24) -> **Trimorphic Number**
* **Check 7:** 7^3 = 343 (343 ends with 3, not 7) -> **Not a Trimorphic Number**

---

## Logic & Algorithm

1. Take the input number from the user.
2. Calculate the cube of the number (`cube = number * number * number`).
3. Loop through the digits of the original number or use a modulo-based approach to check if the last digits of the `cube` match the `number`.
4. If the last digits match the original number exactly, it is a Trimorphic Number.
5. Otherwise, it is not.

---

# Other Examples
Some examples of Trimorphic numbers are:
`0, 1, 4, 5, 6, 9, 24, 25, 49, 51, 75, 76, 99, ...`
