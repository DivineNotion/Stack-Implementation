#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "stacks.h"


int main()
{
    STACK* stack = NULL;
    int choice, stack_size, data;

    while (1)
    {
        printf("1.Create Stack\n");
        printf("2.Display\n");
        printf("3.Count\n");
        printf("4.Search\n");
        printf("5.Pop Element (from top)\n");
        printf("6.Push Element\n");
        printf("7.Destroy Stack\n");
        printf("8.Quit\n\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the size of your stack: ");
            scanf("%d", &stack_size);
            stack = create_stack(stack_size);
            printf("\n");
            break;
        case 2:
            display(stack);
            break;
        case 3:
            count(stack);
            break;
        case 4:
            printf("Enter the element to be searched : ");
            scanf("%d", &data);
            search(stack, data);
            break;
        case 5:
            pop(stack);
            break;
        case 6:
            printf("Enter the element to be inserted : ");
            scanf("%d", &data);
            push(stack, data);
            break;
        case 7:
            destroy_stack(stack);
            break;
        case 8:
            exit(1);
        default:
            printf("Wrong choice\n");
        }/*End of switch */
    }/*End of while */

    return 0;
}/*End of main()*/
