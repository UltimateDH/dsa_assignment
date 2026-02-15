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

    int n1 = m - l + 1;
    int n2 = r - m;

    int *L = (int*)malloc(n1 * sizeof(int));
    int *R = (int*)malloc(n2 * sizeof(int));

    for(int i = 0; i < n1; i++)
        L[i] = arr[l + i];

    for(int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;

    while(i < n1 && j < n2) {
        (*comp)++;
        if(L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while(i < n1)
        arr[k++] = L[i++];

    while(j < n2)
        arr[k++] = R[j++];

    free(L);
    free(R);
}


/* ---------- Merge Sort ---------- */
void mergeSort(int arr[], int l, int r, int *comp) {
    if(l<r){
        int m = (l+r)/2;
        mergeSort(arr,l,m,comp);
        mergeSort(arr,m+1,r,comp);
        merge(arr,l,m,r,comp);
    }
}

/* ---------- Print Array ---------- */
void printArray(int arr[], int n) {
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
}

/* ---------- Main Program ---------- */
int main(){
    int n, choice;
    int comparisons = 0, swaps = 0;

    printf("Enter N: ");
    scanf("%d",&n);

    int *arr = (int*)malloc(n * sizeof(int));
    srand(time(0));

    for(int i=0;i<n;i++)
        arr[i] = rand()%1000 + 1;

    printf("\nBefore Sorting:\n");
    printArray(arr,n);

    printf("\nChoose Sorting Algorithm:\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    printf("4. Merge Sort\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            bubbleSort(arr,n,&comparisons,&swaps);
            break;
        case 2:
            selectionSort(arr,n,&comparisons,&swaps);
            break;
        case 3:
            insertionSort(arr,n,&comparisons,&swaps);
            break;
        case 4:
            mergeSort(arr,0,n-1,&comparisons);
            swaps = 0;  // Merge sort doesn't count swaps traditionally
            break;
        default:
            printf("Invalid choice!");
            return 0;
    }

    printf("\nAfter Sorting:\n");
    printArray(arr,n);

    printf("\nTotal Comparisons: %d\n",comparisons);
    printf("Total Swaps: %d\n",swaps);

    free(arr);
    return 0;
}