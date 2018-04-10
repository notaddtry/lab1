 #include <stdio.h>
 int main()
 {
     int stack[1000];  
     int sp =0;
     while ( !feof(stdin) ) {
         int c = getchar();
         switch (c) {
             case  ' ':
             case '\n':
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
                 ungetc (c, stdin);
               
         }
     }
     printf("Result = %d\n",stack[sp-1]);
     return 0;
 }
