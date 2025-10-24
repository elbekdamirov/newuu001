#include <iostream>
using namespace std;
#include <cmath>

// Problem 1
// int power(int x, int y)
// {
//     if (y == 0)
//         return 1;
//     return x * power(x, y - 1);
// }

// int main()
// {
//     int base, exponent;
//     cout << "Enter base: ";
//     cin >> base;
//     cout << "Enter exponent: ";
//     cin >> exponent;
//     cout << base << "^" << exponent << " = " << power(base, exponent) << endl;
//     return 0;
// }

// Problem 2
// int reverseNumber(int n, int rev = 0)
// {
//     if (n == 0)
//         return rev;
//     return reverseNumber(n / 10, rev * 10 + n % 10);
// }

// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     cout << "Reversed number: " << reverseNumber(num) << endl;
//     return 0;
// }

// Problem 3
// int reverseNumber(int n, int rev = 0)
// {
//     if (n == 0)
//         return rev;
//     return reverseNumber(n / 10, rev * 10 + n % 10);
// }

// bool isPalindrome(int n)
// {
//     return n == reverseNumber(n);
// }

// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if (isPalindrome(num))
//         cout << "Palindrome" << endl;
//     else
//         cout << "Not Palindrome" << endl;
//     return 0;
// }

// Problem 4
// bool isPrimeRecursive(int n, int i = 2)
// {
//     if (n <= 1)
//         return false;
//     if (i > sqrt(n))
//         return true;
//     if (n % i == 0)
//         return false;
//     return isPrimeRecursive(n, i + 1);
// }

// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if (isPrimeRecursive(num))
//         cout << "Prime" << endl;
//     else
//         cout << "Not Prime" << endl;
//     return 0;
// }

// Problem 5
// int countEvenDigits(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (n % 2 == 0)
//     {
//         return 1 + countEvenDigits(n / 10);
//     }
//     return countEvenDigits(n / 10);
// }

// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     cout << "Number of even digits: " << countEvenDigits(num) << endl;

//     return 0;
// }

// Problem 6
// int productOfDigits(int n)
// {
//     if (n == 0)
//         return 1;
//     return (n % 10) * productOfDigits(n / 10);
// }

// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     cout << "Product of digits: " << productOfDigits(num) << endl;
//     return 0;
// }

// Problem 7
// bool isPowerOfTwo(int n)
// {
//     if (n == 1)
//         return true;
//     if (n == 0 || n % 2 != 0)
//         return false;
//     return isPowerOfTwo(n / 2);
// }

// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if (isPowerOfTwo(num))
//         cout << "Power of 2" << endl;
//     else
//         cout << "Not Power of 2" << endl;
//     return 0;
// }

// Problem 8
// bool isIncreasing(int n)
// {
//     if (n < 10)
//         return true;
//     int last = n % 10;
//     int secondLast = (n / 10) % 10;
//     if (last <= secondLast)
//         return false;
//     return isIncreasing(n / 10);
// }

// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if (isIncreasing(num))
//         cout << "Digits are strictly increasing" << endl;
//     else
//         cout << "Digits are not strictly increasing" << endl;
//     return 0;
// }

// Problem 9
// int countZeros(int n)
// {
//     if (n == 0)
//         return 0;
//     if (n % 10 == 0)
//         return 1 + countZeros(n / 10);
//     return countZeros(n / 10);
// }

// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if (num == 0)
//         cout << "Number of zeros: 1" << endl;
//     else
//         cout << "Number of zeros: " << countZeros(num) << endl;
//     return 0;
// }

// Problem 10
// int power(int x, int y)
// {
//     if (y == 0)
//         return 1;
//     if (y % 2 == 0)
//     {
//         int half = power(x, y / 2);
//         return half * half;
//     }
//     else
//     {
//         return x * power(x, y - 1);
//     }
// }

// int main()
// {
//     int base, exponent;
//     cout << "Enter base: ";
//     cin >> base;
//     cout << "Enter exponent: ";
//     cin >> exponent;
//     cout << base << "^" << exponent << " = " << power(base, exponent) << endl;
//     return 0;
// }