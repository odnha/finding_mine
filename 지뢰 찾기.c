#include<stdio.h>
#include<stdlib.h>




int main()
{
	int row, col;
	int i, j;

	printf("행 입력 : "); scanf("%d", &row);
	printf("열 입력 : "); scanf("%d", &col);

	char **array = malloc(sizeof(char *) *row);

	for (int i = 0; i < row; i++)
	{
		array[i] = malloc(sizeof(int)*(col + 1));
	}

	for (int i = 0; i < row; i++) scanf("%s", array[i]);

	printf("\n");
	for (int i = 0; i < row; i++) 	puts(array[i]);
	printf("\n");

	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%c, (%d%d) ", array[i][j], i, j);
		}
		printf("\n");
	}


	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (array[i][j] == '*') {

				int l, k;
				for (l = i - 1; l <= i + 1; l++) {
					for (k = j - 1; k <= j + 1; k++) {
						if (l >= 0 && l < row&&k >= 0 && k < col&&array[l][k] != '*')array[l][k] += 1;
					}
				}

			}
		}
	}

	for (int i = 0; i < row; i++) {
		puts(array[i]);
	}


}
