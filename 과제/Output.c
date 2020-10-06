#include "Header.h"

void Print_Result(int *count) {
	int i;
	for (i = 0; i < MAX_ARR_SIZE; i++) {
		printf("%d ", count[i]);
	}
	printf("\n");
	free(count);
}
