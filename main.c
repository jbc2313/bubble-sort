#include <stdio.h>






void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}


void bub(int *pnt, int n) {
    int i, z;
    for (i = 0; i < n - 1; i++) {
        for (z = 0; z < n - i - 1; z++) {
            if (pnt[z] > pnt[z + 1]) {
               swap(&pnt[z], &pnt[z + 1]); 
            };
        };
    };

}



int main() {
    int c;
    int arr[] = { 7, 3, 5, 9, 1 };
    int size = sizeof(arr)/sizeof(arr[0]);
    for(c = 0; c < 5; c++){
       printf("arr[%d]=%d\n", c, arr[c]);
    };
    
    bub(arr, size); 

    printf("Array was sorted\n");

    for(c = 0; c < 5; c++){
       printf("arr[%d]=%d\n", c, arr[c]);
    };
    return 0;

}
