#include <stdio.h>
#include <stdlib.h> 
 int atoi (const char *str);
 int main()
 {
     int stack[1000];
     char buf[1000];
     int sp =0;
    printf("Input numbers u want to calculate\n");
     while (!feof(stdin)) {
        if(scanf ("%s", buf) != 1 )
            break;
        switch(buf[0])
        {
            case '\0':
                break;
            case '=':
                 printf("Result = %d\n", stack[sp - 1]);  sp--;
                 break;
             case '+':
                stack[sp-2] = stack[sp-2] + stack[sp-1];  sp--;
                break;
             case '-':
                stack[sp-2] = stack[sp-2] - stack[sp-1];  sp--;
                break;
             case '*':
                stack[sp-2] = stack[sp-1] * stack[sp-2];  sp--;
                break;
             case '/':
               stack[sp-2] = stack[sp-2] / stack[sp-1];   sp--;
                break;
             default:
                 stack[sp++] = atoi(buf);
        }
    }
     printf("Result is = %d\n",stack[sp-1]);
     return 0;
 }
