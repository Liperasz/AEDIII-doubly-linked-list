//
// Created by liperasz on 19/05/2025.
//
#include "exc2.h"
#include <stdio.h>
#include <stdlib.h>

int main() {

    Student a[4] = {{2,"Andre",9.5,7.8,8.5},
                         {4,"Ricardo",7.5,8.7,6.8},
                         {1,"Bianca",9.7,6.7,8.4},
                         {3,"Ana",5.7,6.1,7.4}};

    List* list = createList();

    printf("Tamanho: %d\n",size__List(list));
    print_List(list);

    for(int i = 0; i < 4; i++) {
        Insert_Order_List(list,a[i]);
    }

    printf("\n\n\n\n Tamanho: %d\n",size__List(list));
    print_List(list);

    free_List(list);

    return 0;
}