#include<stdio.h>
void swapArray(int arr[], int firstIndex, int SecIndex){
    int temp = arr[SecIndex];
    arr[SecIndex] = arr[firstIndex];
    arr[firstIndex] = temp;
}

void insertionSort(int arr[],int length){
    for (int i = 0; i < length; i++)
    {
        int keyIndex = i;
        int j = i - 1;
        while (j >= 0)
        {
            if(arr[j] > arr[keyIndex]){
                swapArray(arr, keyIndex, j);
                keyIndex--;
            }
            j--;
        }
        
    }
    
}


void printArray(int arr[], int length){
    printf("Array Element => ");
    for (int  i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    
}

int main(){
    int length;
    printf("Enter Array Length => ");
    scanf("%d", &length);
    int arr[length];
    printf("Enter Array Element => ");
    for (int i = 0; i < length; i++){
        scanf("%d", &arr[i]);
    }
    printArray(arr, length);
    insertionSort(arr, length);
    printf("\nsorted array \n");
    printArray(arr, length);
    return 0;
}