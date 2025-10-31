#include <iostream>
#include <ctime>
using namespace std;

// ---------------------------------------------------------------Problem 6
// int main()
// {
//     int freq[26] = {0};
//     char ch;

//     cout << "Enter characters (end with '0'):\n";
//     while (cin >> ch && ch != '0')
//     {
//         if (ch >= 'a' && ch <= 'z')
//             freq[ch - 'a']++;
//     }

//     cout << "\nFrequency of lowercase letters:\n";
//     for (int i = 0; i < 26; i++)
//     {
//         if (freq[i])
//             cout << char('a' + i) << " : " << freq[i] << endl;
//     }
// }

// ---------------------------------------------------------------Problem 7
// void bubbleSort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// int main()
// {
//     cout << "Enter the number of elements: ";
//     int n;
//     cin >> n;

//     int arr[n];
//     cout << "Enter the elements:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     bubbleSort(arr, n);

//     cout << "Sorted array:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// ---------------------------------------------------------------Problem 8
// int main()
// {
//     int freq[6] = {0};

//     srand(time(0));

//     for (int i = 0; i < 10000; i++)
//     {
//         int roll = rand() % 6 + 1;
//         freq[roll - 1]++;
//     }

//     for (int i = 0; i < 6; i++)
//     {
//         cout << "Value " << (i + 1) << ": " << freq[i] << endl;
//     }

//     return 0;
// }

// ---------------------------------------------------------------Problem 9
// void reverseArray(int arr[], int start, int end)
// {
//     while (start < end)
//     {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;

//         start++;
//         end--;
//     }
// }

// int main()
// {
//     int arr[] = {7, 6, 8, 1, 0};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     reverseArray(arr, 0, size - 1);

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// ---------------------------------------------------------------Problem 10
// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     bool sorted = true;
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] < arr[i - 1])
//         {
//             sorted = false;
//             break;
//         }
//     }

//     if (sorted)
//         cout << "YES";
//     else
//         cout << "NO";

//     return 0;
// }

// ---------------------------------------------------------------End
