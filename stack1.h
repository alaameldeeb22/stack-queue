//
// Created by SkYTop on 23/08/2022.
//

#ifndef STACK1_H_INCLUDED
#define STACK1_H_INCLUDED
#define MAXSTACK 100
#define StackEntry int
typedef struct STACK {
    int top ;
    StackEntry entry[MAXSTACK];
}Stack;
void initializ_Stack(Stack *ps);
void push (StackEntry e,Stack *ps);
int Stack_full(Stack *ps);
void Pop(StackEntry *pe, Stack *ps);
int StackEmpty(Stack *ps);
void StackTop(StackEntry *pe, Stack *ps);
int StackSize(Stack *ps);
void Display_Stack(Stack *ps, void(*pf)(StackEntry));
#endif // STACK1_H_INCLUDED