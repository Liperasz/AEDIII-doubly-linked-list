//
// Created by liperasz on 19/05/2025.
//

#include "exc5.h"
#include <stdio.h>
#include <stdlib.h>

int initialize_noDesc(noDesc *no) {

    *no = (noDesc) malloc(sizeof(nodesc));
    if (!(*no)) {
        return 0;
    }

    (*no)->head = NULL;
    (*no)->tail = NULL;
    return 1;

}

int enqueue(noDesc *no, int data) {

    if (!no || !(*no)) {
        return 0;
    }

    Queue *element = (Queue*) malloc(sizeof(Queue));
    if (!element) {
        return 0;
    }

    element->data = data;
    element->next = NULL;

    if ((*no)->tail != NULL) {
        (*no)->tail->next = element;
        element->previous = (*no)->tail;
        (*no)->tail = element;
        return 1;
    }

    (*no)->head = element;
    (*no)->tail = element;
    element->previous = NULL;

    return 1;

}

int dequeue(noDesc *no, int *data) {

    if (!no || (*no)->head == NULL) {
        return 0;
    }

    Queue *element = (*no)->head;
    *data = element->data;
    if ((*no)->head == (*no)->tail) {
        (*no)->head = NULL;
        (*no)->tail = NULL;
        free(element);
        return 1;
    }

    (*no)->head = (*no)->head->next;
    (*no)->head->previous = NULL;
    free(element);
    return 1;

}

void PrintQueue(noDesc *no) {

    if (no != NULL && (*no)->head != NULL) {

        Queue *element = (*no)->head;
        printf("\n\nQueue:\n");
        while (element != NULL) {

            printf("%d ", element->data);
            printf("\n");
            element = element->next;

        }
        printf("-------------------------");
        printf("\n");
    }
}