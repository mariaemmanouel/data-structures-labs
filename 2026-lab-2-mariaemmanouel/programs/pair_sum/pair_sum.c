#include <stdlib.h>

#include "pair_sum.h"


Pair pair_sum(int target, Vector numbers) {
    for (VectorNode node1 = vector_first(numbers); node1 != VECTOR_EOF; node1 = vector_next(numbers, node1)){
		for (VectorNode node2 = vector_next(numbers, node1); node2 != VECTOR_EOF; node2 = vector_next(numbers, node2)){
			int* a = vector_node_value(numbers, node1);
			int* b = vector_node_value(numbers, node2);
			if (*a + *b == target){
				Pair p = malloc(sizeof(struct pair));
				p->first = *a;
				p->second = *b;
				return p;
			}
		}
	}

	return NULL;
}