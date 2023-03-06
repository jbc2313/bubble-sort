#include <stdio.h>



void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}


void bub(int *pntr, int n) {
    int i, z;
    for (i = 0; i < n - 1; i++) {
        for (z = 0; z < n - i - 1; z++) {
            if (pntr[z] > pntr[z + 1]) {
               swap(&pntr[z], &pntr[z + 1]); 
            };
        };
    };

}


void listArray(int *pntr, int size) {
    int x; 
    for (x = 0; x < size; x++) {
        printf("array[%d]=%d\n", x, pntr[x]);
    };

};


int main() {
    int c;
    int arr[] = { 7, 3, 12, 6, 18, 2, 13, 5, 9, 1 };
    int size = sizeof(arr)/sizeof(arr[0]);
    listArray(arr, size); 
    bub(arr, size); 
    printf("Array was sorted!\n");
    listArray(arr, size);
    return 0;
}
