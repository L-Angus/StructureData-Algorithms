#include <iostream>

void quickSort(int arr[], int low, int high) {
    int refvalue = arr[0];
    while (low < high) {
        while (arr[high] > refvalue && high > low) {
            high--;
        }
        std::swap(arr[high], arr[low]);
        while (arr[low] < refvalue && low < high) {
            low++;
        }
        std::swap(arr[low], arr[high]);
    }
}

int main()
{
    int a[8] = { 70,50,30,20,10,70,40,60 };
    int n = 8;
    quickSort(a, 0, n - 1);
    for (size_t i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }

    return 0;
}