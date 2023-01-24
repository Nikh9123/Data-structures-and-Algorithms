#include <bits/stdc++.h>
using namespace std;
// void Merge(int *arr, int s, int e)
// {
//     int mid = s + (e - s) / 2;

//     // computng lengths for dividing arrays
//     int len1 = mid - s + 1;
//     int len2 = e - mid;

//     // making array for diving
//     int *first = new int[len1];
//     int *second = new int[len2];

//     int mainArrayIndex = s;
//     for (int i = 0; i < len1; i++)
//     {
//         first[i] = arr[mainArrayIndex++];
//     }
//     mainArrayIndex = mid + 1;
//     for (int i = 0; i < len2; i++)
//     {
//         second[i] = arr[mainArrayIndex++];
//     }

//     mainArrayIndex = s;
//     int index1 = 0, index2 = 0;

//     while (index1 < len1 && index2 < len2)
//     {
//         if (first[index1] < second[index2])
//         {
//             arr[mainArrayIndex++] = first[index1++];
//         }
//         else
//         {
//             arr[mainArrayIndex++] = second[index2++];
//         }
//     }

//     while (index1 < len1)
//     {
//         arr[mainArrayIndex++] = first[index1++];
//     }
//     while (index2 < len2)
//     {
//         arr[mainArrayIndex++] = second[index2++];
//     }
// }
// void mergeSort(int *arr, int s, int e)
// {
//     if (s >= e)
//     {
//         return;
//     }

//     // mid se divide karenge

//     int mid = s + (e - s) / 2;
//     // left part ke liye sort
//     mergeSort(arr, s, mid);
//     mergeSort(arr, mid + 1, e);

//     Merge(arr, s, e);
// }
int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }
    int PivotIndex = s + cnt;

    swap(arr[PivotIndex], arr[s]);

    int i = 0, j = e;
    while (i < PivotIndex && j > PivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < PivotIndex && j > PivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return PivotIndex;
}
void QuickSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    // p for partitioning arrays
    int p = partition(arr, s, e);
    // for sorting array after partioning
    QuickSort(arr, s, p - 1);
    QuickSort(arr, p + 1, e);
}

int main()
{
    int arr[5] = {2, 5, 1, 6, 9};
    int n = 5;

    // mergeSort(arr , 0 , n-1);
    QuickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}