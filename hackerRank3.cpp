// // using namespace std;
// // #include <iostream>
// // int GetMax(int num[], int size)
// // {
// //     int maxi = INT32_MIN;
// //     // cout << maxi << endl;
// //     int ans = 0;
// //     for (int i = 0; i < size; i++)
// //     {
// //         maxi = max(maxi, num[i]);

// //         ans = maxi;
// //     }
// //     for (int i = 0; i < size; i++)
// //     {
// //         if (num[i] == ans)
// //         {
// //             return i + 1;
// //         }
// //     }
// // }

// // int main()
// // {
// //     int size;
// //     cin >> size;

// //     int num[size];
// //     for (int i = 0; i < size; i++)
// //     {
// //         cin >> num[i];
// //     }
// //     cout << GetMax(num, size);
// // }
// #include <iostream>

// using namespace std;

// int main() {
//     int sizeOfArray;
//     cin >> sizeOfArray;
//     int array[30];
//     if (sizeOfArray > 2 && sizeOfArray < 30) {
//         for (int i = 0; i < sizeOfArray; i++) {
//             cin >> array[i];
//         }
//     } else {
//         cout << "Invalid Input";
//         exit(0);
//     }

//     for (int j = 0; j < sizeOfArray-1; j++) {
//         if (array[j] == array[j+1]) {
//             for (int k = j; k < sizeOfArray; k++) {
//                 array[k] = array[k+1];
//             }
//             j--;
//             sizeOfArray--;
//         }
//     }

//     for (int i = 0; i < sizeOfArray; i++) {
//         cout << array[i] << " ";
//     }
// }