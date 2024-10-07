#include <stdio.h>

int main() {
    int i, j, rows;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    int totalNumbers = (rows * (rows + 1)) / 2; 

    
    for (i = rows; i >= 1; --i) {
        for (j = 1; j <= i; ++j) {
            printf("%d ", totalNumbers--);
        }
        printf("\n");
    }

    return 0;
}

