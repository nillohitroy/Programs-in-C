#include <stdio.h>

int main() {
    int a[4], b[3], c[7];
    int i, j, k;

    printf("Enter 4 sorted numbers for array A:\n");
    for(i = 0; i < 4; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter 3 sorted numbers for array B:\n");
    for(j = 0; j < 3; j++) {
        scanf("%d", &b[j]);
    }
   
   	i = 0; j = 0; k = 0;
    while (i < 4 && j < 3) {
        if (a[i] < b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < 4) {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < 3) {
        c[k] = b[j];
        j++;
        k++;
    }

    printf("\nMerged sorted array C:\n");
    for(k = 0; k < 7; k++) {
        printf("%d ", c[k]);
    }

    return 0;
}

