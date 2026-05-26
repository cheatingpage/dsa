## Author
- dieh4cker

# Linked List Operations in C

This project demonstrates basic singly linked list operations in C:
- Insert at the beginning
- Traverse (display all elements)
- Delete the first element
- Delete a node by value (function provided)

## How to Use
1. Compile the code using GCC:
   ```sh
   gcc link_list.c -o link_list.exe
   ```
2. Run the executable:
   ```sh
   link_list.exe
   ```
3. Follow the on-screen menu to insert, traverse, or delete elements.

## Menu Options
- **1. Insert element:** Add one or more elements at the beginning of the list.
- **2. Traverse element:** Display all elements in the list.
- **3. Delete element:** Delete the first element in the list.
- **(Optional) Delete by value:** Use the `delete_ll` function in code to delete a node by value.
- **0. Exit:** Quit the program.

## File Structure
- `link_list.c` — Main C source file with all linked list functions.

## Requirements
- GCC compiler (MinGW recommended for Windows)
- Windows OS (uses `windows.h` for Sleep and system commands)


---

## College DSA Practicals — C Programs

### 1. bubble_sort.c
**Description:**  
Implements the Bubble Sort algorithm to sort an array of integers in ascending order.  
**Concepts:** Sorting, Array manipulation.

### 2. insertionsort.c
**Description:**  
Implements the Insertion Sort algorithm for sorting an array.  
**Concepts:** Sorting, Array manipulation.

### 3. selection_sort.c
**Description:**  
Implements the Selection Sort algorithm to arrange array elements in order.  
**Concepts:** Sorting, Array manipulation.

### 4. pract_algo.c
**Description:**  
Contains multiple array operations:  
- Insert an element at a given position  
- Delete an element from a given position  
- Search for an element  
**Concepts:** Array insertion, deletion, searching.

### 5. main.c
**Description:**  
Menu-driven program to perform various array operations and sorting/searching algorithms by calling functions from pract_algo.c.  
**Concepts:** Menu-driven programming, function calls, modular code.

### 6. link_list.c
**Description:**  
Implements a singly linked list with operations:  
- Insert at beginning  
- Traverse (display)  
- Delete from beginning  
- (Function for delete by value also provided)  
**Concepts:** Linked list, dynamic memory allocation, pointers.

### 7. ff.c
**Description:**  
Demonstrates memory allocation and usage in C, showing how memory consumption grows with each allocation.  
**Concepts:** Dynamic memory allocation, memory management.

### 8. temp.c
**Description:**  
Implements Binary Search and Bubble Sort algorithms for arrays.  
**Concepts:** Searching, Sorting, Array manipulation.
