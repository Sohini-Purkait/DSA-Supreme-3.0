#include <iostream>
using namespace std;

void extremePrint(int arr[], int n)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        if (left == right)
        {
            // print only 1 time
            cout << arr[left] << " ";
            break;
        }
        else
        {
            cout << arr[left] << " ";
            left++;
            cout << arr[right] << " ";
            right--;
        }
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    extremePrint(arr, size);

    return 0;
}