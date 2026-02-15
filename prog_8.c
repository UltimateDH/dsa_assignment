#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* ---------- Bubble Sort ---------- */
void bubbleSort(int arr[], int n, int *comp, int *swaps) {
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            (*comp)++;
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                (*swaps)++;
            }
        }
    }
}