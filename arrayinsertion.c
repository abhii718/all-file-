#include <stdio.h>

void display(int arr[], int n)
{ // Code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int indIsertion(int arr[], int size, int element, int capacity, int index)
{
    // Code for insertion
    if (capacity <= size)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
int main()

{
    int arr[100] = {1, 2, 4, 6, 7, 9, 10, 98};
    int size = 8, element = 45, index = 6;
    display(arr, size);
    indIsertion(arr, size, element, 99, index);
    size += 1;
    display(arr, size);
    return 0;
}