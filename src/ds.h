//
// Created by Siddu Dubey on 3/20/18.
//

#ifndef DS_DS_H
#define DS_DS_H

typedef struct sStack
{
    int top;
    /* to provide flexibility of max array size
     * lets keep array as integer pointer */
    int *array;
    int size;
} tStack;


void push(tStack* stack, int num);
int isStackEmpty( tStack* stack );
int pop( tStack* stack );
void createStacksFromArray( int* arr, int lenStack1, int lenStack2 );

#endif DS_DS_H
