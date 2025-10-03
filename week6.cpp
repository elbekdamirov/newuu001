#include <iostream>
#include <cmath>
using namespace std;

//------------------------------------------------------- Problem 1 ------------------------------------------------------- //

// int product(int a, int b)
// {
//     return a * b;
// }

// int main()
// {
//     int num1, num2;

//     cout << "Enter first number: ";
//     cin >> num1;
//     cout << "Enter second number: ";
//     cin >> num2;

//     int result = product(num1, num2);

//     cout << "Product = " << result << endl;

//     return 0;
// }

//------------------------------------------------------- Problem 2 ------------------------------------------------------- //
// float acceleration(float v1, float v2, float t)
// {
//     return (v2 - v1) / t;
// }

// int main()
// {
//     float v1, v2, t;

//     cout << "Enter initial velocity (v1): ";
//     cin >> v1;
//     cout << "Enter final velocity (v2): ";
//     cin >> v2;
//     cout << "Enter time (t): ";
//     cin >> t;

//     float a = acceleration(v1, v2, t);

//     cout << "Linear acceleration = " << a << endl;

//     return 0;
// }

//------------------------------------------------------- Problem 3 ------------------------------------------------------- //

// void fun(float r)
// {
//     float PI = 3.1415;
//     float area = PI * r * r;
//     float circumference = 2 * PI * r;

//     cout << "Area: " << area << endl;
//     cout << "Circumference: " << circumference << endl;
// }

// int main()
// {
//     float radius;
//     cout << "Enter radius: " << endl;
//     cin >> radius;

//     fun(radius);

//     return 0;
// }

//------------------------------------------------------- Problem 4 ------------------------------------------------------- //

// void fun(float a, float b)
// {
//     float perimeter = 2 * (a + b);
//     float area = a * b;

//     cout << "Perimeter: " << perimeter << endl;
//     cout << "Area: " << area << endl;
// }

// int main()
// {
//     float a, b;
//     cout << "Enter a: " << endl;
//     cin >> a;
//     cout << "Enter b: " << endl;
//     cin >> b;

//     fun(a, b);

//     return 0;
// }

//------------------------------------------------------- Problem 5 ------------------------------------------------------- //

// void swapNumbers(int &num1, int &num2)
// {
//     num1 = num1 + num2;
//     num2 = num1 - num2;
//     num1 = num1 - num2;
// }

// int main()
// {
//     int num1, num2;
//     cout << "Enter num1: ";
//     cin >> num1;

//     cout << "Enter num2: ";
//     cin >> num2;

//     swapNumbers(num1, num2);

//     cout << "Swapped num1 = " << num1 << ", num2 = " << num2 << endl;

//     return 0;
// }

//------------------------------------------------------- Problem 6 ------------------------------------------------------- //
// int Factorial(int n = 1)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }

// int main()
// {
//     cout << "Factorial of 5: " << Factorial(5) << endl;
//     cout << "Factorial with no parameter: " << Factorial() << endl;
//     return 0;
// }

//------------------------------------------------------- Problem 7 ------------------------------------------------------- //
// int gcd(int num1, int num2)
// {
//     while (num2 != 0)
//     {
//         int temp = num2;
//         num2 = num1 % num2;
//         num1 = temp;
//     }
//     return num1;
// }

// int main()
// {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     cout << "GCD of " << a << " and " << b << " = " << gcd(a, b) << endl;

//     return 0;
// }

//------------------------------------------------------- Problem 8 ------------------------------------------------------- //
// void findMaxMin(int a, int b, int c)
// {
//     int maxVal = a, minVal = a;

//     if (b > maxVal)
//         maxVal = b;
//     if (c > maxVal)
//         maxVal = c;

//     if (b < minVal)
//         minVal = b;
//     if (c < minVal)
//         minVal = c;

//     cout << "Maximum = " << maxVal << endl;
//     cout << "Minimum = " << minVal << endl;
// }

// int main()
// {
//     int x, y, z;
//     cout << "Enter three numbers: ";
//     cin >> x >> y >> z;

//     findMaxMin(x, y, z);

//     return 0;
// }

//------------------------------------------------------- Problem 9 ------------------------------------------------------- //
// double calculator(double a, double b, char c)
// {
//     double res;
//     switch (c)
//     {
//     case '+':
//         res = a + b;
//         break;
//     case '-':
//         res = a - b;
//         break;
//     case '*':
//         res = a * b;
//         break;
//     case '/':
//         res = a / b;
//         break;
//     default:
//         break;
//     }
//     return res;
// }

// int main()
// {
//     cout << "Welcome to the simple calculator app!" << endl;

//     double first, second;
//     char action;

//     cout << "Enter first number: " << endl;
//     cin >> first;

//     cout << "Enter second number: " << endl;
//     cin >> second;

//     cout << "Enter character: " << endl;
//     cin >> action;

//     double result = calculator(first, second, action);
//     cout << first << action << second << " = " << result << endl;

//     return 0;
// }

//------------------------------------------------------- Problem 10 ------------------------------------------------------- //
// int getTriangularNumber(int n)
// {
//     return n * (n + 1) / 2;
// }

// int main()
// {
//     for (int i = 1; i <= 75; i++)
//     {
//         cout << getTriangularNumber(i) << " ";

//         if (i % 5 == 0)
//             cout
//                 << endl;
//     }

//     return 0;
// }

//------------------------------------------------------- Problem 11 ------------------------------------------------------- //
// void displayEven(int number)
// {
//     int count = 0;

//     cout << "Even digits: ";
//     while (number > 0)
//     {
//         int digit = number % 10;
//         if (digit % 2 == 0)
//         {
//             cout << digit << " ";
//             count++;
//         }
//         number /= 10;
//     }

//     if (count == 0)
//     {
//         cout << "None";
//     }

//     cout << endl;
// }

// int main()
// {
//     int num;
//     cout << "Enter an integer: ";
//     cin >> num;

//     displayEven(num);

//     return 0;
// }

//------------------------------------------------------- Problem 12 ------------------------------------------------------- //
// int cubeOfDigits(int number)
// {
//     int sum = 0;
//     int temp = number;
//     while (temp > 0)
//     {
//         int digit = temp % 10;
//         sum += digit * digit * digit;
//         temp /= 10;
//     }
//     return sum;
// }

// void isArmstrong(int sum, int number)
// {
//     if (sum == number)
//         cout << number << " is an Armstrong number." << endl;
//     else
//         cout << number << " is NOT an Armstrong number." << endl;
// }

// int main()
// {
//     int num;
//     cout << "Enter an integer: ";
//     cin >> num;

//     int sum = cubeOfDigits(num);
//     isArmstrong(sum, num);

//     return 0;
// }

//------------------------------------------------------- Problem 13 ------------------------------------------------------- //
// int numberOfDaysInFebruary(int year)
// {
//     if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//         return 29;
//     else
//         return 28;
// }

// int main()
// {
//     for (int year = 1985; year <= 1993; year++)
//     {
//         cout << year << "\t" << numberOfDaysInFebruary(year) << endl;
//     }
//     return 0;
// }

//------------------------------------------------------- Problem 14 ------------------------------------------------------- //

// double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years)
// {
//     return investmentAmount * pow(1 + monthlyInterestRate, years * 12);
// }

// int main()
// {
//     double investmentAmount, annualInterestRate;

//     cout << "Enter investment amount: ";
//     cin >> investmentAmount;

//     cout << "Enter annual interest rate: ";
//     cin >> annualInterestRate;

//     double monthlyInterestRate = (annualInterestRate / 100.0) / 12.0;

//     cout << "\nYears\tFuture Value\n";

//     for (int years = 1; years <= 30; years++)
//     {
//         cout << years << "\t" << futureInvestmentValue(investmentAmount, monthlyInterestRate, years) << endl;
//     }

//     return 0;
// }

//------------------------------------------------------- Problem 15 ------------------------------------------------------- //
// void printASCII(char ch1, char ch2, int numberPerLine)
// {
//     int count = 0;
//     for (char ch = ch1; ch <= ch2; ch++)
//     {
//         cout << ch << ":" << (int)ch << "\t";
//         count++;

//         if (count % numberPerLine == 0)
//             cout << endl;
//     }
//     if (count % numberPerLine != 0)
//         cout << endl;
// }

// int main()
// {
//     char ch1, ch2;
//     int numberPerLine;

//     cout << "Enter starting character: ";
//     cin >> ch1;
//     cout << "Enter ending character: ";
//     cin >> ch2;
//     cout << "Enter number of ASCII values per line: ";
//     cin >> numberPerLine;

//     cout << "\nASCII values from '" << ch1 << "' to '" << ch2 << "':\n";
//     printASCII(ch1, ch2, numberPerLine);

//     return 0;
// }