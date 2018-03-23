#include <stdio.h>
#include <stdlib.h>


 int main()
  {
    struct stack *stk;
    int i,n;
    float elem;
    stk = (struct stack*)malloc(sizeof(struct stack));
    int(stk);
    printf("Enter the number of items in the stack: ");
     scanf("%d", &n);
    for(i=0;i<n;i++) 
    {
      printf("Enter an item %d:", i);
      scanf("%f", &elem);
      push(stk,elem);
    }

    printf("On the stack %d elements\n", gettop(stk));
    printf("\n");
    stkPrint(stk);
       printf("Top element %f\n",stkTop(stk));
    do 
     {
       printf("Extract an item %f, ", pop(stk));
       printf("The stack left %d elements\n", gettop(stk));
     } 
   while((stk)==0);
   getchar(); getchar();
   return 0;
}
