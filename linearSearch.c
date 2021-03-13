#include<stdio.h>

int linear_Search(int array[], int length, int searchElement){
    for (int i = 0; i < length; i++)
    {
        if(searchElement == array[i])
            return i;
        
    }
    return -1;
}
int main(){
    int length, searchElement;
    printf( "Enter length of array => ");
    scanf("%d", &length);
    int array[length];
    printf("Enter array => ");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter search Element => ");
    scanf("%d", &searchElement);
    int index = linear_Search(array, length, searchElement);
    if(index != -1)
        printf(" index of array => %d" , index);
    else
        printf("item not found  => %d" ,index);
    return 0;
}