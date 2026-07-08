# Fibonacci Member Checker

This algorithm checks whether a given number belongs to the **Fibonacci Sequence** by generating terms iteratively.

## Logic Explanation
The program starts with the first two terms of the Fibonacci sequence: `a = 0` and `b = 1`. It keeps generating the next terms as long as the current term `a` is strictly less than the user's input number. 

* If the loop stops and `a` becomes exactly equal to the number, it means the number exists in the sequence.
* If `a` surpasses the number, it means the number is not part of the sequence.

---

## Algorithm

To check if a number is a member of the Fibonacci sequence:

1. **Start**
2. **Read** the integer `num` from the user.
3. **Initialize Variables:**
   * Set `a = 0` (first Fibonacci term)
   * Set `b = 1` (second Fibonacci term)
4. **Loop Execution:** While `a < num`:
   * Calculate the next term: `c = a + b`
   * Update the variables for the next step:
     * `a = b`
     * `b = c`
5. **Condition Check:**
   * If `a == num`, print **"Is a Fibonacci Number"**.
   * Otherwise, print **"Not a Fibonacci Number"**.
6. **Stop**

---

## Dry Run Example (num = 5)

* **Initialization:** `a = 0`, `b = 1`
* **Iteration 1:** `0 < 5` (True) -> `c = 0 + 1 = 1` -> Updates: `a = 1`, `b = 1`
* **Iteration 2:** `1 < 5` (True) -> `c = 1 + 1 = 2` -> Updates: `a = 1`, `b = 2`
* **Iteration 3:** `1 < 5` (True) -> `c = 1 + 2 = 3` -> Updates: `a = 2`, `b = 3`
* **Iteration 4:** `2 < 5` (True) -> `c = 2 + 3 = 5` -> Updates: `a = 3`, `b = 5`
* **Iteration 5:** `3 < 5` (True) -> `c = 3 + 5 = 8` -> Updates: `a = 5`, `b = 8`
* **Loop Termination:** Now `a = 5`, so `5 < 5` becomes False. Loop ends.
* **Final Check:** `a == num` (5 == 5) is True.
* **Output:** Is a Fibonacci Number

---

## Complexity Analysis

* **Time Complexity:** O(log(num)) — The Fibonacci sequence grows exponentially, so the loop runs in logarithmic time proportional to the value of the input number.
* **Space Complexity:** O(1) — Only a constant amount of extra space is used to store tracking variables (`a`, `b`, and `c`).
