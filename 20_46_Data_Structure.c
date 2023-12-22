#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

int numberOfElement();
int searchValue();
void inputArrayElements(int n,int *array);
void displayArray(int array[], int n);
void linearSearch(int array[], int n, int searchValue);
void binarySearch(int array[], int n, int searchValue);
void bubbleSort(int array[], int n);
void insertionSort(int array[],int n);
long long int factorial(int n);
long long int fibonacchi(int n);
void towerOfHanoi(int n, char A, char B, char C);


int main()
{
    int optionMenu;

    printf("\n\n\n");
    printf("           ######################################################\n");
    printf("           #      ***  WELCOME TO DATA STRUCTURE LAB  ***       #\n");
    printf("           #           Mentor ---                               #\n");
    printf("           #           MD.MAHMUDUL HASAN                        #\n");
    printf("           #           Presented By ---                         #\n");
    printf("           #           FAHIM-AL-JUBAER                          #\n");
    printf("           #           Id:20-0-52-801-046                       #\n");
    printf("           ######################################################\n");
    printf("\n\n\n");

    while(1)
    {
        printf("\n");
        printf("              Please select the Operation : \n");
        printf("              ----------------------------\n\n\n");
        printf("                0.Exit\n");
        printf("                1.Linear Search\n");
        printf("                2.Binary Search\n");
        printf("                3.Bubble Sort\n");
        printf("                4.Insertion Sort\n");
        printf("                5.Factorial of a number\n");
        printf("                6.Fibonacci Series\n");
        printf("                7.Tower of HANOI\n");
        printf("                8.Linked List Traversal\n");
        printf("                9.Stack\n");
        printf("               10.Queue\n");



        scanf("%d",&optionMenu);
        printf("\n\n");

        //printf("\tYou have select options %d ",optionMenu);
        printf("\n\n");

        switch(optionMenu)
        {
        case 0:
        {
            printf("\n\nYou are about to Quit\n\n");
            return 0;
            break;
        }

        case 1:
        {
            printf("! You have selected LINEAR SEARCH operation !\n");
            int n = numberOfElement();
            int array[n];
            inputArrayElements(n, array);
            int key = searchValue();
            linearSearch(array, n, key);
            break;
        }
        case 2 :
        {
            printf("! You have selected BINARY SEARCH operation !\n");
            int n = numberOfElement();
            int array[n];
            printf("Elements must be entered in any sorted(Ascending or Descending) order.\n");
            inputArrayElements(n, array);
            int key = searchValue();
            binarySearch(array, n, key);
            break;
        }
        case 3:
        {
            printf("! You have selected BUBBLE SORT operation !\n");
            int n = numberOfElement();
            int array[n];
            inputArrayElements(n, array);
            bubbleSort(array, n);
            break;
        }
        case 4:
        {
            printf("! You have selected INSERTION SORT operation !\n");
            int n = numberOfElement();
            int array[n];
            inputArrayElements(n, array);
            insertionSort(array, n);
            break;
        }
        case 5:
        {
            printf("! You have selected Factorial of a Number operation !\n");
            int n = numberOfElement();
            long long Factorial = factorial(n);

            printf("\nThe factorial of %d is = %lld\n",n,Factorial);
            break;
        }
        case 6:
        {
            printf("! You have selected Fibonacci series operation !\n");
            int n = numberOfElement();
            printf("\n Fibonacci series up to %d terms: ", n);
            for(int i=0; i<n; i++)
            {
                printf("%llu ", fibonacchi(i));
            }

            break;

            case 7:
            {
                printf("! You have selected Tower of HANOI operation !\n");
                int n = numberOfElement();
                int numbersOfMove = pow(2, n) - 1;
                printf("\nPlease perform the following %d disc movements: \n",numbersOfMove);
                towerOfHanoi(n, 'A', 'B', 'C');
                break;
            }
            case 8:
            {



// Creating a node
                struct node
                {
                    int value;
                    struct node *next;
                };

// print the linked list value
                void printLinkedlist(struct node *p)
                {
                    while (p != NULL)
                    {
                        printf("%d ", p->value);
                        p = p->next;
                    }
                }


                // Initialize nodes
                struct node *head;
                struct node *one = NULL;
                struct node *two = NULL;
                struct node *three = NULL;

                // Allocate memory
                one = malloc(sizeof(struct node));
                two = malloc(sizeof(struct node));
                three = malloc(sizeof(struct node));

                // Assign value values
                one->value = 100;
                two->value = 101;
                three->value = 102;

                // Connect nodes
                one->next = two;
                two->next = three;
                three->next = NULL;

                // printing node-value
                head = one;
                printLinkedlist(head);

                break;
            }
            case 9:
            {

#define MAX 10

                int count = 0;

                // Creating a stack
                struct stack
                {
                    int items[MAX];
                    int top;
                };
                typedef struct stack st;

                void createEmptyStack(st *s)
                {
                    s->top = -1;
                }

                // Check if the stack is full
                int isfull(st *s)
                {
                    if (s->top == MAX - 1)
                        return 1;
                    else
                        return 0;
                }

                // Check if the stack is empty
                int isempty(st *s)
                {
                    if (s->top == -1)
                        return 1;
                    else
                        return 0;
                }

                // Add elements into stack
                void push(st *s, int newitem)
                {
                    if (isfull(s))
                    {
                        printf("STACK FULL");
                    }
                    else
                    {
                        s->top++;
                        s->items[s->top] = newitem;
                    }
                    count++;
                }

                // Remove element from stack
                void pop(st *s)
                {
                    if (isempty(s))
                    {
                        printf("\n STACK EMPTY \n");
                    }
                    else
                    {
                        printf("Item popped= %d", s->items[s->top]);
                        s->top--;
                    }
                    count--;
                    printf("\n");
                }

                // Print elements of stack
                void printStack(st *s)
                {
                    printf("Stack: ");
                    for (int i = 0; i < count; i++)
                    {
                        printf("%d ", s->items[i]);
                    }
                    printf("\n");
                }

                // Driver code

                int ch;
                st *s = (st *)malloc(sizeof(st));

                createEmptyStack(s);

                push(s, 1);
                push(s, 2);
                push(s, 3);
                push(s, 4);

                printStack(s);

                pop(s);

                printf("\nAfter popping out\n");
                printStack(s);

                break;
            }

            default :
                printf("!! Select a valid option !!");
                break;
            }
            printf("\n\n");
        }

        return 0;
    }
}

int numberOfElement()
{
    int n;
    printf("Please enter no. of elements : ");
    scanf("%d",&n);
    return n;
}

int searchValue()
{
    int searchValue;
    printf("Enter the value,you search for : ");
    scanf("%d", &searchValue);
    return searchValue;
}

void inputArrayElements(int n,int *array)
{
    printf("Enter the numbers: \n");
    for(int i=0; i<n; i++)
    {
        printf("Array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}

void displayArray(int array[], int n)
{
    printf("The Entered Array is : ");
    printf("[ ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("]");
}

void linearSearch(int array[], int n, int searchValue)
{
    int count=0;
    for (int i=0; i<n; i++)
    {
        if(array[i] == searchValue)
        {
            printf("Element found in the location %d\n",i+1);
            count++;

        }
    }
    if(count==0)
    {
        printf("Not Found");
    }
}

void binarySearch(int array[], int n, int searchValue)
{
    int low,mid,high;
    low = 0;
    high= n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if (array[mid]==searchValue)
        {
            //return mid;
            break;
        }
        else if (array[mid]>searchValue)
        {
            high = mid-1;
        }
        else
        {
            low = mid +1;
        }
    }
    if (low>high)
    {
        printf("Not found");
    }
    else
    {
        printf("%d found in location %d",searchValue,mid+1);
    }
}

void bubbleSort(int array[], int n)
{
    int temp;
    for (int k=0; k<n; k++)
    {
        int flag = 0;
        printf("\nPass %d is : \t",k);
        for(int j=0; j<n; j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
            printf("%d\t\t",array[j]);
            flag=1;
        }
        //printf("\n\n");
        if(flag==0)
            break;
    }

    printf("\nThe numbers after sorting: \n");
    displayArray(array, n);
    printf("\n\n");
}

void insertionSort(int array[],int n)
{
    int temp, key;

    printf("\nGiven array: ");
    displayArray(array, n);

    printf("\n\nInsertion Sorting steps: \n");

    for(int i=1; i<n; i++)
    {

        key = array[i];

        // Using coreman book's insertion sort algorithm
        /*
        int j = i-1;
        while(j>=0 && arr[j]>key) {

            arr[j+1] = arr[j];
            j = j-1;
        }

        arr[j+1] = key;
        */

        //Using my own algorithm
        for(int j=i-1, k=i; j>=0 && array[j]>key; j--, k--)
        {
            //Swap elements
            temp = array[k];
            array[k] = array[j];
            array[j] = temp;
        }

        printf("Step %d: array after i=%d outer loop iteration: ", i, i);
        displayArray(array, n);
        printf("\n");

    }

    printf("\nFinal array after insertion sorting: ");
    displayArray(array, n);
}


long long int factorial(int n)
{

    if( n == 0 )
    {

        return 1;

    }
    else
    {

        return n * factorial(n-1);
    }
}


long long int fibonacchi(int n)
{

    if( n <= 1 )
    {
        return n;
    }
    else
    {
        return fibonacchi(n-1)+fibonacchi(n-2);
    }

}


void towerOfHanoi(int n, char A, char B, char C)
{

    if(n>0)
    {

        towerOfHanoi(n-1, A, C, B);
        printf("Move disc from %c to %c\n", A, C);
        towerOfHanoi(n-1, B, A, C);

    }
}
