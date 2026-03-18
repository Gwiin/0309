#include "stack3.h"

void initStack(Stack *ps, int size)
{
    ps->pArr = (int *)malloc(sizeof(int) * size);
    assert(ps->pArr != NULL);
    ps->tos = ps->pArr;
    ps->size = size; 
}

void push(Stack *ps, int data)
{
    assert(ps->tos != ps->pArr + ps->size); //stack overflow 방지
    *(ps->tos++) = data;
}

int pop(Stack *ps)
{   assert(ps->tos != ps->pArr); //stack underflow 방지
    return *(--ps->tos);
}

void cleanupStack(Stack *ps)
{
    free(ps->pArr);

}

int size(Stack *ps)
{
    return ps->size;

}