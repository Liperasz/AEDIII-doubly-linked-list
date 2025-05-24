//
// Created by liperasz on 19/05/2025.
//

#ifndef EXC5_H
#define EXC5_H

typedef struct queue{

    int data;
    struct queue *next;
    struct queue *previous;

} Queue;

typedef struct {

    Queue *head;
    Queue *tail;

} nodesc;

typedef nodesc *noDesc;

int initialize_noDesc(noDesc *no);
int enqueue(noDesc *no, int data);
int dequeue(noDesc *no, int *data);
void PrintQueue(noDesc *no);

#endif //EXC5_H
