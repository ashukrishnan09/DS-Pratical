#include<stdio.h>

int binary_Search(int arr[], int leftIndex ,int rightIndex, int item ){
   
    if(rightIndex >= leftIndex){
        int mid = leftIndex + (rightIndex- leftIndex) / 2;
        if(arr[mid] == item){
            return mid;
        }
        else if( item > arr[mid])
            return binary_Search(arr, mid + 1, rightIndex, item);
        
        return binary_Search(arr, leftIndex, mid - 1, item);
    }
    return -1;
}

int main(){
    int length, searchElement;
    printf( "Enter length of array => ");
    scanf("%d", &length);
    int array[length];
    printf( "Enter sorted array =>");
    for (int i = 0; i < length; i++)
    {
        scanf("%d",  &array[i]);
    }
    printf("Enter search Element => ");
    scanf("%d" ,&searchElement);
    int index = binary_Search(array, 0, length-1, searchElement);
    
    if(index != -1)
        printf("item is index of array => %d" , index);
    else
        printf( "item not found  => %d",index);
    return 0;
}