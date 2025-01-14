//15. Print a half diamond pattern using stars:


#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    space = rows - 1;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= space; j++)
            printf(" ");
        space--;
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    space = 1;

    for (i = 1; i <= rows - 1; i++) {
        for (j = 1; j <= space; j++)
            printf(" ");
        space++;
        for (j = 1; j <= 2 * (rows - i) - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}