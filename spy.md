# Spy Number

A **Spy Number** is a special integer where the **sum** of its digits is exactly equal to the **product** of its digits.

### Example:
Let's take the number **1124**:
* Digits: 1, 1, 2, and 4

1. **Sum of digits:**
   $$1 + 1 + 2 + 4 = 8$$

2. **Product of digits:**
   $$1 \times 1 \times 2 \times 4 = 8$$

Since the Sum ($8$) is equal to the Product ($8$), **1124 is a Spy Number**.

---

## Algorithm

To check whether a number is a Spy Number or not, follow these steps:

1. **Take Input:** Get an integer number from the user.
2. **Initialize Sum and Product:** 
   * Set a variable `digit_sum = 0` to store the sum of digits.
   * Set a variable `digit_product = 1` to store the product of digits.
3. **Digit Extraction Loop:** While the number is greater than 0:
   * Extract the last digit of the number using the modulo operator: 
     $$\text{digit} = \text{number} \pmod{10}$$
   * Add the extracted `digit` to the `digit_sum`:
     $$\text{digit\_sum} = \text{digit\_sum} + \text{digit}$$
   * Multiply the extracted `digit` with the `digit_product`:
     $$\text{digit\_product} = \text{digit\_product} \times \text{digit}$$
   * Remove the last digit from the number using integer division:
     $$\text{number} = \lfloor \text{number} / 10 \rfloor$$
4. **Final Comparison:** Compare the calculated `digit_sum` with `digit_product`.
   * If **`digit_sum == digit_product`**, then it is a **Spy Number**.
   * Otherwise, it is **not a Spy Number**.
