# C and Data Structures Practical Viva – Complete English Version

## Experiment No. 1: Matrix Addition, Subtraction, and Multiplication

### Aim

To perform addition, subtraction, and multiplication of two matrices using C.

### Concept

A matrix is a collection of numbers arranged in rows and columns.

- Addition: Both matrices must have the same number of rows and columns.
- Subtraction: Both matrices must have the same number of rows and columns.
- Multiplication: The number of columns in the first matrix must equal the number of rows in the second matrix.

### Algorithm / Logic

1. Read the number of rows and columns of the first matrix.
2. Read the number of rows and columns of the second matrix.
3. Store the elements in arrays `A` and `B`.
4. If both matrices have the same dimensions, calculate their sum and difference.
5. If the number of columns in the first matrix equals the number of rows in the second matrix, calculate their product.
6. Display all the results.

### Important Variables

- `r1`, `c1` — Rows and columns of the first matrix.
- `r2`, `c2` — Rows and columns of the second matrix.
- `A`, `B` — Input matrices.
- `sum`, `sub`, `mul` — Result matrices for addition, subtraction, and multiplication.
- `i`, `j`, `k` — Loop counters.

### How the Code Works Step by Step

1. The program asks the user to enter the sizes of both matrices.
2. Nested loops read all the elements of both matrices.
3. For addition and subtraction, it checks the condition `if (r1 == r2 && c1 == c2)`.
4. If the condition is true, corresponding elements are added or subtracted.
5. For multiplication, it checks the condition `if (c1 == r2)`.
6. If the condition is true, each element of the result is calculated by multiplying the elements of a row of the first matrix by the corresponding elements of a column of the second matrix and adding the products.

### Output / Sample Result

Matrix 1:

`1 2`

`3 4`

Matrix 2:

`5 6`

`7 8`

Addition:

`6 8`

`10 12`

Subtraction:

`-4 -4`

`-4 -4`

Multiplication:

`19 22`

`43 50`

### Viva Questions and Short Answers

Q1. When can two matrices be added?

Answer: When both matrices have the same dimensions.

Q2. When can two matrices be multiplied?

Answer: When the number of columns in the first matrix equals the number of rows in the second matrix.

Q3. Why do we use nested loops in matrix programs?

Answer: Because a matrix contains rows and columns, and nested loops help access every element.

### Common Viva Questions

1. What is a matrix?
2. What is a size mismatch?
3. What is the rule for matrix multiplication?
4. Why are nested loops used in matrix programs?

### Probable Examiner Questions

1. Explain matrix multiplication with a formula.
2. What happens if the row and column sizes do not match?
3. Why do we use the `i`, `j`, and `k` loops?

### Mistakes Students Usually Make

1. Not checking matrix dimensions before addition and subtraction.
2. Not checking the multiplication condition.
3. Not initializing the multiplication result matrix to zero.

### Short Memory Points

- Same dimensions = addition and subtraction.
- `c1 == r2` = multiplication is possible.
- Use nested loops.
- Matrix multiplication is not the same as element-wise multiplication.

### Marathi Explanation Translated into English

This program performs addition, subtraction, and multiplication of two matrices. For addition and subtraction, both matrices must have the same size. For multiplication, the number of columns in the first matrix must equal the number of rows in the second matrix. Nested loops are used to process every element.

## Experiment No. 2: Stack Operations

### Aim

To implement stack operations such as push, pop, search, display, and menu-driven selection.

### Concept

A stack is a linear data structure that follows the LIFO (Last In, First Out) principle.

The last element inserted into the stack is the first element removed.

### Algorithm / Logic

1. Initialize `top = -1`.
2. If the stack is full, display an overflow message.
3. If the user selects push, insert an element at the top.
4. If the user selects pop, remove the top element.
5. If the user selects search, check whether the required value exists.
6. If the user selects display, print the stack elements from top to bottom.

### Important Variables

- `MAX` — Maximum size of the stack.
- `top` — Index of the top element.
- `items[]` — Array used to store stack elements.
- `choice` — User's menu selection.
- `value` — Element to be inserted or searched.

### How the Code Works Step by Step

1. The stack is created using a fixed-size array.
2. `top = -1` indicates that the stack is empty.
3. The `push()` function checks whether the stack is full.
4. If the stack is not full, it increments `top` and stores the new value.
5. The `pop()` function removes the element at the current top position.
6. The `search()` function checks for the required value from top to bottom.
7. The `display()` function prints all stack elements.

### Output / Sample Result

Push the elements `10`, `20`, and `30`.

Display:

`30 20 10`

The last inserted element, `30`, appears first.

### Viva Questions and Short Answers

Q1. What is a stack?

Answer: A stack is a linear data structure that follows the LIFO principle.

Q2. What is the push operation?

Answer: Push inserts an element at the top of the stack.

Q3. What is the pop operation?

Answer: Pop removes the element from the top of the stack.

### Common Viva Questions

1. What is LIFO?
2. What is stack overflow?
3. What is stack underflow?
4. What is the difference between a stack and a queue?

### Probable Examiner Questions

1. Explain push, pop, and display operations with an example.
2. Why is a stack called LIFO?
3. How do you search for an element in a stack?

### Mistakes Students Usually Make

1. Not updating `top` correctly.
2. Using incorrect conditions to check whether the stack is empty or full.
3. Displaying the stack elements incorrectly.

### Short Memory Points

- Stack = LIFO.
- Push = Add at the top.
- Pop = Remove from the top.
- Overflow = Stack is full.
- Underflow = Stack is empty.

### Marathi Explanation Translated into English

A stack is a data structure that follows the LIFO principle. The last element pushed into the stack is the first element popped out. In this program, an array is used to implement the stack.

## Experiment No. 3: Queue Operations

### Aim

To implement queue operations such as insertion, deletion, and display.

### Concept

A queue is a linear data structure that follows the FIFO (First In, First Out) principle.

The first element inserted into the queue is the first element removed.

### Algorithm / Logic

1. Initialize `front = -1` and `rear = -1`.
2. Insert an element at the rear.
3. Delete an element from the front.
4. Display elements from the front to the rear.

### Important Variables

- `queue[]` — Array used to store queue elements.
- `front` — Position of the first element.
- `rear` — Position of the last element.
- `ch` — User's menu choice.
- `num` — Input value to be inserted.

### How the Code Works Step by Step

1. When inserting an element, the program checks whether the queue is full.
2. The new value is placed at the rear position.
3. The `rear` index increases after insertion.
4. During deletion, the element at the `front` position is removed.
5. The `front` index increases.
6. The display operation prints elements from front to rear.

### Output / Sample Result

Insert `10`, `20`, and `30`.

Queue:

`10 20 30`

Delete:

`Element 10 is deleted`

Queue after deletion:

`20 30`

### Viva Questions and Short Answers

Q1. What is FIFO?

Answer: FIFO means First In, First Out.

Q2. At which position is insertion performed in a queue?

Answer: Insertion is performed at the rear.

Q3. At which position is deletion performed in a queue?

Answer: Deletion is performed at the front.

### Common Viva Questions

1. What is the difference between a queue and a stack?
2. What are `front` and `rear`?
3. What is queue overflow?
4. What is a circular queue?

### Probable Examiner Questions

1. Explain insertion and deletion in a queue.
2. Why is a queue called FIFO?
3. What is the use of `front` and `rear`?

### Mistakes Students Usually Make

1. Forgetting to initialize `front` and `rear`.
2. Using incorrect insertion and deletion positions.
3. Not handling an empty queue properly.

### Short Memory Points

- Queue = FIFO.
- Insert at rear.
- Delete from front.
- `front` and `rear` track the queue positions.

### Marathi Explanation Translated into English

A queue follows the FIFO principle. The element that enters first leaves first. In this program, an array is used to implement the queue.

## Experiment No. 4: Tower of Hanoi

### Aim

To move all disks from one peg to another using recursion.

### Concept

Tower of Hanoi is a classic recursive problem. All disks must be moved from the source peg to the destination peg using an auxiliary peg.

The rules are:

- Only one disk can be moved at a time.
- A larger disk cannot be placed on a smaller disk.
- The auxiliary peg is used temporarily to move disks.

### Algorithm / Logic

1. If there is only one disk, move it directly from the source peg to the destination peg.
2. Move the remaining `n-1` disks from the source peg to the auxiliary peg.
3. Move the largest disk from the source peg to the destination peg.
4. Move the `n-1` disks from the auxiliary peg to the destination peg.

### Important Variables

- `n` — Total number of disks.
- `frompeg` — Source peg.
- `topeg` — Destination peg.
- `auxpeg` — Auxiliary or temporary peg.

### How the Code Works Step by Step

1. The recursive function repeatedly calls itself with a smaller number of disks.
2. The base case is `n == 1`.
3. When the base case is reached, the program prints the move for that disk.
4. The function then performs the remaining moves using the same logic.
5. This process continues until all disks have been moved to the destination peg.

### Output / Sample Result

For 3 disks:

```
Move disk 1 from peg A to peg C
Move disk 2 from peg A to peg B
Move disk 1 from peg C to peg B
Move disk 3 from peg A to peg C
Move disk 1 from peg B to peg A
Move disk 2 from peg B to peg C
Move disk 1 from peg A to peg C
```

### Viva Questions and Short Answers

Q1. Why is recursion used in Tower of Hanoi?

Answer: Because the problem can be solved by repeating the same operation on smaller groups of disks.

Q2. What is the minimum number of moves required for `n` disks?

Answer: The minimum number of moves is \\(2^n-1\\).

### Common Viva Questions

1. What is recursion?
2. What is a base case?
3. Why is an auxiliary peg required?
4. What is the formula for the minimum number of moves?

### Probable Examiner Questions

1. Explain the recursive logic with an example.
2. Why is Tower of Hanoi important?
3. How many moves are required for 4 disks?

Answer: \\(2^4-1=15\\) moves.

### Mistakes Students Usually Make

1. Using an incorrect base condition.
2. Using incorrect peg names.
3. Not understanding the recursive process.

### Short Memory Points

- Base case: `n == 1`.
- Move `n-1` disks to the auxiliary peg.
- Move the largest disk to the destination.
- Move the remaining `n-1` disks to the destination.
- Minimum moves = \\(2^n-1\\).

### Marathi Explanation Translated into English

The Tower of Hanoi problem uses recursion. Before moving the largest disk, the smaller disks are moved to the auxiliary peg. The largest disk is then moved to the destination peg, followed by the remaining smaller disks.

## Experiment No. 5: Linear Search and Binary Search

### Aim

To determine whether an element exists in an array and, if it does, find its position.

### Concept

Searching is the process of locating a particular value in an array.

- Linear Search: Checks elements one by one.
- Binary Search: Repeatedly divides the search area into two halves and is generally faster for sorted arrays.

### Algorithm / Logic

Linear Search

1. Start with the first element.
2. Compare it with the element to be searched.
3. If both are equal, display the position.
4. Otherwise, continue checking the remaining elements.
5. If the element is not found by the end of the array, report that it is absent.

Binary Search

1. Sort the array first.
2. Set `low` and `high` to define the search range.
3. Calculate the middle index, `mid`.
4. Compare the target value with the middle element.
5. If they are equal, the element is found.
6. If the target is smaller, continue searching in the left half.
7. If the target is larger, continue searching in the right half.
8. Repeat until the element is found or the search range becomes empty.

### Important Variables

- `a[]` — Array of elements.
- `size` — Number of elements in the array.
- `low`, `high`, `mid` — Search boundaries and middle index.
- `el` — Element to be searched.
- `i` — Loop variable.

### How the Code Works Step by Step

1. The user enters the array elements.
2. In linear search, the program compares the target with each element, one by one.
3. In binary search, the program repeatedly divides the sorted array into two halves.
4. It compares the target with the middle element.
5. If the middle element matches the target, the search stops.
6. Otherwise, it continues searching in the appropriate half.

### Output / Sample Result

Linear Search

Array: `10 20 30 40`

Search element: `30`

Output: `Found at position 3`

Binary Search

Array: `10 20 30 40 50`

Search element: `40`

Output: `Found at position 4`

### Viva Questions and Short Answers

Q1. Which search method is faster?

Answer: Binary search is generally faster for large, sorted arrays.

Q2. Does linear search require a sorted array?

Answer: No. Linear search works on sorted and unsorted arrays.

Q3. Does binary search require a sorted array?

Answer: Yes. Binary search requires sorted data.

### Common Viva Questions

1. What is the difference between linear search and binary search?
2. Why does binary search require sorted data?
3. What is `mid`?
4. What are `low` and `high`?

### Probable Examiner Questions

1. Explain binary search step by step.
2. Why is linear search generally slower than binary search?
3. What is the loop condition in binary search?

### Mistakes Students Usually Make

1. Applying binary search to an unsorted array.
2. Calculating `mid` incorrectly.
3. Not updating `low` and `high` correctly.

### Short Memory Points

- Linear search = Check elements one by one.
- Binary search = Divide and conquer.
- Binary search requires a sorted array.
- `mid = (low + high) / 2`.

### Marathi Explanation Translated into English

In linear search, every element of the array is checked one by one. In binary search, the array must be sorted. The middle element is checked, and the search continues in either the left or right half. Therefore, binary search is generally faster for large sorted arrays.

## Experiment No. 6: Quick Sort

### Aim

To sort an array using the Quick Sort algorithm.

### Concept

Quick Sort is a sorting algorithm that uses a pivot element and recursion. It follows the divide-and-conquer approach.

### Algorithm / Logic

1. Select a pivot element.
2. Rearrange the array so that smaller elements are placed on the left and larger elements are placed on the right of the pivot.
3. Apply Quick Sort recursively to the left partition.
4. Apply Quick Sort recursively to the right partition.
5. The array becomes sorted after all partitions are processed.

### Important Variables

- `a[]` — Array to be sorted.
- `lower`, `upper` — Lower and upper boundaries of the array section.
- `pivot` — Element selected to divide the array.
- `p`, `q` — Pointers used during partitioning.
- `t` — Temporary variable used for swapping.

### How the Code Works Step by Step

1. The pivot is usually selected as the first element.
2. The program scans the array from both ends.
3. Elements are rearranged according to their values relative to the pivot.
4. The pivot is placed in its correct sorted position.
5. The array is divided into left and right partitions.
6. Both partitions are sorted recursively.
7. The process continues until the entire array is sorted.

### Output / Sample Result

Before sorting:

`11 2 9 13 57 25 17 1 90 3`

After sorting:

`1 2 3 9 11 13 17 25 57 90`

### Viva Questions and Short Answers

Q1. What is a pivot?

Answer: A pivot is the element used to divide the array into partitions.

Q2. Why is Quick Sort fast?

Answer: It divides the array into smaller partitions and sorts them recursively, making it efficient in typical cases.

### Common Viva Questions

1. What is a pivot?
2. What is divide and conquer?
3. Is Quick Sort stable?
4. What is the time complexity of Quick Sort?

### Probable Examiner Questions

1. Explain the partition or split function.
2. Why is recursion used in Quick Sort?
3. What happens if the pivot is not chosen properly?

### Mistakes Students Usually Make

1. Using incorrect pivot logic.
2. Updating pointers incorrectly.
3. Making incorrect recursive calls.

### Short Memory Points

- Pivot divides the array.
- Smaller elements go to the left; larger elements go to the right.
- Recursive sorting is used.
- Quick Sort is efficient in typical cases.

### Marathi Explanation Translated into English

In Quick Sort, a pivot is selected to divide the array into two partitions. Elements smaller than the pivot are placed on the left, and larger elements are placed on the right. The same process is then repeated recursively for both partitions.

## Experiment No. 7: Merge Sort with Two Arrays

### Aim

To sort two arrays and merge them into a single sorted array.

### Concept

In this program, two arrays are sorted separately and then merged into one sorted output array. The merging process compares elements from both sorted arrays.

### Algorithm / Logic

1. Sort the first array.
2. Sort the second array.
3. Compare the first unprocessed elements of both arrays.
4. Insert the smaller element into the merged array.
5. Repeat until one of the arrays is exhausted.
6. Copy the remaining elements from the other array into the merged array.

### Important Variables

- `a[]`, `b[]` — Input arrays.
- `c[]` — Merged result array.
- `i`, `j`, `k` — Index variables for the first array, second array, and merged array.
- `temp` — Temporary variable used during sorting.

### How the Code Works Step by Step

1. The program sorts arrays `a` and `b` using nested loops.
2. It uses two pointers, `i` and `j`, to compare elements of the sorted arrays.
3. The smaller element is inserted into `c[k]`.
4. The corresponding pointer and the merged-array index are updated.
5. Once one array is exhausted, the remaining elements of the other array are copied.
6. The final merged array contains all elements in sorted order.

### Output / Sample Result

Array A:

`11 2 9 13 57`

Array B:

`25 17 1 90 3`

Sorted A:

`2 9 11 13 57`

Sorted B:

`1 3 17 25 90`

Merged result:

`1 2 3 9 11 13 17 25 57 90`

### Viva Questions and Short Answers

Q1. What is merge sort?

Answer: Merge Sort is a sorting algorithm based on dividing data into smaller parts, sorting them, and merging the sorted parts. In this program, two sorted arrays are combined into one sorted array.

Q2. Why do we sort the arrays before merging them?

Answer: Because the merging process works efficiently when both input arrays are already sorted.

### Common Viva Questions

1. What is Merge Sort?
2. What is the difference between sorting and merging?
3. Why do we use a third array?

### Probable Examiner Questions

1. Explain the merging process with an example.
2. Why is Merge Sort efficient?
3. What is the role of `k`?

### Mistakes Students Usually Make

1. Not sorting both arrays before merging.
2. Updating pointers incorrectly.
3. Forgetting to copy the remaining elements.

### Short Memory Points

- Sort both arrays first.
- Compare the elements.
- Insert the smaller element.
- Merge into a new array.

### Marathi Explanation Translated into English

In this program, both arrays are sorted first. Then two pointers are used to compare the elements, and the smaller element is placed into the final array. This process produces a sorted output array.

## Experiment No. 8: String Operations

### Aim

To perform string length, copying, reversing, concatenation, lowercase conversion, and uppercase conversion.

### Concept

A string in C is a character array terminated by the null character `\0`.

### Algorithm / Logic

1. Read two strings.
2. Calculate the length using `strlen()`.
3. Copy a string using `strcpy()`.
4. Reverse a string using `strrev()`.
5. Concatenate strings using `strcat()`.
6. Convert strings to lowercase and uppercase using the corresponding functions.

### Important Variables

- `str1`, `str2` — Input strings.
- `copy` — String used to store a copy.
- `reverse` — String used to store a reversed version.
- `concat` — String used to store concatenated text.
- `len` — Length of the string.

### How the Code Works Step by Step

1. The user enters two strings.
2. `strlen(str1)` calculates the length of the first string.
3. `strcpy(copy, str1)` copies the first string into `copy`.
4. `strrev(str1)` reverses the first string.
5. `strcat(concat, str2)` appends the second string to the contents of `concat`.
6. `strlwr()` converts a string to lowercase.
7. `strupr()` converts a string to uppercase.

### Output / Sample Result

Input:

`hello WORLD`

Assume the first string is `hello` and the second string is `WORLD`.

- Length = `5`
- Copied = `hello`
- Reverse = `olleh`
- Concatenated = `olleh WORLD`
- Lowercase = `olleh`
- Uppercase = `WORLD`

These results reflect the sequence described in the original notes, where the first string is reversed before concatenation.

### Viva Questions and Short Answers

Q1. What is a string in C?

Answer: A string is an array of characters ending with the null character `\0`.

Q2. What is `strcat()`?

Answer: `strcat()` joins or concatenates two strings.

Q3. What is `strlen()`?

Answer: `strlen()` returns the length of a string, excluding the null character.

### Common Viva Questions

1. What is a null terminator?
2. What is the difference between a string and a character array?
3. What are the uses of `strcpy()` and `strcat()`?

### Probable Examiner Questions

1. Why is `\0` required at the end of a string?
2. Explain string reversal with an example.
3. Why do we use `fgets()`?

### Mistakes Students Usually Make

1. Not removing the newline character from input when necessary.
2. Forgetting the null terminator.
3. Calculating the string length incorrectly.

### Short Memory Points

- String = Character array + `\0`.
- `strlen()` = Length.
- `strcpy()` = Copy.
- `strcat()` = Join.
- `strrev()` = Reverse.
- `strlwr()` = Convert to lowercase.
- `strupr()` = Convert to uppercase.

### Marathi Explanation Translated into English

A string is a character array. String-handling operations in C are performed using string functions. `strlen()` calculates the length, `strcpy()` copies a string, `strcat()` joins two strings, and `strlwr()` and `strupr()` convert text to lowercase and uppercase, respectively.

Note: `strrev()`, `strlwr()`, and `strupr()` are compiler-specific or non-standard functions and are not available in every C implementation.

## Experiment No. 9: File Copy Program

### Aim

To copy the contents of one file into another file.

### Concept

A file stores data on a storage device. In C, file pointers are used to open, read, write, and close files.

### Algorithm / Logic

1. Open the source file in read mode.
2. Open the target file in write mode.
3. Read one character at a time from the source file.
4. Write each character into the target file.
5. Continue until the end of the source file is reached.
6. Close both files.

### Important Variables

- `FILE *s` — Source file pointer.
- `FILE *t` — Target file pointer.
- `char ch` — Variable used to hold a character from the file.
- `fgetc()` — Function used to read a character from a file.
- `fputc()` — Function used to write a character to a file.

### How the Code Works Step by Step

1. `fopen("file1.txt", "r")` opens the source file in read mode.
2. `fopen("file2.txt", "w")` opens the target file in write mode, creating it if necessary.
3. `fgetc(s)` reads a character from the source file.
4. `fputc(ch, t)` writes that character into the target file.
5. The process continues until the end of the source file is reached.
6. Finally, both files are closed.

### Output / Sample Result

If `file1.txt` contains:

`Hello C language`

Then `file2.txt` will contain:

`Hello C language`

### Viva Questions and Short Answers

Q1. What is `fopen()`?

Answer: `fopen()` opens a file in a specified mode.

Q2. What is `fgetc()`?

Answer: `fgetc()` reads a character from a file.

Q3. What is `fputc()`?

Answer: `fputc()` writes a character to a file.

### Common Viva Questions

1. What is the difference between read mode and write mode?
2. What is a file pointer?
3. What is EOF?
4. Why should we close a file after using it?

### Probable Examiner Questions

1. Explain the logic of the file-copy program.
2. Why do we use a file pointer?
3. What is the EOF condition?

### Mistakes Students Usually Make

1. Not checking whether the files opened successfully.
2. Not closing the files.
3. Using incorrect file modes.

### Short Memory Points

- `"r"` = Read mode.
- `"w"` = Write mode.
- `fgetc()` = Read a character.
- `fputc()` = Write a character.
- File copying = Read from the source and write to the target.

### Marathi Explanation Translated into English

To copy a file, the source file is opened in read mode and the target file is opened in write mode. The contents are read and written character by character using `fgetc()` and `fputc()`.

## Experiment No. 10: Circular Queue

### Aim

To implement a circular queue using an array.

### Concept

A circular queue is a queue in which the last position is connected logically to the first position. When the rear reaches the end of the array, it can wrap around to the beginning.

This helps reuse memory efficiently.

### Algorithm / Logic

1. Check whether the queue is full. If it is full, display an overflow message.
2. If `front == -1`, initialize `front = 0` and `rear = 0`.
3. If `rear` reaches the last index, wrap it around to the first index when possible.
4. Insert the element at the rear.
5. Delete elements from the front.
6. Display elements in circular order, starting at the front and continuing until the rear is reached.

### Important Variables

- `queue[]` — Array used to store circular queue elements.
- `front` — Index of the first element.
- `rear` — Index of the last element.
- `num` — Value to be inserted.
- `i` — Loop counter.

### How the Code Works Step by Step

1. The circular queue is implemented using a fixed-size array.
2. When `rear` reaches the end of the array, it resets to index `0` when space is available.
3. Insertion and deletion are performed in a circular manner.
4. The display operation prints elements in their logical queue order, wrapping around the array when necessary.
5. This allows previously unused positions to be reused after deletion.

### Output / Sample Result

Insert `10`, `20`, `30`, `40`, and `50`.

Queue:

`10 20 30 40 50`

Delete:

`10`

Queue after deletion:

`20 30 40 50`

### Viva Questions and Short Answers

Q1. What is a circular queue?

Answer: A circular queue is a queue in which the rear can wrap around to the beginning of the array after reaching the last position.

Q2. Why is a circular queue useful?

Answer: It uses available array space more efficiently by reusing positions freed by deletion.

### Common Viva Questions

1. What is the difference between a linear queue and a circular queue?
2. Why is wrapping around necessary?
3. What are `front` and `rear` in a circular queue?

### Probable Examiner Questions

1. Explain a circular queue with a diagram.
2. Why is a circular queue better than a simple linear queue?
3. How do we detect the full condition?

### Mistakes Students Usually Make

1. Using an incorrect full condition.
2. Not wrapping `rear` correctly.
3. Using incorrect display logic.

### Short Memory Points

- Circular queue = Wrap around.
- Full condition in a common array implementation: `(rear + 1) % MAX == front`, assuming the implementation reserves one array position to distinguish full from empty.
- Efficient memory usage.

### Marathi Explanation Translated into English

In a circular queue, when the rear reaches the last position, it returns to the first index. This allows the queue to reuse available memory efficiently.

## Program P11: Palindrome Using Recursion

### Aim

To check whether a word is a palindrome using recursion.

### Concept

A palindrome is a word that reads the same forward and backward.

Examples: `madam`, `level`, `racecar`.

### Algorithm / Logic

1. Compare the first and last characters of the word.
2. If both characters are equal, call the recursive function for the inner part of the word.
3. If the characters do not match, return false.
4. If all corresponding pairs match, return true.

### Important Variables

- `word[]` — Input word.
- `start` — Index of the first character being checked.
- `end` — Index of the last character being checked.
- `strlen()` — Function used to calculate the string length.

### How the Code Works Step by Step

1. The user enters a word.
2. The function `palindrome(word, start, end)` compares the first and last characters.
3. If they match, the function calls itself with a smaller range.
4. The starting index moves forward, and the ending index moves backward.
5. If any pair of characters does not match, the word is not a palindrome.
6. If the middle of the word is reached without a mismatch, the word is a palindrome.

### Output / Sample Result

Input:

`level`

Output:

`Given word is palindrome`

### Viva Questions and Short Answers

Q1. What is a palindrome?

Answer: A palindrome is a word that reads the same forward and backward.

Q2. What is recursion?

Answer: Recursion is a process in which a function calls itself.

### Common Viva Questions

1. What is recursion?
2. What is a base case?
3. Why is palindrome checking performed using string comparison?

### Probable Examiner Questions

1. Explain recursion with an example.
2. What is the stopping condition in palindrome checking?
3. Why do we reduce the `start` and `end` indices?

### Mistakes Students Usually Make

1. Not updating the indices correctly.
2. Not checking the stopping condition.
3. Using incorrect comparison logic.

### Short Memory Points

- Palindrome = Same forward and backward.
- Recursion reduces the range of characters being checked.
- Base case: `start >= end`.

### Marathi Explanation Translated into English

A palindrome is a word that reads the same forward and backward. Examples include `level` and `madam`. In this program, recursion is used to compare the first and last letters and then continue checking the inner letters.

## Program P11: Palindrome Without Recursion

### Aim

To check whether a word is a palindrome without using recursion.

### Concept

In this method, the word is reversed and compared with the original word.

### Algorithm / Logic

1. Read a word.
2. Copy the original word into a second string.
3. Reverse the second string.
4. Compare the original string with the reversed string.
5. If both strings are equal, the word is a palindrome; otherwise, it is not.

### Important Variables

- `word1[]` — Original word.
- `word2[]` — Copy of the word, used for reversal.
- `strcmp()` — Function used to compare two strings.

### How the Code Works Step by Step

1. `strcpy(word2, word1)` copies the original word into `word2`.
2. `strrev(word2)` reverses the copied word.
3. `strcmp(word1, word2)` compares the original and reversed strings.
4. If `strcmp()` returns `0`, the strings are equal, so the word is a palindrome.
5. Otherwise, the word is not a palindrome.

### Output / Sample Result

Input:

`radar`

Output:

`Given word is palindrome`

### Viva Questions and Short Answers

Q1. What is `strcmp()`?

Answer: `strcmp()` compares two strings.

Q2. How do you reverse a string?

Answer: The original program uses `strrev()` to reverse a string.

### Common Viva Questions

1. What is `strcmp()`?
2. What is `strrev()`?
3. Which method is easier: recursive or non-recursive?

### Probable Examiner Questions

1. Explain the non-recursive palindrome logic.
2. Why do we copy the original string before reversing it?

### Mistakes Students Usually Make

1. Not copying the original string before reversing it.
2. Using `strcmp()` incorrectly.
3. Using the wrong string length.

### Short Memory Points

- Reverse and compare.
- `strcmp()` returns zero when two strings are equal.

### Marathi Explanation Translated into English

In this method, the original word is copied and the copy is reversed. The original word is then compared with the reversed word. If both are equal, the word is a palindrome.

## Program P12: Doubly Linked List

### Aim

To implement insertion and deletion operations in a doubly linked list.

### Concept

A doubly linked list is a linked data structure in which each node contains three components:

1. Data.
2. A pointer to the previous node.
3. A pointer to the next node.

### Algorithm / Logic

1. Insert a node at the beginning.
2. Insert a node at the end.
3. Insert a node after a specified location.
4. Delete a node.
5. Display the linked list.

### Important Variables

- `struct node` — Structure containing `data`, `prev`, and `next`.
- `start` — Pointer to the beginning of the linked list.

### How the Code Works Step by Step

1. `addAtBeg()` inserts a node at the beginning of the list.
2. `addAtEnd()` inserts a node at the end of the list.
3. `addAfter()` inserts a node after a specified location.
4. `Delete()` removes a node containing a specified value.
5. `Disp()` displays the elements of the linked list.

### Output / Sample Result

Example list:

`10 20 30`

### Viva Questions and Short Answers

Q1. What is a doubly linked list?

Answer: A doubly linked list is a linked list in which every node has pointers to both the previous and next nodes.

Q2. Why is it called a doubly linked list?

Answer: Because each node contains two links: `prev` and `next`.

### Common Viva Questions

1. What is the difference between a singly linked list and a doubly linked list?
2. Why do we need the `prev` pointer?
3. What is the `head` or `start` pointer?

### Probable Examiner Questions

1. Explain insertion at the beginning and end.
2. Why can deletion be easier in a doubly linked list when the node is already known?
3. How do you traverse a doubly linked list?

### Mistakes Students Usually Make

1. Not updating the `prev` pointer correctly.
2. Forgetting to check whether the list is empty.
3. Assigning pointers incorrectly.

### Short Memory Points

- Doubly linked list = `prev` + `next`.
- The `start` pointer points to the first node.
- Traversal can be performed in both directions.

### Marathi Explanation Translated into English

In a doubly linked list, each node contains a `next` pointer to the following node and a `prev` pointer to the previous node. Insertion, deletion, and display operations can be performed using these pointers.

## Binary Search Tree (BST) Program

### Aim

To create a Binary Search Tree and display its inorder traversal.

### Concept

A Binary Search Tree is a binary tree that stores values according to the following rule:

- Values smaller than the root are placed in the left subtree.
- Values larger than the root are placed in the right subtree.

This rule is applied recursively to the subtrees.

### Algorithm / Logic

1. Create a node containing the given data.
2. Insert values by comparing them with the root.
3. If a value is smaller than the current node, move to the left.
4. If a value is larger than the current node, move to the right.
5. Continue until the appropriate empty position is found.
6. Insert the value at that position.
7. Perform inorder traversal to display the values.

### Important Variables

- `root` — Pointer to the first node of the tree.
- `left`, `right` — Pointers to the left and right child nodes.
- `value` — Number to be inserted.
- `n` — Number of nodes.

### How the Code Works Step by Step

1. The program inserts the input values one by one.
2. Each value is compared with the root or current node.
3. If the value is smaller, the program moves to the left subtree.
4. If the value is larger, it moves to the right subtree.
5. This process continues until the correct insertion position is found.
6. Finally, inorder traversal visits the left subtree, the root, and then the right subtree.
7. For a valid BST with distinct values, inorder traversal displays the values in ascending order.

### Output / Sample Result

Input:

`50 30 20 40 70 60 80`

Inorder traversal:

`20 30 40 50 60 70 80`

### Viva Questions and Short Answers

Q1. What is a BST?

Answer: A Binary Search Tree is a binary tree in which smaller values are placed in the left subtree and larger values are placed in the right subtree.

Q2. What is inorder traversal?

Answer: Inorder traversal follows the sequence Left, Root, Right.

### Common Viva Questions

1. What is the difference between a tree and a linked list?
2. What is inorder traversal?
3. Why is a BST useful?

### Probable Examiner Questions

1. Explain the insertion logic in a BST.
2. What is preorder traversal?
3. What is postorder traversal?

### Mistakes Students Usually Make

1. Comparing values with the root incorrectly.
2. Placing smaller values in the right subtree instead of the left.
3. Not understanding tree traversal.

### Short Memory Points

- BST: Left subtree contains smaller values; right subtree contains larger values.
- Inorder = Left, Root, Right.
- A tree is a hierarchical data structure.

### Marathi Explanation Translated into English

In a BST, values smaller than a node are stored in its left subtree, while larger values are stored in its right subtree. Inorder traversal visits the left subtree, then the root, and finally the right subtree. This produces values in ascending order for a BST containing distinct values.

# Important Oral Exam Questions for All Practicals

Q1. What is a stack?

Answer: A stack is a data structure that follows LIFO (Last In, First Out).

Q2. What is a queue?

Answer: A queue is a data structure that follows FIFO (First In, First Out).

Q3. What is the difference between a stack and a queue?

Answer:

- Stack: LIFO — Last In, First Out.
- Queue: FIFO — First In, First Out.

Q4. What is recursion?

Answer: Recursion is a process in which a function calls itself.

Q5. What is a palindrome?

Answer: A palindrome is a word that reads the same forward and backward.

Q6. What is Quick Sort?

Answer: Quick Sort is a sorting algorithm that uses a pivot to divide the array into partitions and sorts them recursively.

Q7. What is Merge Sort?

Answer: Merge Sort is a sorting algorithm that divides data into smaller parts, sorts them, and merges the sorted parts.

Q8. What is binary search?

Answer: Binary search is a searching method that repeatedly divides a sorted array into two halves.

Q9. What is linear search?

Answer: Linear search is a searching method that checks each element one by one.

Q10. What is a linked list?

Answer: A linked list is a data structure consisting of nodes connected using pointers.

Q11. What is a BST?

Answer: A Binary Search Tree is a binary tree in which smaller values are stored in the left subtree and larger values are stored in the right subtree.

# Quick Revision Summary

| Topic                 | Important point                                         |
| --------------------- | ------------------------------------------------------- |
| Stack                 | LIFO                                                    |
| Queue                 | FIFO                                                    |
| Recursion             | A function calls itself                                 |
| Binary Search         | Requires a sorted array                                 |
| Quick Sort            | Uses a pivot                                            |
| Merge Sort            | Merges sorted parts or arrays                           |
| Tree                  | Hierarchical data structure                             |
| BST                   | Left values smaller, right values larger                |
| Palindrome            | Same forward and backward                               |
| Linked List           | Nodes connected by pointers                             |
| Inorder Traversal     | Left, Root, Right                                       |
| Tower of Hanoi        | Minimum moves = \\(2^n-1\\)                             |
| Matrix Addition       | Both matrices must have the same dimensions             |
| Matrix Multiplication | Columns of the first matrix = rows of the second matrix |
| String                | Character array ending with `\0`                        |
| File Copy             | Read from source and write to target                    |
| Circular Queue        | Reuses array positions by wrapping around               |

# Final Memory Checklist

Before your practical viva, make sure you remember these points:

1. Stack and queue: Stack follows LIFO, whereas queue follows FIFO.
2. Matrix multiplication: Check `c1 == r2`.
3. Matrix addition and subtraction: Both matrices must have the same dimensions.
4. Binary search: The array must be sorted.
5. Tower of Hanoi: Minimum number of moves is \\(2^n-1\\).
6. BST: Inorder traversal follows Left–Root–Right.
7. Quick Sort: Remember the pivot and partitioning process.
8. Merge Sort: Remember sorting, comparing, merging, and copying the remaining elements.
9. Palindrome: A palindrome reads the same forward and backward.
10. Recursion: A function calls itself and requires a suitable stopping condition.
11. Doubly linked list: Every node contains `prev` and `next` pointers.
12. String operations: `strlen()` measures length, `strcpy()` copies, `strcat()` joins, and `strcmp()` compares strings.
13. File operations: `"r"` means read, `"w"` means write, `fgetc()` reads a character, and `fputc()` writes a character.
14. Circular queue: Remember the wrap-around mechanism and the full-condition check.
15. Nested loops: They are commonly used to process rows and columns in matrices.

Final viva tip: For every program, prepare these five things first: its aim, its main concept, the algorithm, the important variables, and one sample output. Then revise the probable examiner questions and common mistakes.
