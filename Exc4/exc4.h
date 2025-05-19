//
// Created by liperasz on 19/05/2025.
//

#ifndef EXC4_H
#define EXC4_H

typedef struct {

    int id;
    char name[30];
    float g1, g2, g3;

} Student;

typedef struct element {

    Student data;
    struct element *previous;
    struct element *next;

} Element;

typedef Element * List;

List* createList();
void free_List(List* list);
int consult__by_position_List(List* list, int position, Student* student);
int consult_by_id_List(List* list, int id, Student* student);
int insert_end_List(List* list, Student student);
int insert_begin_List(List* list, Student student);
int remove_end_List(List* list);
int remove_begin_List(List* list);
int size__List(List* list);
int full_list(List* list);
int empty_List(List* list);
void print_List(List* list);

#endif //EXC4_H
/*
 * Todos estão na forma de lista circular, onde o próximo do ultimo elemento é o primeiro
 */