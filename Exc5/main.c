//
// Created by liperasz on 19/05/2025.
//
#include "exc5.h"
#include <stdio.h>
#include <stdlib.h>

int main () {

    noDesc *no = malloc (sizeof(noDesc));
    initialize_noDesc(no);

    enqueue(no, 1);
    enqueue(no, 2);
    enqueue(no, 3);
    enqueue(no, 4);
    enqueue(no, 5);
    enqueue(no, 6);
    enqueue(no, 7);
    enqueue(no, 8);
    enqueue(no, 9);
    enqueue(no, 10);

    PrintQueue(no);

    int dequeued = dequeue(no, &dequeued);
    printf("Dequeued number: %d", dequeued);

    PrintQueue(no);

    return 0;
}