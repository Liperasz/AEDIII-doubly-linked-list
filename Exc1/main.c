//
// Created by liperasz on 17/05/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include "exc1.h"

int main() {

    Student a[4] = {{2,"Andre",9.5,7.8,8.5},
                         {4,"Ricardo",7.5,8.7,6.8},
                         {1,"Bianca",9.7,6.7,8.4},
                         {3,"Ana",5.7,6.1,7.4}};
    List* li = createList();

    printf("Tamanho: %d\n",size__List(li));
    print_List(li);

    int i;
    for(i=0; i < 4; i++) {
        insert_end_List(li,a[i]);
    }

    printf("\n\n\n\n Tamanho: %d\n",size__List(li));
    print_List(li);

    remove_by_id_List(li, 1);
    printf("\n\n\n\n Tamanho: %d\n",size__List(li));
    print_List(li);

    remove_by_id_List(li,3);
    printf("\n\n\n\n Tamanho: %d\n",size__List(li));
    print_List(li);

    free_List(li);

    return 0;
}