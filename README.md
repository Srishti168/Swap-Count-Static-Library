# Swap-Count-Static-Library

This repository contains the necessary files and instructions to create a static library for counting number of swaps during sorting of array by different algorithms. The library consists of three files: `main.c`, `swap.h`, and `swap_count.c`.


 ## Goals

The primary goals of this project are:

1. **Algorithmic Understanding**: To facilitate a clear understanding of different sorting algorithms, their inner workings, and the trade-offs they present.

2. **Performance Comparison**: To compare the efficiency of sorting algorithms by counting the number of swaps required for different input arrays.

3. **Educational Resource**: To serve as an educational resource for those interested in learning about sorting algorithms and their associated swap counts.

## Specifications

 ### Project Structure

- **`main.c`**: This file contains the implementations of different sorting algorithms using functions from `swap.h`. It calculates the swap counts using `swap_count.c`.
- **`swap.h`**: This header file defines the function required for swapping elements in the array.
- **`swap_count.c`**: This file provides functions for counting swaps during the sorting process.

  ### Supported Sorting Algorithms

The project currently supports the following sorting algorithms:

- **Bubble Sort**
- **Insertion Sort**
- **Selection Sort**


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
