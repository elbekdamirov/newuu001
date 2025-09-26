#include <iostream>
using namespace std;

// Problem 11
// int main()
// {
//     double num, neg = 0, pos = 0, total = 0, avg;

//     while (num != 0)
//     {
//         cout << "Enter a number (0 to stop): ";
//         cin >> num;

//         if (num < 0)
//             neg++;
//         else if (num > 0)
//             pos++;

//         total += num;
//     }
//     avg = total / (neg + pos);
//     cout << "The number of postitives: " << pos << endl;
//     cout << "The number of negatives: " << neg << endl;
//     cout << "The total: " << total << endl;
//     cout << "The average: " << avg << endl;

//     return 0;
// }

// Problem 12
// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= num; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Problem 13
// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Problem 14
// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (num == 0)
//     {
//         cout << "The depth is 0" << endl;
//         return 0;
//     }

//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Problem 15
// int main()
// {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;

//     if (n <= 0)
//     {
//         cout << "Number must be positive.\n";
//         return 0;
//     }

//     cout << "Harmonic series: ";

//     double sum = 0.0;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << "1/" << i;
//         if (i < n)
//         {
//             cout << " + ";
//         }
//         sum += 1.0 / i;
//     }

//     cout << "\nSum = " << sum << endl;

//     return 0;
// }

// Problem 16
// int main()
// {
//     double monthlyRent = 1000.0;
//     double increaseRate = 0.03;
//     double yearlyRent;
//     double total = 0.0;

//     for (int year = 1; year <= 5; year++)
//     {
//         yearlyRent = monthlyRent * 12;
//         cout << "Year " << year
//              << " monthly rent = $" << monthlyRent
//              << ", total for this year = $" << yearlyRent << endl;

//         total += yearlyRent;
//         monthlyRent *= (1 + increaseRate);
//     }

//     cout << "\n";
//     cout << "Total rent for 5 years = $" << total << endl;

//     return 0;
// }

// Problem 17
// int main()
// {
//     int n;
//     cout << "Enter an integer: ";
//     cin >> n;

//     int sum = 0;

//     if (n < 0)
//     {
//         n = -n;
//     }

//     while (n > 0)
//     {
//         sum += n % 10;
//         n /= 10;
//     }

//     cout << "Sum of digits is " << sum << endl;

//     return 0;
// }

// Problem 18
// int main()
// {
//     int binary;
//     cout << "Enter a binary number: ";
//     cin >> binary;

//     int decimal = 0, base = 1, remainder;

//     while (binary > 0)
//     {
//         remainder = binary % 10;
//         decimal += remainder * base;
//         base *= 2;
//         binary /= 10;
//     }

//     cout << "Decimal number is " << decimal << endl;

//     return 0;
// }

// Problem 19
// int main()
// {
//     int n;
//     cout << "Enter an integer: ";
//     cin >> n;

//     cout << "Factors of " << n << " are: ";

//     while (n % 2 == 0)
//     {
//         cout << 2 << " ";
//         n /= 2;
//     }

//     for (int i = 3; i * i <= n; i += 2)
//     {
//         while (n % i == 0)
//         {
//             cout << i << " ";
//             n /= i;
//         }
//     }

//     if (n > 2)
//     {
//         cout << n;
//     }

//     cout << endl;
//     return 0;
// }

// Problem 20
// int main()
// {
//     int i;
//     cout << "Enter i: ";
//     cin >> i;

//     double pi = 0.0;

//     for (int k = 1; k <= i; k++)
//     {
//         if (k % 2 == 0)
//             pi -= 1.0 / (2 * k - 1);
//         else
//             pi += 1.0 / (2 * k - 1);
//     }

//     pi *= 4;

//     cout << "Pi is: " << pi << endl;

//     return 0;
// }

// Problem 21
// #include <unistd.h>

// int main()
// {
//     int seconds;
//     cout << "Enter the number of seconds: ";
//     cin >> seconds;

//     for (int i = seconds - 1; i > 0; i--)
//     {
//         cout << i << " second remaining" << endl;

//         sleep(1);
//     }

//     cout << "Stopped" << endl;
//     return 0;
// }

// Problem 22
// int main()
// {
//     int i = 1;

//     while (i <= 10)
//     {
//         cout << i << " mile = " << i * 1.609 << "km" << endl;
//         i++;
//     }

//     return 0;
// }

// Problem 23
// int main()
// {
//     int n = 0;
//     int value = 1;

//     while (value * 2 < 30000)
//     {
//         value *= 2;
//         n++;
//     }

//     cout << "The largest n such that 2^n < 30000 is: " << n << endl;
//     cout << "2^" << n << " = " << value << endl;

//     return 0;
// }

// Problem 24
// int main()
// {
//     srand(time(0));

//     int even = 0, odd = 0;

//     for (int i = 0; i < 100000; i++)
//     {
//         int num = rand();
//         if (num % 2 == 0)
//             even++;
//         else
//             odd++;
//     }

//     cout << "Total even numbers: " << even << endl;
//     cout << "Total odd numbers: " << odd << endl;

//     return 0;
// }

// Problem 25
