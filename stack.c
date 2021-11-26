#include "stdio.h"
#define NMAX 100
//https://prog-cpp.ru/data-stack/
struct stack {
  float elem[NMAX];
  int top;
};

void init(struct stack *stk) {
  stk->top = 0;
}

void push(struct stack *stk, float f) {
  if(stk->top < NMAX) {
    stk->elem[stk->top] = f;
    stk->top++;
  } else
    printf("Стек полон, количество элементов: %d !\n", stk->top);
}

float pop(struct stack *stk) {
  float elem;
  if((stk->top) > 0)
  {
    stk->top--;
    elem = stk->elem[stk->top];
    return elem;
  }
  else
  {
    printf("Стек пуст!\n");
    return 0;
  }
}

int main()
{
    return 0;
}