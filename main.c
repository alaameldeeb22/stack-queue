#include <stdio.h>
#include <stdlib.h>
#include "stack1.h"
void Display(StackEntry e){
    printf("element is: %d\n", e);
}
int main()
{
    int n;
    StackEntry e;
    Stack s;
    initializ_Stack(&s);
    while(1){
        printf(" Enter what you need\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.StackTop\n 5.StackSize\n 6. Exit\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            {
                printf("Enter the element: ");
                scanf("%d",&e);
                push(e,&s);
                break;
            }
            case 2:
            {
                Pop(&e, &s);
                break;
            }
            case 3:
            {
                Display_Stack(&s, &Display);
                break;
            }
            case 4:
            {
                StackTop(&e, &s);
                break;
            }
            case 5:
            {
                StackSize(&s);

                break;
            }
            case 6:
            {
                return 0;
                break;
            }
        }
    }

    return 0;
}