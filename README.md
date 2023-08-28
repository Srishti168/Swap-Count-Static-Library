# Swap-Count-Static-Library

This repository contains the necessary files and instructions to create a static library for counting swaps in a swapping operation. The library consists of three files: `main.c`, `swap.h`, and `swap_count.c`.

## Files

1. `main.c`: A sample main program that demonstrates how to use the swap count library.
2. `swap.h`: The header file containing function declarations and any necessary constants or types.
3. `swap_count.c`: The implementation file containing the actual logic to count swaps in a swapping operation.

## Usage

Follow these steps to create and use the static library for swap counting:

1. **Clone the Repository:**
   
   Clone this repository to your local machine using the following command:
   
   ```bash
   git clone https://github.com/your-username/swap-count-static-library.git
   ```

2. **Navigate to the Repository:**

   Change your working directory to the cloned repository:
   
   ```bash
   cd swap-count-static-library
   ```

3. **Compile the Library:**

   Compile the `swap_count.c` file to create the static library `libswapcount.a`. Use the following command:

   ```bash
   gcc -c swap_count.c -o swap_count.o
   ar rcs libswapcount.a swap_count.o
   ```

4. **Compile the Sample Program:**

   Compile the `main.c` program along with the static library to create the executable. Use the following command:

   ```bash
   gcc main.c -o swap_count_example -L. -lswapcount
   ```

5. **Run the Sample Program:**

   Execute the compiled program to see the swap count in action:

   ```bash
   ./swap_count_example
   ```

