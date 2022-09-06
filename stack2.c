//
// Created by SkYTop on 24/08/2022.
//
#include <stdio.h>
#include "stack2.h"
#include <stdlib.h>
void initializ_Stack(Stack *ps){
    ps->top=NULL;
}
void push (StackEntry e,Stack *ps){
    StackNode *pn= (StackNode*)malloc(sizeof (StackNode));
    pn->entry=e;
    pn->next=ps->top;
    ps->top=pn;
}
void Pop(StackEntry *pe, Stack *ps){
    StackNode *pn;
    *pe=ps->top->entry;
    pn=ps->top;
    ps->top=ps->top->next;
    free(pn);
    printf("the element : %d\n" ,*pe);
}
void StackTop(StackEntry *pe, Stack *ps){
    *pe=ps->top->entry;
    printf("the element : %d\n" ,*pe);
}
void Display_Stack(Stack *ps, void(*pf)(StackEntry)){
   StackNode *pn = ps->top;
    while (pn){
        (*pf)(pn->entry);
        pn=pn->next;

    }
}