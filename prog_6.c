#include <stdio.h>

void heapify(int arr[], int n, int i, int isMax) {
    int extreme = i;
    int l = 2*i+1, r = 2*i+2;

    if (isMax) {
        if (l<n && arr[l]>arr[extreme]) extreme=l;
        if (r<n && arr[r]>arr[extreme]) extreme=r;
    } else {
        if (l<n && arr[l]<arr[extreme]) extreme=l;
        if (r<n && arr[r]<arr[extreme]) extreme=r;
    }

    if (extreme != i) {
        int temp = arr[i];
        arr[i] = arr[extreme];
        arr[extreme] = temp;
        heapify(arr,n,extreme,isMax);
    }
}

void buildHeap(int arr[], int n, int isMax) {
    for (int i=n/2-1;i>=0;i--)
        heapify(arr,n,i,isMax);
}

int main() {
    int arr[]={4,10,3,5,1};
    int n=5;

    buildHeap(arr,n,1);
    printf("Max Heap: ");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);

    return 0;
}