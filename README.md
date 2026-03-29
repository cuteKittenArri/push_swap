*This project has been created as part of the 42 curriculum by stmuller.*

# push_swap

## Description

push_swap is a sorting algorithm project from the 42 curriculum. The goal is to sort a stack of integers using two stacks (`stack_a` and `stack_b`) and a limited set of operations, while minimizing the total number of operations performed.

The program reads a list of integers as command-line arguments, then outputs the sequence of operations needed to sort them in ascending order on `stack_a`.

**Available operations:**

| Operation | Description |
|-----------|-------------|
| `sa` / `sb` / `ss` | Swap the top two elements of stack a / b / both |
| `pa` / `pb` | Push the top element of b onto a, or vice versa |
| `ra` / `rb` / `rr` | Rotate stack a / b / both upward |
| `rra` / `rrb` / `rrr` | Reverse rotate stack a / b / both |

**Sorting strategy:**

- **2–5 elements:** hardcoded optimal sequences (`sort_3`, `sort_4`, `sort_5`)
- **More than 5 elements:** radix sort on compressed indices (bit-by-bit, using `stack_b` as a buffer)

---

## Instructions

### Requirements

- CC or compatible C compiler
- `make`
- The bundled `libft` library (located in `libft/`)

### Compilation

```bash
make
```

This builds the `push_swap` executable.

```bash
make clean    # remove object files
make fclean   # remove object files and binary
make re       # recompile from scratch
```

### Usage

```bash
./push_swap 3 1 4 1 5 9 2 6
```

The program prints the list of operations to stdout, one per line. If the input is already sorted, nothing is printed.

**Error handling:** the program prints `Error` to stderr and exits if the input contains non-integer values, values outside the `int` range, or duplicates.

### Testing

You can pipe the output into a checker (e.g. the official 42 checker or `push_swap_visualizer`) to verify correctness:

```bash
ARG="3 1 4 1 5 9"; ./push_swap $ARG | ./checker $ARG
```

To count the number of operations:

```bash
./push_swap 3 1 4 1 5 9 2 6 | wc -l
```

---

## Resources

### References

- [Radix Sort – Wikipedia](https://en.wikipedia.org/wiki/Radix_sort)
- [push_swap — the silent killer (Medium article)](https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a)
- [push_swap Visualizer by o-reo](https://github.com/o-reo/push_swap_visualizer) — helpful for debugging and visualizing the sort
- [42 Docs — push_swap subject](https://harm-smits.github.io/42docs/projects/push_swap)

### AI Usage

Claude (Anthropic) was used to generate this README file based on the existing source code of the project. No algorithmic or implementation decisions were made with AI assistance — the sorting logic, data structures, and operations were written independently.
