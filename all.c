
Experiment No:-1
Name:-Hardik Dattatray Jadhav
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖
Program:- 
#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;
    int i, j, k;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    int A[r1][c1], B[r2][c2], sum[r1][c1], sub[r1][c1], mul[r1][c2];
    // Input first matrix
    printf("\nEnter elements of first matrix:\n");
    for (i = 0; i < r1; i++)  {
        for (j = 0; j < c1; j++)   {
            scanf("%d", &A[i][j]);   }    }
    // Input second matrix
    printf("\nEnter elements of second matrix:\n");
    for (i = 0; i < r2; i++)   {
        for (j = 0; j < c2; j++)    {
            scanf("%d", &B[i][j]);    }    }
    // Matrix Addition and Subtraction
    if (r1 == r2 && c1 == c2)    {
        for (i = 0; i < r1; i++)    {
            for (j = 0; j < c1; j++)   {
                sum[i][j] = A[i][j] + B[i][j];
                sub[i][j] = A[i][j] - B[i][j];   }   }
        // Display Addition
        printf("\nMatrix Addition:\n");
        for (i = 0; i < r1; i++)    {
            for (j = 0; j < c1; j++)     {
                printf("%d ", sum[i][j]);      }
            printf("\n");     }

        // Display Subtraction
        printf("\nMatrix Subtraction:\n");
        for (i = 0; i < r1; i++)    {
            for (j = 0; j < c1; j++)       {
                printf("%d ", sub[i][j]);       }
            printf("\n");    }   }
    else    {
        printf("\nAddition and Subtraction not possible (size mismatch).\n");
    }
    // Matrix Multiplication
    if (c1 == r2)    {
        for (i = 0; i < r1; i++)     {
            for (j = 0; j < c2; j++)
           
 {
                mul[i][j] = 0;

                for (k = 0; k < c1; k++)
                {
                    mul[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        // Display Multiplication
        printf("\nMatrix Multiplication:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d ", mul[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nMultiplication not possible (c1 != r2).\n");
    }

    return 0;
} 


Experiment No:-2
Name:-Hardik Dattatray Jadhav
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖
Algorithm for PUSH operation.
Steps:-
Step 1. Begin procedure Push(stac 
Step 2. If stack is full 
Step 3. Return Null
Step 4. End if
Step 5. Top← top+1
Step 6. Stack[top] ← data
Step 7. Return success
Step 8. End

Program:- 
#include <stdio.h>
#include <stdlib.h>

#define MAX 5

// Define Stack structure
typedef struct
{
    int items[MAX];
    int top;
} Stack;

// Initialize stack
void initStack(Stack *s)
{
    s->top = -1;
}

// Check if stack is full
int isFull(Stack *s)
{
    return s->top == MAX - 1;
}

// Check if stack is empty
int isEmpty(Stack *s)
{
    return s->top == -1;
}

// Push an element into stack
void push(Stack *s, int value)
{
    if (isFull(s))
    {
        printf("Error: Stack Overflow! Cannot push %d.\n", value);
    }
    else
    {
        s->top++;
        s->items[s->top] = value;

        printf("%d pushed to the stack.\n", value);
    }
}

// Pop an element from stack
void pop(Stack *s)
{
    if (isEmpty(s))
    {
        printf("Error: Stack Underflow! The stack is already empty.\n");
    }
    else
    {
        printf("%d popped from the stack.\n", s->items[s->top]);

        s->top--;
    }
}

// Search for an element
void search(Stack *s, int key)
{
    if (isEmpty(s))
    {
        printf("The stack is empty. Cannot search.\n");
        return;
    }

    int found = 0;

    for (int i = s->top; i >= 0; i--)
    {
        if (s->items[i] == key)
        {
            int positionFromTop = s->top - i + 1;

            printf(
                "Element %d exists! Found at position %d from the top.\n",
                key,
                positionFromTop
            );

            found = 1;

            break;
        }
    }

    if (!found)
    {
        printf("Element %d does not exist in the stack.\n", key);
    }
}

// Display stack
void display(Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Current Stack (Top to Bottom):\n");

        for (int i = s->top; i >= 0; i--)
        {
            printf("[%d]\n", s->items[i]);
        }
    }
}

// Main function
int main()
{
    Stack s;

    initStack(&s);

    int choice, value;

    while (1)
    {
        printf("\n--- Stack Operations Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Search\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter an integer to push: ");
            scanf("%d", &value);

            push(&s, value);
            break;

        case 2:
            pop(&s);
            break;

        case 3:
            printf("Enter an integer to search for: ");
            scanf("%d", &value);

            search(&s, value);
            break;

        case 4:
            display(&s);
            break;

        case 5:
            printf("Exiting program...\n");
            exit(0);

        default:
            printf("Invalid choice! Please select an option between 1 and 5.\n");
        }
    }

    return 0;
}

 Experiment No:-3
Name:-Hardik Dattatray Jadhav
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖

Program:- 
#include <stdio.h>

#define MAX 5

void Insert();
void Delete();
void Disp();

int queue[MAX];
int front, rear;
int i, ch, num;

int main()
{
    front = rear = -1;   // Initially queue is empty

    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Display\n");
    printf("4. Exit\n");

    do
    {
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                Insert();
                break;

            case 2:
                Delete();
                break;

            case 3:
                Disp();
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Wrong choice\n");
        }

    } while (ch != 4);

    return 0;
}

void Insert()
{
    // Check whether queue is full
    if (rear == MAX - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        printf("Enter a number to insert: ");
        scanf("%d", &num);

        // If this is the first element
        if (front == -1)
        {
            front = 0;
        }

        rear++;
        queue[rear] = num;

        printf("Element %d inserted\n", num);
        Disp();
    }
}

void Delete()
{
    // Check whether queue is empty
    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Element %d is deleted\n", queue[front]);

        front++;

        // If all elements have been deleted
        if (front > rear)
        {
            front = rear = -1;
        }

        Disp();
    }
}

void Disp()
{
    // Check whether queue is empty
    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue: ");

        for (i = front; i <= rear; i++)
        {
            printf("%5d", queue[i]);
        }

        printf("\n");
    }
}

 Experiment No:-4
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖

Program:- 
#include <stdio.h>
/* Function declaration */
void towers(int n, char frompeg, char topeg, char auxpeg);
/* Function definition */
void towers(int n, char frompeg, char topeg, char auxpeg){
    /* Base case: If only 1 disk, move it */
    if (n == 1)    {
        printf("Move disk 1 from peg %c to peg %c\n",
               frompeg, topeg);
        return;    }
    /* Move top n-1 disks from source to auxiliary */
    towers(n - 1, frompeg, auxpeg, topeg);
    /* Move the largest disk from source to destination */
    printf("Move disk %d from peg %c to peg %c\n",
           n, frompeg, topeg);
    /* Move n-1 disks from auxiliary to destination */
    towers(n - 1, auxpeg, topeg, frompeg);
}

int main()
{
    int n;

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive number of disks.\n");
        return 1;
    }

    printf("\nThe Tower of Hanoi involves the moves:\n\n");

    towers(n, 'A', 'C', 'B');

    return 0;
}

Experiment No:-5
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖

Program:- 

//linear search
#include <stdio.h>
int main() {
	int a[10]  , b, i, pos ;	
	printf("enter the 10 no for array");
		for ( i=0;i<=9;i++){
		scanf("%d",&a[i]);}
		printf("enter 1 to 10 any no ");
	scanf("%d", &b);	
	for ( i=0;i<=9;i++){
		if(b==a[i]){		
		pos=i;		
		break;
		printf("element found at position %d", pos);		
	}  	}
	if (pos!=1){
		printf("element found at %d position ",pos+1);}
	else {	printf("not found");	}
         return 0;}

Output:-








Program:- 
//binary search
#include<stdio.h>
 int main()
{
    int a[100];
    int i, low, mid, high, size, el, pos;
    printf("enter the size of array \n");
    scanf("%d", &size);
    printf("enter elementnts\n");
    for (i = 0; i <= size - 1; i++)
    {       scanf("%d", &a[i]);    }
    printf(" enter the element for search\n");
    scanf("%d", &el);
    low = 0;
    high = size - 1;
    pos = -1;
    while (low <= high)
    {        mid = (low + high) / 2;
        if (el == a[mid])  {
            pos = mid;
            break;  }
        else if (el < a[mid])   {
            high = mid - 1; // left side        }
        else  {  low = mid + 1; // right side        }
    }

    if (pos >= 0)  {
        printf("element found at position %d", pos + 1);   }
    else    {   printf("element not found");    }
    return 0;
}

 Experiment No:-6
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖

Program:- 


#include <stdio.h>
 
void quicksort(int a[], int lower, int upper);
int split(int a[], int lower, int upper);

void main()
{
    int arr[10] = {11, 2, 9, 13, 57, 25, 17, 1, 90, 3};
    int i;

 
    printf("Quick Sort.\n");

    printf("\nArray before sorting:\n");
    for (i = 0; i < 10; i++)
        printf("%d\t", arr[i]);

    quicksort(arr, 0, 9);

    printf("\n\nArray after sorting:\n");
    for (i = 0; i < 10; i++)
        printf("%d\t", arr[i]);

 }

void quicksort(int a[], int lower, int upper)
{
    int i;

    if (upper > lower)
    {
        i = split(a, lower, upper);

        quicksort(a, lower, i - 1);
        quicksort(a, i + 1, upper);
    }
}

int split(int a[], int lower, int upper)
{
    int p, q, t, pivot;

    p = lower + 1;
    q = upper;
    pivot = a[lower];

    while (q >= p)
    {
        while (p <= upper && a[p] < pivot)
            p++;

        while (q >= lower && a[q] > pivot)
            q--;

        if (q > p)
        {
            t = a[p];
            a[p] = a[q];
            a[q] = t;
        }
    }

    t = a[lower];
    a[lower] = a[q];
    a[q] = t;

    return q;
}
 Experiment No:-7
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖

Program:- 


#include <stdio.h>

int main()
{
    int a[5] = {11, 2, 9, 13, 57};
    int b[5] = {25, 17, 1, 90, 3};
    int c[10];

    int i, j, k, temp;

    printf("Merge Sort.\n");

    printf("\nFirst array:\n");
    for (i = 0; i < 5; i++)
        printf("%d\t", a[i]);

    printf("\n\nSecond array:\n");
    for (i = 0; i < 5; i++)
        printf("%d\t", b[i]);

    /* Sort first and second arrays */
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

            if (b[i] > b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    /* Merge the two sorted arrays */
    i = 0;
    j = 0;
    k = 0;

    while (i < 5 && j < 5)
    {
        if (a[i] <= b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    /* Copy remaining elements of first array */
    while (i < 5)
        c[k++] = a[i++];

    /* Copy remaining elements of second array */
    while (j < 5)
        c[k++] = b[j++];

    printf("\n\nArray after sorting:\n");
    for (i = 0; i < 10; i++)
        printf("%d\t", c[i]);

    return 0;
}
 Experiment No:-8
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖

Program:-


#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] , str2[50] , copy[50] , reverse[50] , concat[100] ;
    int len , i ;

    /* Input first string */
    printf("Enter first string: ") ;
    fgets(str1, sizeof(str1), stdin) ;
    str1[strcspn(str1, "\n")] = '\0' ;

    /* Input second string */
    printf("Enter second string: ") ;
    fgets(str2, sizeof(str2), stdin) ;
    str2[strcspn(str2, "\n")] = '\0' ;

    /* a) String Length */
    len = strlen(str1) ;
    printf("\nLength of first string = %d", len) ;

    /* b) String Copy */
    strcpy(copy, str1) ;
    printf("\nCopied string = %s", copy) ;
    
    strrev( str1) ; 

    printf("\nReverse of first string = %s", str1) ;

    /* d) String Concatenation */
    strcpy(concat, str1) ;
    strcat(concat, " ") ;
    strcat(concat, str2) ;
 
    printf("\nConcatenated string = %s", concat) ;
    strlwr(str1) ;
     printf("\n lowercase string = %s", str1) ;
     
     strupr(str2) ;
         printf(" \n uppercase string = %s", str2 ) ;
 
    return 0;
} 

Experiment No:-9

➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖



Program:-
#include <stdio.h>
#include <stdlib.h>

void main()
{
    /* 's' is source FILE pointer */
    /* 't' is target FILE pointer */
    FILE *s, *t;
    char ch;
    s = fopen("file1.txt", "r"); // opens file 'file1.txt' in 'read' mode

    if (s == NULL)
        printf("\nCan't open file1.txt");

    t = fopen("file2.txt", "w"); // opens file 'file2.txt' in 'write' mode

    if (t == NULL)
        printf("\nCan't open file2.txt");

    printf("\nFile1.txt contains :\n\n\n");

    while (1)
    {
        ch = fgetc(s); // gets a character from file1.txt

        if (ch == EOF) // end of file, all characters are processed
            break;
        else
        {
            printf("%c", ch); // display content of file
            fputc(ch, t);     // copy from file1 to file2
        }
    }

    printf("\n\n\nfile1.txt is copied in file2.txt");

    fclose(s);
    fclose(t);
}  Experiment No:-10
➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖➖
Program:-


#include <stdio.h>
int queue[5];
int front, rear, ch, num, i;
void Insert();
void Delete();
void Disp();
void main(){
    // Initially queue is empty
    front = -1;
    rear = -1;
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    do    {
        printf("\nEnter choice: ");
        scanf("%d", &ch);
        switch(ch)       {
            case 1:
                Insert();
                break;
            case 2:
                Delete();
                break;
            case 3:
                Disp();
                break;
            case 4:
                return;
            default:
                printf("Wrong choice");        }
    } while(ch != 4);}
void Insert(){
    // Queue is full
    if ((front == 0 && rear == 4) || (front == rear + 1))    {
        printf("Queue is full");
        return;    }
    printf("Enter a number to insert: ");
    scanf("%d", &num);
    // First element
    if (front == -1)    {
        front = 0;
        rear = 0;
    }    else if (rear == 4)    {
        rear = 0;    }
    else    {
        rear++;    }
    queue[rear] = num;
    printf("Element %d inserted\n", num);
    Disp();}
void Delete(){
    if (front == -1)    {
        printf("Queue is empty");
        return;    }
    printf("Element %d is deleted\n", queue[front]);
    queue[front] = 0;
    // Only one element was present
    if (front == rear)    {
        front = -1;
        rear = -1;    }
    else if (front == 4)    {
        front = 0;    }
    else    {
        front++;    }
    Disp();}
void Disp(){
    if (front == -1)    {
        printf("Queue is empty\n");
        return;    }
    printf("Queue: ");
    i = front;
    while (1)    {
        printf("%d ", queue[i]);
        if (i == rear)
            break;
        if (i == 4)
            i = 0;
        else
            i++;
    }
    printf("\n");
} 


p11  Recursion 
#include <stdio.h>
#include <string.h>
int palindrome(char word[], int start, int end)
{
    if (start >= end)
        return 1;

    if (word[start] != word[end])
        return 0;
    return palindrome(word, start + 1, end - 1);
}
int main()
{
    char word[20];
    printf("\nEnter word: ");
    scanf("%19s", word);
    if (palindrome(word, 0, strlen(word) - 1))
        printf("\nGiven word is palindrome");
    else
        printf("\nGiven word is not palindrome");
    return 0;
}


p11 normal
#include <stdio.h>
#include <string.h>
int main()
{
    char word1[20], word2[20];
    printf("\nEnter word1: ");
    scanf("%19s", word1);
    strcpy(word2, word1);
    strrev(word2);
    printf("\nGiven word = %s", word1);
    printf("\nReverse word = %s", word2);

    if (strcmp(word1, word2) == 0)
        printf("\nGiven word is palindrome");
    else
        printf("\nGiven word is not palindrome");
    return 0;
}


p12

 #include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *start = NULL;
void addAtBeg(void);
void addAtEnd(void);
void addAfter(void);
void Delete(void);
void Disp(void);
void addAtBeg(void)
{
    int num;
    struct node *temp;
    printf("Enter no to add at beg: ");
    scanf("%d", &num);
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }
    temp->data = num;
    temp->prev = NULL;
    temp->next = start;
    if (start != NULL)
        start->prev = temp;
    start = temp;
}
void addAtEnd(void)
{
    int num;
    struct node *temp, *q;
    printf("Enter no to add at end: ");
    scanf("%d", &num);
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }
    temp->data = num;
    temp->next = NULL;
    if (start == NULL)
    {
        temp->prev = NULL;
        start = temp;
    }
    else
    {
        q = start;
        while (q->next != NULL)
            q = q->next;
        q->next = temp;
        temp->prev = q;
    }
    Disp();
}
void addAfter(void)
{
    int num, loc, i;
    struct node *temp, *q;
    if (start == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    printf("Enter no to add: ");
    scanf("%d", &num);
    printf("Enter loc after which u want to add: ");
    scanf("%d", &loc);
    if (loc < 1)
    {
        printf("Invalid location!\n");
        return;
    }
    q = start;
    for (i = 1; i < loc && q != NULL; i++)
        q = q->next;
    if (q == NULL)
    {
        printf("Position does not exist!\n");
        return;
    }
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }
    temp->data = num;
    temp->prev = q;
    temp->next = q->next;
    if (q->next != NULL)
        q->next->prev = temp;
    q->next = temp;
    Disp();
}
void Delete(void)
{
    int num;
    struct node *q;
    if (start == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    printf("Enter no to delete: ");
    scanf("%d", &num);
    q = start;
    while (q != NULL)
    {
        if (q->data == num)
        {
            if (q == start)
                start = q->next;
            else
                q->prev->next = q->next;

            if (q->next != NULL)
                q->next->prev = q->prev;
            free(q);
            Disp();
            return;
        }
        q = q->next;
    }
    printf("Element not found!\n");
}
void Disp(void)
{
    struct node *q;
    printf("List:\n");
    q = start;

    if (q == NULL)
    {
        printf("Empty\n");
    }
    else
    {
        while (q != NULL)
        {
            printf("%d  ", q->data);
            q = q->next;
        }
        printf("\n");
    }
}
int main(void)
{
    int ch;
    do
    {
        
        printf("\n1. Add at beginning");
        printf("\n2. Add at end");
        printf("\n3. Add after");
        printf("\n4. Delete");
        printf("\n5. Display");
        printf("\n6. Exit");
        printf("\nEnter choice: ");
        printf("\n");
        if (scanf("%d", &ch) != 1)
            break;
        switch (ch)
        {
            case 1:
                addAtBeg();
                break;
            case 2:
                addAtEnd();
                break;
            case 3:
                addAfter();
                break;
            case 4:
                Delete();
                break;
            case 5:
                Disp();
                break;
            case 6:
                break;
            default:
                printf("Wrong choice!\n");
        }
    } while (ch != 6);
    while (start != NULL)
    {
        struct node *temp = start;
        start = start->next;
        free(temp);
    }
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
struct Node *insert(struct Node *root, int value)
{
    if (root == NULL)
    {
        return createNode(value);
    }
    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = insert(root->right, value);
    }
    return root;
}
void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
int main()
{
    struct Node *root = NULL;
    int n, value, i;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    printf("Enter the values:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &value);
        root = insert(root, value);
    }
    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");
    return 0;
}
