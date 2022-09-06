//
// Created by SkYTop on 23/08/2022.
//
#include <stdio.h>
#include "stack1.h"
void initializ_Stack(Stack *ps){
    ps->top=0;
}
void push (StackEntry e,Stack *ps){
    ps->entry[ps->top]=e;
    ps->top++;
}
int Stack_full(Stack *ps){
    if(ps->top==MAXSTACK) return 1;
    else return 0;
}
void Pop(StackEntry *pe, Stack *ps){
    ps->top--;
    *pe= ps->entry[ps->top];
    printf("the element : %d\n" ,*pe);
}
int StackEmpty(Stack *ps){
    if (ps->top==0) return 1;
    else return 0;
}
void StackTop(StackEntry *pe, Stack *ps){
    ps->top-1;
    *pe= ps->entry[ps->top];
    printf("StackTop : %d",*ps);
}
int StackSize(Stack *ps){
    return ps->top;
    printf("StackSize : %d",*ps);
}
void Display_Stack(Stack *ps, void(*pf)(StackEntry)){
    for(int i=ps->top; i>0; i--){
        (*pf)(ps->entry[i-1]);

    }
}