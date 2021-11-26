#include "stdio.h"
#define QMAX 100
//подробности https://prog-cpp.ru/data-queue/

struct queue{
    int qu[QMAX];
    int rear, frnt; // rear - позиция последнего члена очереди , frnt - позиция первого члена очереди

};

void init(struct queue *q)
{
    q->rear = 0;
    q->frnt = 1;
};

void insert(struct queue *q, int x) {
  if(q->rear < QMAX-1) {
    q->rear++;
    q->qu[q->rear]=x;
  }
  else
    printf("Очередь полна!\n");
  return;
}

int isempty(struct queue *q) {
  if(q->rear < q->frnt)    return 1; //очередь пуста, если позиция последнего члена меньше позиции первого 
  else  return 0; //поэтому в самом начале у нас rear = 0, а frnt = 1
}

void print(struct queue *q) { // вывод элементов очереди
  int h;
  if(isempty(q)==1) {
    printf("Очередь пуста!\n");
    return;
  }
  for(h = q->frnt; h<= q->rear; h++)
    printf("%d ",q->qu[h]);
  return;
}
 
int remove(struct queue *q) {
  int x;
  if(isempty(q)==1) {
    printf("Очередь пуста!\n");
    return(0);
  }
  x = q->qu[q->frnt];
  q->frnt++; //удаляем первый элемент очереди, смещая в сторону старших
  return x;
}

int main()
{
    return 0;
}