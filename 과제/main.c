#include "Header.h"

int main() {
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int N;
		int *count = (int*)calloc(MAX_ARR_SIZE, sizeof(int));
		scanf("%d", &N);

		Count_Num(N, count);
		Print_Result(count);
	}
	return 0;
}
