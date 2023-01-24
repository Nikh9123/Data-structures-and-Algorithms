using namespace std;
#include <bits/stdc++.h>
int main()
{
    int arr[8] = {6, 12, 14, 5, 3, 9, 8, 4};

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
            cout << arr[j] << " ";
        }
        // // for (int i = 0; i < 8; i++)
        // {
        //     // cout << arr[i] << " ";
        //     // cout << endl;
        // }
        cout << endl;
    }
    cout << "sorted array is :" << endl;

    // int i, element;
    // for (i = 0; i < 8; i++)
    // {
    //     element = arr[i];
    //     int j = i;
    //     while ((j > 0) && (arr[j - 1] > element))
    //     {
    //         arr[j] = arr[j - 1];
    //         j--;
    //     }
    //     arr[j] = element;
    // }

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}