#include <iostream>
using namespace std;

// Sort the Array of [0 and 1] using function:
void sortOne(int arr2[], int size2)
{
    int start = 0;
    int end = size2 - 1;

    while (start < end)
    {
        while (arr2[start] == 0 && start < end)
        {
            start++;
        }
        while (arr2[end] == 1 && start < end)
        {
            end--;
        }
        swap(arr2[start], arr2[end]);
        start++;
        end--;
    }
}

// Sort the array of [0, 1 and 2 ] using function:
void sortTwo(int arr3[], int size3)
{
    int start = 0;
    int end = size3 - 1;
    int mid = 0;

    while (mid <= end)
    {
        if (arr3[mid] == 0)
        {
            // If the element is 0
            swap(arr3[start++], arr3[mid++]);
        }
        else if (arr3[mid] == 1)
        {
            // If the element is 1
            mid++;
        }
        else if (arr3[mid] == 2)
        {
            // If the element is 2
            swap(arr3[mid], arr3[end--]);
        }
    }
}

// Printing the Alternate array :
int alternate(int arr1[], int size1)
{
    for (int i = 0; i < size1; i = i + 2)
    {
        if (i + 1 < size1)
        {
            swap(arr1[i], arr1[i + 1]);
            // using the temp variable to swap alternate:
            // int temp = arr1[i+1];
            // arr1[i+1] = arr1[i];
            // arr1[i] = temp;
        }
    }
}
// Print function used to print the array:
void printArray(int arr[], int size)
{
    cout << "Printing the Updated array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Value of index " << i << " is: " << arr[i] << endl;
    }
}

int main()
{
    // Creating the array :
    int size1;
    cout << "Enter the size1 of an array: ";
    cin >> size1;
    int arr1[100];
    for (int i = 0; i < size1; i++)
    {
        cout << "Value of index " << i << " is: ";
        cin >> arr1[i];
    }
    alternate(arr1, size1);
    printArray(arr1, size1);

    // Creating an array for SORT [0 and 1]:
    int size2;
    cout << "Enter the size2 of an array: ";
    cin >> size2;
    int arr2[100];
    for (int i = 0; i < size2; i++)
    {
        cout << "Value of index " << i << " is: ";
        cin >> arr2[i];
    }
    sortOne(arr2, size2);
    printArray(arr2, size2);

    // Creating an array for SORT [0, 1 and 2]:
    int size3;
    cout << "Enter the size3 of an array: ";
    cin >> size3;
    int arr3[100];
    for (int i = 0; i < size3; i++)
    {
        cout << "Value of index " << i << " is: ";
        cin >> arr3[i];
    }
    sortTwo(arr3, size3);
    printArray(arr3, size3);
}