# Cheating for C Part 2 – Simple Viva Ready Explanation

This file contains explanations of all programs written in the C file `all.c`. These explanations are made very simple so that you can read them and easily answer oral questions in the lab/exam.

We will explain each program in the following structure:

- Aim
- Concept
- Algorithm / logic
- Important variables
- How the code works step by step
- Output / sample result
- Viva questions and short answers
- Marathi explanation
- Common viva questions
- Probable examiner questions
- Mistakes students usually make
- Short memory points

---

## Experiment No. 1: Matrix Addition, Subtraction and Multiplication

Aim: To perform addition, subtraction and multiplication of two matrices in C.

Concept: A matrix is a collection of numbers in rows and columns. In this program:

- Addition is possible only when both matrices have same rows and columns.
- Subtraction is also possible only if same size.
- Multiplication is possible only if columns of first matrix = rows of second matrix.

Algorithm / Logic:

1. Read rows and columns of first matrix.
2. Read rows and columns of second matrix.
3. Store values in arrays A and B.
4. If both matrices are same size:
   - calculate sum
   - calculate subtraction
5. If columns of first matrix = rows of second matrix:
   - calculate multiplication
6. Print all results.

Important variables:

- r1, c1 = rows and columns of first matrix
- r2, c2 = rows and columns of second matrix
- A, B = input matrices
- sum, sub, mul = result matrices
- i, j, k = loop counters

How the code works step by step:

- First, the program asks for the size of two matrices.
- It then reads all elements of both matrices using nested loops.
- For addition and subtraction, it checks: if (r1 == r2 && c1 == c2)
- Then each element is added or subtracted.
- For multiplication, it checks: if (c1 == r2)
- Then each element of answer is calculated by multiplying row values of first matrix with column values of second matrix.

Output / sample result: Example: Matrix 1: 1 2 3 4

Matrix 2: 5 6 7 8

Addition: 6 8 10 12

Subtraction: -4 -4 -4 -4

Multiplication: 19 22 43 50

Viva questions and short answers: Q: When can we add two matrices? A: When both matrices have same dimensions.

Q: When can we multiply two matrices? A: When number of columns in first matrix equals number of rows in second matrix.

Q: Why do we use nested loops? A: Because matrix has rows and columns, so we need to access every element.

Marathi explanation: हा प्रोग्राम दोन मॅट्रिक्सचे addition, subtraction आणि multiplication करतो. Addition आणि subtraction साठी दोन्ही मॅट्रिक्सचे size समान असणे आवश्यक आहे. Multiplication साठी पहिल्या मॅट्रिकचे columns आणि दुसऱ्या मॅट्रिकचे rows समान असणे आवश्यक आहे. nested loops वापरून प्रत्येक element process केला जातो.

Common viva questions:

- What is a matrix?
- What is size mismatch?
- What is the rule for matrix multiplication?
- Why is nested loop used in matrix programs?

Probable examiner questions:

- Explain matrix multiplication with formula.
- What happens if row and column sizes do not match?
- Why do we use `i`, `j`, `k` loops?

Mistakes students usually make:

- Not checking matrix sizes before addition/subtraction.
- Not checking multiplication condition.
- Not initializing multiplication result matrix to zero.

Short memory points:

- Same size = addition/subtraction
- c1 == r2 = multiplication
- Use nested loop
- Matrix multiplication is not simple element-wise multiplication

---

## Experiment No. 2: Stack Operations

Aim: To implement stack operations such as push, pop, search, display, and menu-driven choice.

Concept: A stack follows LIFO principle:

- Last In First Out
- The last inserted element is removed first.

Algorithm / Logic:

1. Initialize top = -1.
2. If stack is full, print overflow.
3. If user chooses push, add an element at top.
4. If user chooses pop, remove the top element.
5. If user chooses search, find whether a value exists.
6. If user chooses display, print stack elements from top to bottom.

Important variables:

- MAX = maximum stack size
- top = index of top element
- items[] = array where data is stored
- choice = user option
- value = element to push/search

How the code works step by step:

- The stack is created using a fixed-size array.
- `top = -1` means the stack is empty.
- `push()` checks if stack is full.
- If not full, it increases `top` and stores the value.
- `pop()` removes the current top value.
- `search()` checks from top to bottom.
- `display()` prints all values.

Output / sample result: Example: Push 10, 20, 30 Display: 30 20 10

Viva questions and short answers: Q: What is stack? A: A stack is a linear data structure with LIFO property.

Q: What is push operation? A: It inserts an element at the top.

Q: What is pop operation? A: It removes the element at the top.

Marathi explanation: स्टॅक हा LIFO pattern असलेला data structure आहे. शेवटचे element जसे push केले जाते, तसाच ते first मध्ये pop होतो. या प्रोग्राममध्ये array वापरून stack बनवले आहे.

Common viva questions:

- What is LIFO?
- What is stack overflow?
- What is stack underflow?
- Difference between stack and queue?

Probable examiner questions:

- Explain push, pop, and display with an example.
- Why is stack called LIFO?
- How do you search an element in a stack?

Mistakes students usually make:

- Not updating `top` correctly
- Wrong empty/full check
- Not printing stack correctly

Short memory points:

- Stack = LIFO
- Push = add at top
- Pop = remove from top
- Overflow = stack full
- Underflow = stack empty

---

## Experiment No. 3: Queue Operations

Aim: To implement queue operations such as insertion, deletion, and display.

Concept: A queue follows FIFO principle:

- First In First Out
- The first inserted element is removed first.

Algorithm / Logic:

1. Initialize front = -1 and rear = -1.
2. Insert element at rear.
3. Delete element from front.
4. Display values from front to rear.

Important variables:

- queue[] = array storing queue
- front = first element
- rear = last element
- ch = menu choice
- num = input value

How the code works step by step:

- When inserting, if queue is not full, the value is placed at `queue[rear]`.
- `rear` increases after insertion.
- When deleting, value at `queue[front]` is removed.
- `front` increases.
- Display prints all values from front to rear.

Output / sample result: Insert 10, 20, 30 Queue: 10 20 30 Delete: Element 10 is deleted Queue: 20 30

Viva questions and short answers: Q: What is FIFO? A: First In First Out.

Q: Which position is used for insertion in queue? A: Rear.

Q: Which position is used for deletion? A: Front.

Marathi explanation: Queue हा FIFO principle वापरतो. पहिल्यांदा येणारा element पहिल्यांदा बाहेर पडतो. या प्रोग्राममध्ये array वापरून queue बनवली आहे.

Common viva questions:

- Difference between queue and stack
- What is front and rear?
- What is queue overflow?
- What is circular queue?

Probable examiner questions:

- Explain insertion and deletion in queue.
- Why is queue called FIFO?
- What is the use of front and rear?

Mistakes students usually make:

- Forgetting to initialize front and rear
- Wrong insertion/deletion positions
- Not handling empty queue properly

Short memory points:

- Queue = FIFO
- Insert at rear
- Delete from front
- Front and rear track queue

---

## Experiment No. 4: Tower of Hanoi

Aim: To move all disks from one peg to another using recursion.

Concept: Tower of Hanoi is a classic recursive problem. We must move all disks from source peg to destination peg using an auxiliary peg.

Algorithm / Logic:

1. If only one disk, move it directly.
2. Move n-1 disks from source to auxiliary.
3. Move the largest disk from source to destination.
4. Move n-1 disks from auxiliary to destination.

Important variables:

- n = total number of disks
- frompeg = source peg
- topeg = destination peg
- auxpeg = temporary peg

How the code works step by step:

- The recursion function keeps calling itself with smaller values.
- Base case is when `n == 1`.
- It prints each move.
- The same logic repeats again and again until all disks are moved.

Output / sample result: For 3 disks: Move disk 1 from peg A to peg C Move disk 2 from peg A to peg B Move disk 1 from peg C to peg B Move disk 3 from peg A to peg C Move disk 1 from peg B to peg A Move disk 2 from peg B to peg C Move disk 1 from peg A to peg C

Viva questions and short answers: Q: Why recursion is used here? A: Because the problem is solved by repeating the same task on smaller disks.

Q: What is the minimum number of moves for n disks? A: 2^n - 1

Marathi explanation: Tower of Hanoi problemमध्ये recursion वापरले जाते. मोठा disk हलवल्यापूर्वी लहान disk auxiliary peg वर हलवले जातात. नंतर remaining disk destination वर ठेवले जातात.

Common viva questions:

- What is recursion?
- What is base case?
- Why is auxiliary peg required?
- What is the formula for minimum moves?

Probable examiner questions:

- Explain recursive logic with example.
- Why is Tower of Hanoi important?
- How many moves are required for 4 disks?

Mistakes students usually make:

- Wrong base condition
- Incorrect peg names
- Poor understanding of recursion

Short memory points:

- Base case: n == 1
- Move n-1 to auxiliary
- Move biggest to destination
- Move remaining n-1 to destination
- Minimum moves = 2^n - 1

---

## Experiment No. 5: Linear Search and Binary Search

Aim: To find whether an element exists in an array and if yes, at which position.

Concept: Searching is used to locate values in arrays.

- Linear search checks one by one.
- Binary search is faster for sorted arrays.

Algorithm / Logic: Linear Search:

1. Start from first element.
2. Compare it with searched value.
3. If equal, print position.
4. If not found, continue until end.

Binary Search:

1. Sort the array first.
2. Set low and high.
3. Find mid.
4. Compare target with mid value.
5. Move left or right accordingly.

Important variables:

- a[] = array
- size = array size
- low, high, mid = search boundaries
- el = searched value
- i = loop variable

How the code works step by step:

- User enters numbers.
- For linear search, each element is compared one by one.
- For binary search, the array is divided into two halves repeatedly.
- If the middle element matches the target, the search stops.

Output / sample result: Linear search example: Array: 10 20 30 40 Search 30 Found at position 3

Binary search example: Array: 10 20 30 40 50 Search 40 Found at position 4

Viva questions and short answers: Q: Which search is faster? A: Binary search.

Q: Does linear search need sorted array? A: No.

Q: Does binary search need sorted array? A: Yes.

Marathi explanation: Linear search मध्ये array चा प्रत्येक element तपासला जातो. Binary search मध्ये array sorted असणे गरजेचे आहे. Mid element पाहून left किंवा right half शोधण्याची पद्धत वापरली जाते. त्यामुळे binary search अधिक वेगवान आहे.

Common viva questions:

- Difference between linear and binary search
- Why binary search needs sorted data
- What is mid?
- What is low and high?

Probable examiner questions:

- Explain step-by-step binary search.
- Why linear search is slower.
- What is the condition for loop in binary search?

Mistakes students usually make:

- Using binary search on unsorted array
- Wrong mid calculation
- Not updating low and high properly

Short memory points:

- Linear search = check one by one
- Binary search = divide and conquer
- Sorted array required for binary search
- Mid = (low + high) / 2

---

## Experiment No. 6: Quick Sort

Aim: To sort an array using quick sort.

Concept: Quick sort uses pivot element and recursive sorting.

Algorithm / Logic:

1. Choose pivot.
2. Rearrange smaller elements left and larger elements right.
3. Recursively sort left and right parts.
4. Final array becomes sorted.

Important variables:

- a[] = array
- lower, upper = range
- pivot = chosen value
- p, q = pointers
- t = temporary variable

How the code works step by step:

- The pivot is usually the first element.
- The code scans from both ends.
- Smaller values go to left side, larger values go to right side.
- The pivot is placed at correct position.
- Then left and right partitions are sorted recursively.

Output / sample result: Before: 11 2 9 13 57 25 17 1 90 3

After: 1 2 3 9 11 13 17 25 57 90

Viva questions and short answers: Q: What is a pivot? A: It is the element used to split the array.

Q: Why is quick sort fast? A: Because it divides the array into smaller parts.

Marathi explanation: Quick sort मध्ये pivot निवडून array दोन भागात विभागला जातो. pivot पेक्षा लहान elements left आणि मोठे elements right बाजूला ठेवले जातात. नंतर दोन भागांमध्ये पुन्हा हा process चालू राहतो.

Common viva questions:

- What is pivot?
- What is divide and conquer?
- Is quick sort stable?
- What is time complexity?

Probable examiner questions:

- Explain split function.
- Why is recursion used?
- What happens if pivot is not chosen properly?

Mistakes students usually make:

- Wrong pivot logic
- Not updating pointers correctly
- Incorrect recursive calls

Short memory points:

- Pivot divides the array
- Left small, right large
- Recursive sorting
- Quick sort is efficient

---

## Experiment No. 7: Merge Sort with Two Arrays

Aim: To sort two arrays and then merge them into one sorted array.

Concept: Merge sort merges two sorted arrays into one sorted output.

Algorithm / Logic:

1. Sort first array.
2. Sort second array.
3. Compare first element of both arrays.
4. Put smaller value into merged array.
5. Repeat until both arrays are finished.
6. Copy remaining elements.

Important variables:

- a[] and b[] = input arrays
- c[] = merged array
- i, j, k = indexes
- temp = temporary variable

How the code works step by step:

- The program sorts array `a` and `b` using nested loops.
- Then two pointers `i` and `j` are used to compare elements.
- The smaller value is placed into `c[k]`.
- At the end, leftover items are copied.

Output / sample result: A = 11 2 9 13 57 B = 25 17 1 90 3

Sorted A = 2 9 11 13 57 Sorted B = 1 3 17 25 90

Merged result: 1 2 3 9 11 13 17 25 57 90

Viva questions and short answers: Q: What is merge sort? A: It is a sorting method where two sorted arrays are combined into one sorted array.

Q: Why sort before merge? A: Because merging works efficiently on sorted data.

Marathi explanation: हा प्रोग्राममध्ये दोन array आधी sort केले जातात. नंतर दोन pointers वापरून elements compare करून smallest element final array मध्ये ठेवला जातो. त्यामुळे final output sorted होतो.

Common viva questions:

- What is merge sort?
- Difference between sorting and merging
- Why use third array?

Probable examiner questions:

- Explain merge step with example.
- Why is merge sort efficient?
- What is the role of `k`?

Mistakes students usually make:

- Not sorting both arrays
- Wrong pointer movement
- Not copying remaining elements

Short memory points:

- Sort first
- Compare values
- Insert smaller one
- Merge into new array

---

## Experiment No. 8: String Operations

Aim: To perform string length, copy, reverse, concatenation, lowercase, and uppercase operations.

Concept: A string is a character array terminated by `\0`.

Algorithm / Logic:

1. Read two strings.
2. Calculate length using `strlen()`.
3. Copy string using `strcpy()`.
4. Reverse string using `strrev()`.
5. Concatenate using `strcat()`.
6. Convert to lowercase and uppercase.

Important variables:

- str1, str2 = input strings
- copy, reverse, concat = working strings
- len = length

How the code works step by step:

- User enters two strings.
- `strlen(str1)` gives length.
- `strcpy(copy, str1)` copies data.
- `strrev(str1)` reverses the first string.
- `strcat(concat, str2)` appends second string.
- `strlwr()` converts to lowercase.
- `strupr()` converts to uppercase.

Output / sample result: Input: hello WORLD

Length = 5 Copied = hello Reverse = olleh Concatenated = olleh WORLD Lowercase = olleh Uppercase = WORLD

Viva questions and short answers: Q: What is string in C? A: It is an array of characters ending with null character.

Q: What is `strcat()`? A: It concatenates two strings.

Q: What is `strlen()`? A: It returns the length of string.

Marathi explanation: String म्हणजे character array असते. C मध्ये string handling अनेक built-in functions वापरून केले जाते. `strlen` length मोजते, `strcpy` copy करते, `strcat` दोन्ही strings एकत्र करते, आणि `strlwr` / `strupr` lower/upper case मध्ये बदलते.

Common viva questions:

- What is null terminator?
- Difference between string and char array
- Use of `strcpy()` and `strcat()`

Probable examiner questions:

- Why do we need `\0` at end?
- Explain string reversal with example.
- Why do we use `fgets()`?

Mistakes students usually make:

- Not removing newline from input
- Forgetting null terminator
- Wrong string length calculation

Short memory points:

- String = char array + `\0`
- `strlen` = length
- `strcpy` = copy
- `strcat` = join
- `strrev` = reverse
- `strlwr` = lower
- `strupr` = upper

---

## Experiment No. 9: File Copy Program

Aim: To copy content from one file to another.

Concept: A file is stored on disk. In C, file pointers are used to open, read and write files.

Algorithm / Logic:

1. Open source file in read mode.
2. Open target file in write mode.
3. Read one character at a time.
4. Write each character to the target file.
5. Close both files.

Important variables:

- `FILE *s` = source file pointer
- `FILE *t` = target file pointer
- `char ch` = file character
- `fgetc()` = read character
- `fputc()` = write character

How the code works step by step:

- `fopen("file1.txt","r")` opens the source file.
- `fopen("file2.txt","w")` creates the target file.
- `fgetc(s)` reads one character.
- `fputc(ch, t)` writes that character to target file.
- This continues until end of file.
- Finally both files are closed.

Output / sample result: If `file1.txt` contains: Hello C language

Then `file2.txt` will also contain: Hello C language

Viva questions and short answers: Q: What is `fopen()`? A: It opens a file.

Q: What is `fgetc()`? A: It reads a character from a file.

Q: What is `fputc()`? A: It writes a character to a file.

Marathi explanation: फाईल copy करण्यासाठी source file open करून read mode वर वाचले जाते आणि target file write mode मध्ये content लिहिले जाते. `fgetc()` आणि `fputc()` वापरून character by character copy केले जाते.

Common viva questions:

- Difference between read and write mode
- What is file pointer?
- What is `EOF`?
- Why close file after use?

Probable examiner questions:

- Explain file copy logic.
- Why do we use file pointer?
- What is `EOF` condition?

Mistakes students usually make:

- Not checking if file opened successfully
- Not closing the file
- Not using proper file modes

Short memory points:

- `r` = read
- `w` = write
- `fgetc` = read char
- `fputc` = write char
- File copy = read + write

---

## Experiment No. 10: Circular Queue

Aim: To implement circular queue using array.

Concept: In a circular queue, after the last position, the queue wraps around to the first position. This helps use full memory efficiently.

Algorithm / Logic:

1. If queue is full, print overflow.
2. If front == -1, set front = 0, rear = 0.
3. If rear is at last index, wrap it to first.
4. Insert at rear.
5. Delete from front.
6. Display from front until rear.

Important variables:

- queue[] = circular queue elements
- front, rear = queue boundaries
- num = inserted value
- i = loop counter

How the code works step by step:

- The queue array is fixed size.
- When rear reaches end, it resets to 0.
- Insertion and deletion happen in circular manner.
- Display prints values in circular order until rear is reached.

Output / sample result: Insert 10, 20, 30, 40, 50 Queue: 10 20 30 40 50

Delete 10 Queue: 20 30 40 50

Viva questions and short answers: Q: What is circular queue? A: A queue where rear wraps around to front after the last position.

Q: Why is circular queue useful? A: It uses memory efficiently.

Marathi explanation: Circular queue मध्ये queueची rear end वर पोहोचल्यानंतर ती first index वर फिरते. त्यामुळे पुरे memory reuse होते आणि queue efficient बनते.

Common viva questions:

- Difference between linear and circular queue
- Why wrap around is needed?
- What is front and rear in circular queue?

Probable examiner questions:

- Explain circular queue with diagram.
- Why is circular queue better than simple queue?
- How do we detect full condition?

Mistakes students usually make:

- Wrong full condition
- Not wrapping rear correctly
- Incorrect display logic

Short memory points:

- Circular queue = wrap around
- Full condition uses front == rear + 1
- Efficient memory usage

---

## Program p11: Palindrome using Recursion

Aim: To check whether a word is palindrome using recursion.

Concept: A palindrome is a word that reads the same forwards and backwards. Examples: madam, level, racecar

Algorithm / Logic:

1. Compare first and last characters.
2. If they are same, call recursion on inner part.
3. If mismatch, return false.
4. If all pairs match, return true.

Important variables:

- word[] = input word
- start, end = indexes
- strlen() = length of string

How the code works step by step:

- User enters a word.
- The function `palindrome(word, start, end)` compares first and last character.
- It recursively reduces the range.
- If all comparisons are equal, the word is palindrome.

Output / sample result: Enter word: level Given word is palindrome

Viva questions and short answers: Q: What is palindrome? A: A word that reads the same both ways.

Q: What is recursion? A: A function calls itself.

Marathi explanation: Palindrome म्हणजे शब्द मागे व पुढे समान वाचला जातो. Example: level, madam. या प्रोग्राममध्ये recursion वापरून पहिल्यांदा आणि शेवटच्या letter compare केले जातात.

Common viva questions:

- What is recursion?
- What is base case?
- Why is palindrome done with string comparison?

Probable examiner questions:

- Explain recursion with example.
- What is the stopping condition in palindrome check?
- Why do we reduce start and end?

Mistakes students usually make:

- Not reducing index properly
- Not checking end conditions
- Wrong comparison logic

Short memory points:

- Palindrome = same forward and backward
- Recursion reduces range
- Base case: start >= end

---

## Program p11 normal: Palindrome without Recursion

Aim: To check palindrome without recursion.

Concept: The word is reversed and compared with original.

Algorithm / Logic:

1. Read a word.
2. Copy it into second string.
3. Reverse second string.
4. Compare original and reversed string.
5. If same, palindrome else not.

Important variables:

- word1[] = original word
- word2[] = reversed word
- strcmp() = compare strings

How the code works step by step:

- `strcpy(word2, word1)` copies the word.
- `strrev(word2)` reverses it.
- `strcmp(word1, word2)` compares both strings.
- If equal, palindrome; otherwise not.

Output / sample result: Enter word: radar Given word is palindrome

Viva questions and short answers: Q: What is `strcmp()`? A: It compares two strings.

Q: How do you reverse a string? A: Using `strrev()`.

Marathi explanation: या पद्धतीत original word copy करून reverse केली जाते. नंतर original आणि reverse word compare केले जातात. जर समान असतील तर palindrome आहे.

Common viva questions:

- What is `strcmp()`?
- What is `strrev()`?
- Which method is easier: recursive or non-recursive?

Probable examiner questions:

- Explain non-recursive palindrome logic.
- Why do we copy the string before reversing?

Mistakes students usually make:

- Not copying original before reversal
- Wrong use of `strcmp()`
- Using wrong string length

Short memory points:

- Reverse and compare
- `strcmp()` returns zero for same strings

---

## Program p12: Doubly Linked List

Aim: To implement insertion and deletion in a doubly linked list.

Concept: A doubly linked list is a list where each node contains:

- data
- pointer to previous node
- pointer to next node

Algorithm / Logic:

1. Add node at beginning.
2. Add node at end.
3. Add node after given location.
4. Delete a node.
5. Display the list.

Important variables:

- `struct node` contains data, prev, next
- start = beginning of list

How the code works step by step:

- `addAtBeg()` inserts a node at the start.
- `addAtEnd()` inserts a node at the end.
- `addAfter()` inserts after a given location.
- `Delete()` removes a node with given value.
- `Disp()` prints the whole list.

Output / sample result: List: 10 20 30

Viva questions and short answers: Q: What is doubly linked list? A: Each node has links to both previous and next node.

Q: Why is it called doubly linked? A: Because it has two links: prev and next.

Marathi explanation: Doubly linked list मध्ये प्रत्येक node नंतरच्या node करीता next pointer ठेवतो आणि आधीच्या node करीता prev pointer ठेवतो. यात add, delete, display सगळे ऑपरेशन करता येतात.

Common viva questions:

- Difference between singly and doubly linked list
- Why do we need prev pointer?
- What is head/start?

Probable examiner questions:

- Explain insertion at beginning and end.
- Why is deletion easier with doubly linked list?
- How do you traverse the list?

Mistakes students usually make:

- Not updating prev pointer properly
- Forgetting to check for empty list
- Wrong pointer assignments

Short memory points:

- Doubly linked list = prev + next
- Start pointer points to first node
- Traversal in both directions

---

## Binary Search Tree (BST) Program

Aim: To build a binary search tree and print inorder traversal.

Concept: A binary search tree stores data in a sorted structure:

- Left subtree values are smaller
- Right subtree values are larger

Algorithm / Logic:

1. Create a node with data.
2. Insert values by comparing with root.
3. If value smaller, go left.
4. If value larger, go right.
5. Print inorder traversal.

Important variables:

- root = first node
- left, right = child pointers
- value = input number
- n = number of nodes

How the code works step by step:

- Insert each value one by one.
- Compare with root.
- Move left or right accordingly.
- Finally inorder traversal prints left, root, right.

Output / sample result: Input: 50 30 20 40 70 60 80 Inorder traversal: 20 30 40 50 60 70 80

Viva questions and short answers: Q: What is BST? A: A binary tree where left subtree values are smaller and right subtree values are larger.

Q: What is inorder traversal? A: Left, root, right.

Marathi explanation: BST मध्ये left subtree च्या values कमी आणि right subtree च्या values जास्त असतात. Inorder traversal मध्ये left, root, right sequenceने values printed होतात.

Common viva questions:

- Difference between tree and linked list
- What is inorder traversal?
- Why is BST useful?

Probable examiner questions:

- Explain insertion logic in BST.
- What is preorder traversal?
- What is postorder traversal?

Mistakes students usually make:

- Wrong comparison with root
- Not placing smaller values in left subtree
- Not understanding tree traversal

Short memory points:

- BST left smaller, right larger
- Inorder = left, root, right
- Tree is hierarchical

---

## Important oral exam questions for all practicals

1. What is a stack? A stack is a data structure that follows LIFO.
2. What is a queue? A queue is a data structure that follows FIFO.
3. What is the difference between stack and queue?

- Stack: LIFO
- Queue: FIFO

4. What is recursion? A function calling itself.
5. What is palindrome? A word that reads same both ways.
6. What is quick sort? A sorting method using pivot and recursion.
7. What is merge sort? A sorting method that merges two sorted arrays.
8. What is binary search? A search method used on sorted data.
9. What is linear search? A simple search checking each element.
10. What is a linked list? A chain of nodes connected by pointers.
11. What is BST? A binary tree that stores smaller values left and larger values right.

Quick revision summary:

- Stack = LIFO
- Queue = FIFO
- Recursion = function calls itself
- Binary Search = sorted array required
- Quick sort = pivot
- Merge sort = merge two sorted arrays
- Tree = left smaller, right larger
- Palindrome = same forwards and backwards
- Linked list = nodes with pointers

Final memory checklist:

- Always remember the difference between stack and queue.
- For matrix multiplication, check c1 == r2.
- For addition, check same dimensions.
- For binary search, array must be sorted.
- For Tower of Hanoi, minimum moves = 2^n - 1.
- For BST, inorder is left-root-right.

This is the complete oral-ready explanation for your C and Data Structures practicals.
