#include <cstdio>
#include <math.h>

int main()
{
    int col, row;
	char c;
    scanf("%d %c", &col, &c);
    if (col % 2 == 1)
    	row = round(col / 2) + 1;
    else 
    	row = col / 2;
    	
	int i, j;
	for (i = 1; i <= row; i++) {
		for (j = 1; j <= col; j++) {
			if (i == 1 || i == row) {
				printf("%c", c);
				printf(j < col ? "" : "\n");
			}
			
			else {
				if (j == 1) 
					printf("%c", c);
				else if (j == col)
					printf("%c\n", c);
				else 
					printf(" ");	
			}
		}
	}
    return 0;
}
