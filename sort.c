#include <stdio.h>
void quick_sort(int arr[], int low, int high);
void selection_sort(int arr[], int n);
void heap_sort(int arr[], int n);
void swap(int* a, int* b);
void printArray(int arr[], int size);
int partition(int arr[], int low, int high);
void heapify(int arr[], int n, int i);

int main() {
    int arr[10];
    int choice;
    printf("Enter 10 numbers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Choose sorting method:\n1. Quick Sort\n2. Selection Sort\n3. Heap Sort\n");
    scanf("%d", &choice);
    printf("Original array: ");
    printArray(arr, 10);
    switch(choice) {
        case 1:
            quick_sort(arr, 0, 9);
            break;
        case 2:
            selection_sort(arr, 10);
            break;
        case 3:
            heap_sort(arr, 10);
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }
    printf("Sorted array: ");
    printArray(arr, 10);
    return 0;
}
