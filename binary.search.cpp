#include<iostream>
using namespace std;

int binary_Search(int arr[], int leftIndex ,int rightIndex, int item ){
    cout << leftIndex << " " << rightIndex << endl;
    if(rightIndex >= leftIndex){
        int mid = (leftIndex + (rightIndex- leftIndex)) / 2;
        cout << "mid : "<<mid<<endl;
        if(arr[mid] == item){
            cout << "mid element";
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
    cout << "Enter length of array => ";
    cin >> length;
    int array[length];
    cout<< "Enter sorted array => ";
    for (int i = 0; i < length; i++)
    {
        cin >> array[i];
    }
    cout << "Enter search Element => ";
    cin >> searchElement;
    int index = binary_Search(array, 0, length-1, searchElement);
    if(index != -1)
        cout << " index of array => " << index;
    else
        cout << "item not found  => " <<index;
    return 0;
}