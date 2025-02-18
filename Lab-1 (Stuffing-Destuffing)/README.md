## 1. Stuffing

After 5 consecutive **1's** a **0** will be added in the array. 

## 2. Destuffing

After 5 consecutive **1's** the following **0** will be removed from the array. 

## ✅ 2 types:

1. **Bit** stuffing, destuffing.
2. **Byte** stuffing, destuffing.

In byte stuffing, the provided escape sequence will be inserted before the flag and escape sequence.

**Example:**

Flag: *F*, Escape sequence: *E*

Array: A B F C E

After stuffing: A B <span style="color: green; font-weight: bold;">E</span> F C <span style="color: green; font-weight: bold;">E</span> E

(stuffed E before F and E)
