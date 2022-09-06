//
// Created by SkYTop on 24/08/2022.
//

#ifndef UNTITLED6_STACK2_H
#define StackEntry int
#define UNTITLED6_STACK2_H
typedef struct stacknode{
    StackEntry entry;
    struct stacknode *next;
}StackNode;

typedef struct stack{
    StackNode *top;
}Stack;
void initializ_Stack(Stack *ps);
void push (StackEntry e,Stack *ps);
int Stack_full(Stack *ps);
void Pop(StackEntry *pe, Stack *ps);
int StackEmpty(Stack *ps);
void StackTop(StackEntry *pe, Stack *ps);
int StackSize(Stack *ps);
void Display_Stack(Stack *ps, void(*pf)(StackEntry));


#endif //UNTITLED6_STACK2_H
