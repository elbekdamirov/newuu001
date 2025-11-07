#include <iostream>
#include <vector>
using namespace std;

//================================================ Problem 5
// int main()
// {
//     int rows, cols;
//     cout << "Enter the number of rows and columns: ";
//     cin >> rows >> cols;

//     int matrix[100][100];
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
//             cin >> matrix[i][j];
//         }
//     }

//     for (int j = 0; j < cols; j++)
//     {
//         int sum = 0;
//         for (int i = 0; i < rows; i++)
//         {
//             sum += matrix[i][j];
//         }
//         cout << sum << " ";
//     }

//     return 0;
// }

//================================================ Problem 6
// int main()
// {
//     int n;
//     cout << "Enter the size of the square matrix: ";
//     cin >> n;

//     int matrix[100][100];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
//             cin >> matrix[i][j];
//         }
//     }

//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += matrix[i][i];
//     }

//     cout << "Sum of diagonal elements: " << sum << endl;

//     return 0;
// }

//================================================ Problem 7
// int main()
// {
//     int rows, cols;
//     cout << "Enter the number of rows and columns: ";
//     cin >> rows >> cols;

//     int matrix[100][100];

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
//             cin >> matrix[i][j];
//         }
//     }

//     for (int j = 0; j < cols; j++)
//     {
//         for (int i = 0; i < rows; i++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//================================================ Problem 8
// int main()
// {
//     int rows, cols;
//     cout << "Enter the number of rows and columns: ";
//     cin >> rows >> cols;

//     int a[100][100], b[100][100], sum[100][100];

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << "Enter element for matrix A at position (" << i + 1 << ", " << j + 1 << "): ";
//             cin >> a[i][j];
//         }
//     }

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << "Enter element for matrix B at position (" << i + 1 << ", " << j + 1 << "): ";
//             cin >> b[i][j];
//         }
//     }

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             sum[i][j] = a[i][j] + b[i][j];
//         }
//     }

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << sum[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//================================================ Problem 9
// int main()
// {
//     int n1, m1;
//     cout << "Enter the size of matrix A: ";
//     cin >> n1 >> m1;

//     int A[100][100];
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < m1; j++)
//         {
//             cout << "Enter element for matrix A at position (" << i + 1 << ", " << j + 1 << "): ";
//             cin >> A[i][j];
//         }
//     }

//     int n2, m2;
//     cout << "Enter the size of matrix B: ";
//     cin >> n2 >> m2;

//     int B[100][100];
//     for (int i = 0; i < n2; i++)
//     {
//         for (int j = 0; j < m2; j++)
//         {
//             cout << "Enter element for matrix B at position (" << i + 1 << ", " << j + 1 << "): ";
//             cin >> B[i][j];
//         }
//     }

//     if (m1 != n2)
//     {
//         cout << "Matrix multiplication not possible" << endl;
//         return 0;
//     }

//     int C[100][100] = {0};

//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < m2; j++)
//         {
//             for (int k = 0; k < m1; k++)
//             {
//                 C[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }

//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < m2; j++)
//         {
//             cout << C[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//================================================ Problem 10
// int main()
// {
//     int n;
//     cout << "Enter the size of the square matrix: ";
//     cin >> n;

//     int matrix[100][100];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
//             cin >> matrix[i][j];
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             int temp = matrix[i][j];
//             matrix[i][j] = matrix[j][i];
//             matrix[j][i] = temp;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n / 2; j++)
//         {
//             int temp = matrix[i][j];
//             matrix[i][j] = matrix[i][n - j - 1];
//             matrix[i][n - j - 1] = temp;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//================================================ Problem 15
// int main()
// {
//     int n;
//     cout << "Enter the size of the vector: ";
//     cin >> n;

//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter element " << i + 1 << ": ";
//         cin >> v[i];
//     }

//     int x;
//     cout << "Enter the value of x: ";
//     cin >> x;

//     vector<int> result;
//     for (int num : v)
//     {
//         if (num != x)
//             result.push_back(num);
//     }

//     cout << "Vector after removing " << x << ": ";
//     for (int num : result)
//     {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }

//================================================ Problem 16
// int main()
// {
//     int n;
//     cout << "Enter the size of the vector: ";
//     cin >> n;

//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter element " << i + 1 << ": ";
//         cin >> v[i];
//     }

//     for (int i = n - 1; i >= 0; i--)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

//================================================ Problem 17
// int main()
// {
//     int n;
//     cout << "Enter the size of the vector: ";
//     cin >> n;

//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {

//         cout << "Enter element " << i + 1 << ": ";
//         cin >> v[i];
//     }

//     int x, k;
//     cout << "Enter the value of x (number) and k (position): ";
//     cin >> x >> k;

//     v.insert(v.begin() + k, x);

//     for (int num : v)
//         cout << num << " ";

//     return 0;
// }

//================================================ Problem 18
// int main()
// {
//     int n;
//     cout << "Enter the size of the vector: ";
//     cin >> n;

//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter element " << i + 1 << ": ";
//         cin >> v[i];
//     }

//     if (n > 0)
//     {
//         cout << v[0] << " ";
//         for (int i = 1; i < n; i++)
//         {
//             if (v[i] != v[i - 1])
//             {
//                 cout << v[i] << " ";
//             }
//         }
//     }
//     cout << endl;

//     return 0;
// }

//================================================ Problem 19
// int main()
// {
//     int n;
//     cout << "Enter the size of the vector: ";
//     cin >> n;

//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter element " << i + 1 << ": ";
//         cin >> v[i];
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (v[j] > v[j + 1])
//             {
//                 int temp = v[j];
//                 v[j] = v[j + 1];
//                 v[j + 1] = temp;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

//================================================ Problem 20
// int main()
// {
//     int n;
//     cout << "Enter the size of the vector: ";
//     cin >> n;

//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter element " << i + 1 << ": ";
//         cin >> v[i];
//     }

//     int largest = v[0];
//     int second = v[0];

//     for (int i = 1; i < n; i++)
//     {
//         if (v[i] > largest)
//         {
//             largest = v[i];
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (v[i] != largest && v[i] > second)
//         {
//             second = v[i];
//         }
//     }

//     if (second == largest)
//     {

//         second = largest;
//     }

//     cout << "Second largest element: " << second << endl;

//     return 0;
// }