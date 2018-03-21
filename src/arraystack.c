//
// Created by Siddu Dubey on 3/20/18.
//


#include <stdio.h>
#include "ds.h"

void push(tStack* stack, int num)
{
    if( stack )
    {
        if(stack->top >= (stack->size - 1))
        {
            printf("\n Can't push, stack full!");
        }
        else
        {
            stack->array[++(stack->top)] = num;
            printf("\n  pushed %d, now top is %d", num, stack->top);
        }
    }
}

int isStackEmpty( tStack* stack )
{
    return (stack && stack->top < 0) ? 1 : 0;
}

int pop( tStack* stack )
{
    int ret = 0;
    if( stack ) {
        if ( isStackEmpty( stack ) )
        {
            printf("\n Can't pop, stack empty!");
        }
        else
        {
            ret = stack->array[stack->top--];
            printf("\n Popped %d, now top is %d", ret, stack->top);
        }
    }
    return ret;
}

void createStacksFromArray( int* arr, int lenStack1, int lenStack2 )
{
    /* its caller's responsibility to ensure that lenStack1+lenStack2
     * doesn't exceed lenght of array
     * */

    if( arr )
    {
        tStack stack1 = {-1, arr, lenStack1};
        tStack stack2 = {-1, arr + lenStack1, lenStack2};

        printf("\n stacks created.\n\tstack-1 capacity: %d"
              "\tstack-2 capacity: %d", lenStack1, lenStack2);

        int in = 0;
        int num = 0;

        while( 5 != in )
        {
            printf("\n\n  1. Push to Stack-1"
                   "\n  2. Push to Stack-2"
                   "\n  3. Pop Stack-1"
                   "\n  4. Pop Stack-2"
                   "\n  Your choice (5 to exit):  ");
            scanf("%d", &in);

            switch( in )
            {
                case 1:
                case 2:
                    printf( "\n  Enter number:  ");
                    scanf( "%d", &num );
                    push( (1 == in) ? &stack1 : &stack2, num );
                    break;
                case 3:
                    pop(&stack1);
                    break;
                case 4:
                    pop(&stack2);
                    break;
                case 5:
                    break;
                default:
                    printf("\n  Invalid choice.");
            }
        }
    }
}
