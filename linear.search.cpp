#include<iostream>
using namespace std;

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
    cout << "Enter length of array => ";
    cin >> length;
    int array[length];
    cout<< "Enter array => ";
    for (int i = 0; i < length; i++)
    {
        cin >> array[i];
    }
    cout << "Enter search Element => ";
    cin >> searchElement;
    int index = linear_Search(array, length, searchElement);
    if(index != -1)
        cout << " index of array => " << index;
    else
        cout << "item not found  => " <<index;
    return 0;
}