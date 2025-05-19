//
// Created by liperasz on 19/05/2025.
//

#include "exc4.h"
#include <stdio.h>
#include <stdlib.h>

List* createList() {

    List* list = malloc(sizeof(List));
    if (list != NULL) {
        *list = NULL;
    }
    return list;

}

void free_List(List* list) {

    if (list != NULL) {

        Element *element = *list;
        do {
            Element *aux = element->next;
            free(element);
            element = aux;
        } while (element != *list);
        free(list);
    }
}

int consult__by_position_List(List* list, int position, Student* student) {

    if (list == NULL || *list == NULL) {
        return 0;
    }

    Element *element = *list;

    int count = 1;

    if (position == count) {
        *student = element->data;
        return 1;
    }

    do {
        element = element->next;
        count++;
    } while (element != *list && count != position);

    if (element == *list && count != position) {
        return 0;
    }

    *student = element->data;
    return 1;
}

int consult_by_id_List(List* list, int id, Student* student) {

    if (list == NULL || *list == NULL) {
        return 0;
    }

    Element *element = *list;

    if (element->data.id == id) {
        *student = element->data;
        return 1;
    }

    do {
        element = element->next;
    } while (element != *list && element->data.id != id);

    if (element == *list) {
        return 0;
    }

    *student = element->data;
    return 1;

}

int insert_end_List(List* list, Student student) {

    if (list == NULL) {
        return 0;
    }

    Element *element = malloc(sizeof(Element));
    if (element == NULL) {
        return 0;
    }

    element->data = student;

    if (*list == NULL) {
        *list = element;
        element->next = element;
        element->previous = element;
        return 1;
    }

    (*list)->previous->next = element;
    element->previous = (*list)->previous;
    element->next = *list;
    (*list)->previous = element;


    return 1;

}

int insert_begin_List(List* list, Student student) {

    if (list == NULL) {
        return 0;
    }

    Element *element = malloc(sizeof(Element));
    if (element == NULL) {
        return 0;
    }

    element->data = student;

    if (*list == NULL) {
        *list = element;
        element->next = element;
        element->previous = element;
        return 1;
    }

    (*list)->previous->next = element;
    element->previous = (*list)->previous;
    element->next = *list;
    (*list)->previous = element;
    *list = element;
    return 1;

}

int remove_end_List(List* list) {

    if (list == NULL || (*list) == NULL) {
        return 0;
    }

    Element *element = (*list)->previous;
    if (element == NULL) {
        return 0;
    }
    if (element == *list) {
        *list = NULL;
        free(element);
        return 1;
    }

    (*list)->previous = element->previous;
    element->previous->next = *list;
    free(element);
    return 1;

}

int remove_begin_List(List* list) {

    if (list == NULL || (*list) == NULL) {
        return 0;
    }

    Element *element = *list;

    if (element == (*list)->next) {
        *list = NULL;
        free(element);
        return 1;
    }

    element->previous->next = element->next;
    element->next->previous = element->previous;
    *list = element->next;
    free(element);
    return 1;

}

int size__List(List* list) {

    if (list == NULL || (*list) == NULL) {
        return 0;
    }

    Element *element = *list;

    int count = 0;

    do {
        count++;
        element = element->next;
    } while (element != *list);

    return count;
}

int full_list(List* list) {

    return 0;

}

int empty_List(List* list) {

    if (list == NULL || *list == NULL) {
        return 1;
    }

    return 0;

}

void print_List(List* list) {

    if (list != NULL && *list != NULL) {
        Element *element = *list;
        do {
            printf("-----------------------\n");
            printf("ID: %d\n", element->data.id);
            printf("Name: %s\n", element->data.name);
            printf("Grades: %.1f, %.1f, %.1f\n", element->data.g1, element->data.g2, element->data.g3);
            element = element->next;
        } while (element != *list);
        printf("-----------------------\n");

    }

}