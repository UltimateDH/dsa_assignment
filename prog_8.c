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

/* ---------- Selection Sort ---------- */
void selectionSort(int arr[], int n, int *comp, int *swaps) {
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            (*comp)++;
            if(arr[j] < arr[min])
                min = j;
        }
        if(min != i){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
            (*swaps)++;
        }
    }
}

/* ---------- Insertion Sort ---------- */
void insertionSort(int arr[], int n, int *comp, int *swaps) {
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;

        while(j>=0){
            (*comp)++;
            if(arr[j] > key){
                arr[j+1] = arr[j];
                (*swaps)++;
                j--;
            } else break;
        }
        arr[j+1] = key;
    }
}