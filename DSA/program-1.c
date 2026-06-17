#include <stdio.h>
#include <stdlib.h> // Added for exit() function

#define SIZE 5 // Capitalised macro names are a best practice

void create();
void traverse();
void delet();
void search();

int a[SIZE], i, key, found = 0;

int main() // Changed from void main() to int main()
{
    int ch;
    
    // clrscr() removed as it is not supported in modern compilers
    
    while(1)
    {
        printf("\nArray Operations...");
        printf("\n1.Create");
        printf("\n2.Delete");
        printf("\n3.Search");
        printf("\n4.Traverse");
        printf("\n5.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        
        switch(ch)
        {
            case 1: create(); break;
            case 2: delet(); break;
            case 3: search(); break;
            case 4: traverse(); break;
            case 5: exit(0); break;
            default: printf("\nWrong choice\n");
        }
    }
    return 0; // Required for int main()
}

void create()
{
    for(i = 0; i < SIZE; i++)
    {
        printf("\nEnter value for a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void traverse()
{
    for(i = 0; i < SIZE; i++)
    {
        printf("\na[%d] is %d", i, a[i]);
    }
    printf("\n");
}

void delet()
{
    int pos;
    printf("\nEnter position (1 to %d): ", SIZE);
    scanf("%d", &pos);
    
    if(pos < 1 || pos > SIZE) {
        printf("\nInvalid position!");
        return;
    }

    for(i = pos - 1; i < SIZE - 1; i++) // Fixed out-of-bounds boundary
    {
        a[i] = a[i+1];
    }
    
    // Reset the last element since the array shifted left
    a[SIZE-1] = 0; 

    for(i = 0; i < SIZE - 1; i++)
    {
        printf("\na[%d]: %d", i, a[i]);
    }
    printf("\n");
}

void search()
{
    found = 0; // Reset found flag to 0 for subsequent searches
    printf("\nEnter key: ");
    scanf("%d", &key);
    for(i = 0; i < SIZE; i++)
    {
        if(key == a[i])
        {
            printf("\nKey %d found at position %d\n", key, i + 1);
            found = 1;
            break;
        }
    }
    if(found == 0)
        printf("\nKey not found\n");
}
