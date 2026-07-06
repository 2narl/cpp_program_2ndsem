/*Lab 1 (Arrays & Pointers): Write a program that takes n integers from the user and
stores them in a dynamically allocated array. Then, use a function that accepts a
pointer to the array and its size to reverse the order of the elements in the array.
Finally, print the reversed array. */
#include <iostream>
using namespace std;

// define a fuction to reverse the array
void reverseArray(int *arr, int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the Size of Array:";
    cin >> n;

    // Dinamically allocating memory
    int *arr = new int[n];

    cout << "Enter the Elements of Array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // print orginal array
    cout << endl
         << "Original Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // call the function to reverse the array
    reverseArray(arr, n);

    // print the reversed array
    cout << "Reversed Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // free the dynamically allocated memory
    delete[] arr;
}