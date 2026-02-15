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

/* ---------- Merge Function ---------- */
void merge(int arr[], int l, int m, int r, int *comp) {
    int n1 = m-l+1;
    int n2 = r-m;

    int L[n1], R[n2];

    for(int i=0;i<n1;i++)
        L[i] = arr[l+i];
    for(int j=0;j<n2;j++)
        R[j] = arr[m+1+j];

    int i=0,j=0,k=l;

    while(i<n1 && j<n2){
        (*comp)++;
        if(L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while(i<n1)
        arr[k++] = L[i++];

    while(j<n2)
        arr[k++] = R[j++];
}
