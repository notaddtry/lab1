#include <stdio.h>
#include <stdlib.h>

int *stack; /*Create new stack*/
int tp = 0;


int pop(void){  /*Remove an element from the top of our stack and put new*/
    if (tp > 0){
        return stack[--sp];
    }
    else {
        printf("-1");
        return 0;
    }
}


void push(int a){   /*Put the element on top of the stack*/
    stack[tp++] = a;
}


int main(int argc, char *argv[])
{
    int j, i;
    j = argc;

    stack =(int *) malloc ( sizeof(int) * j );  /*Selecting memory*/
    if ( stack == NULL ) exit (1);

    for( i = 1; i < j; i++ )
    {
        switch ( (char) argv[i][0] ){   /*Verifying type of operation*/
        case '\n':
            break;
        case '=':
            printf("\nResult = %d\n", pop());
            break;
        case '+':
            push(pop() + pop());
            break;
        case '-':
            push(-pop() + pop());
            break;
        case 'x':
            push(pop() * pop());
            break;
        case '/':
            push(pop() / pop());
            break;
        default:
            push( atoi(argv[i]));
            break;
        }
    }
    return 0;
}
