#include <stdio.h>

int main() {
	int c[3][2][2] = {{{2, 3}, {7, 9}}, {{3, 4}, {6, 1}}, {{0, 8}, {11, 13}}};
	int(*p)[2][2]  = c;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				// printf("c[%d][%d][%d] = %d\n", i, j, k, (*(*(*(c + i) + j) + k)));
				printf("c[%d][%d][%d] = %d\n", i, j, k, *(*(*(p+i)+j)+k));
			}
    
			// printf("c[%d][%d][%d] = %d\n",i,j,k,c[i][j][k]);
		}
	}

	return 0;
}