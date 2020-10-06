#include "Header.h"

void Count_Num(int N, int *count) {
	int page;
	for (page = 1; page <= N; page++) {
		int current = page;
		while (current / 10 > 0) {
			count[current % 10]++;
			current /= 10;
		}
		count[current]++;
	}
}
