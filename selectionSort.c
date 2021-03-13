#include<stdio.h>
void swapArray(int arr[], int firstIndex, int SecIndex){
    int temp = arr[SecIndex];
    arr[SecIndex] = arr[firstIndex];
    arr[firstIndex] = temp;
}

void SelectionSort(int arr[],int length){
    int i, minIndex, j;
    for (i = 0; i < length -1 ; i++)
    {
        minIndex = i;
        for (j = i+1; j < length; j++)
        {
            if(arr[minIndex]> arr[j]){
                minIndex = j;
            }
            
        }
        if(minIndex != i){
            swapArray(arr, minIndex, i);
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
    SelectionSort(arr, length);
    printf("\nsorted array \n");
    printArray(arr, length);
    return 0;
}