#include <stdlib.h>
#include <stdio.h>

#include "ADTPriorityQueue.h"
#include "ADTSet.h"

int compare_ints (Pointer a, Pointer b){
    return *(int*) a - *(int*) b;
}

int main() {
    PriorityQueue queue = pqueue_create(compare_ints, free, NULL);
  
    for (int i = 0; i < 20; i++){
        int* p1 = malloc(sizeof(int));
        *p1 = rand();
        pqueue_insert(queue, p1);  
    }
     
    for (int i = 0; i < 20; i++){
        printf("%d ", *(int*) pqueue_max(queue));
        pqueue_remove_max(queue);
    }
    printf("\n");
    pqueue_destroy(queue);

    Set set = set_create(compare_ints, free);

    for (int i = 0; i < 20; i++){
        int* p2 = malloc(sizeof(int));
        *p2 = rand();
        set_insert(set, p2);
    }

    for (SetNode node = set_first(set); node != SET_EOF; node = set_next(set, node)){
        int* num = set_node_value(set, node);
        printf("%d ", *num);
    }
    printf("\n");
    set_destroy(set);

    return 0;
}
