# 42 - PUSH_SWAP

### SUMMARY
In this repository you can find the code implementation for the PUSH_SWAP project for 42. The goal is to sort a stack of integers using a limited set of operations. 

The program, `push_swap`, takes a list of integers as input, sorts them using two stacks (a and b), and outputs the smallest sequence of operations to achieve the sorted stack. The project also includes a `checker` program to verify the correctness of the sorting instructions.

### REPOSITORY STRUCTURE
- `src/`: Contains the source code for push_swap.
- `libft/`: Custom library for utility functions.
- `push_swap.h`: Header file.
- `Makefile`: Tells `make` how to compile and link the program.
- `checker_Mac`, `checker_linux`: Checker executables for Mac OS and Linux, respectively.
- `README.md`: Project overview and usage instructions.

### KEY FEATURES
**Sorting algorithm:** Implements an efficient sorting algorithm to sort a stack of integers. The algorithm was based on the one created by [ayogun](https://github.com/ayogun) (check out [his article on Medium](https://medium.com/@ayogun/push-swap-c1f5d2d41e97)) and my code was based on the one implemented by [Thuggonaut](https://github.com/Thuggonaut).

**Operations:** Supports a limited set of stack operations:
- `sa`, `sb`, `ss`: Swap elements.
- `pa`, `pb`: Push elements between stacks.
- `ra`, `rb`, `rr`: Rotate stacks.
- `rra`, `rrb`, `rrr`: Reverse rotate stacks.

**Optimization:** Focuses on minimizing the number of operations to sort the stack.

**Error handling:** Detects and handles invalid inputs (e.g., non-integer values, duplicates, or values outside the `int` range) by printing `Error`.

**Benchmark:**
- 100 numbers: Must be sorted in fewer than 700 operations.
- 500 numbers: Must be sorted in fewer than 5500 operations.

### USAGE
1. **Compile the program:**
```
make
```
2. **Run the program (with a set of numbers as multiple arguments or as a single argument string):**
```
./push_swap 3 1 2
```
OR
```
./push_swap "3 1 2"
```
3. **Run the checker after defining a shell variable with the set of numbers:**
```
ARG="3 1 2"; ./push_swap $ARG | ./checker_Mac $ARG
```
Outputs `OK` if the stack is sorted correctly, or `KO` if it is not.

----
🐸 Feel free to fork, clone, or contact me for questions or feedback. 
