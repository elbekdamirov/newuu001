#include <iostream>
using namespace std;
#include <math.h>

// Problem 11
// int main()
// {
//     double a = 1.13e3;
//     double b = 411e-4;
//     cout << a << " " << b << endl;
// }

// Problem 12
// int main()
// {
//     int students;
//     cout << "Enter number of admitted students: ";
//     cin >> students;

//     int groups = 11;
//     int base = students / groups;
//     int remainder = students % groups;

//     int firstGroup = base;
//     int lastGroup = remainder;

//     cout << "Number of students in first group: " << firstGroup << endl;
//     cout << "Number of students in last group: " << lastGroup << endl;

//     return 0;
// }

// Problem 13
// int main()
// {
//     double side, area;
//     cout << "Enter side: " << endl;
//     cin >> side;

//     area = (3 * sqrt(3) / 2) * side * side;

//     cout << "The area of the hexagon is " << area << endl;

//     return 0;
// }

// Problem 14
// int main()
// {
//     int num;
//     cout << "Enter num: " << endl;
//     cin >> num;

//     num++;
//     num *= 3;
//     num -= 14;
//     num /= 4;
//     num -= 1;
//     num = num % 9;

//     cout << num << endl;

//     return 0;
// }

// Problem 15
// int main()
// {
//     char c = 'A';
//     c += 7;
//     cout << c;
//     c -= 3;
//     cout << c;
//     c += 7;
//     cout << c;
//     cout << c;
//     c += 3;
//     cout << c;
//     c -= 46;
//     cout << c;
//     cout << endl;
//     return 0;
// }

// Problem 16
// int main()
// {
//     float z;
//     float x = 17, y = 1;

//     z = (x + (++x)) / ((3 * y) * (2 * y));

//     cout << z << endl;
//     return 0;
// }

// Problem 17
// int main()
// {
//     int a, b;
//     cout << "Enter first number: " << endl;
//     cin >> a;

//     cout << "Enter second number: " << endl;
//     cin >> b;

//     cout << (a == b) << endl;
// }

// Problem 18

// int main()
// {
//     int a, b;
//     cout << "Enter a:" << endl;
//     cin >> a;

//     cout << "Enter b:" << endl;
//     cin >> b;

//     cout << (a < 140 && a < b) << endl;

//     return 0;
// }

// Problem 19

// int main()
// {
//     int a, b, c;
//     cout << "Enter a: " << endl;
//     cin >> a;

//     cout << "Enter b: " << endl;
//     cin >> b;

//     cout << "Enter c: " << endl;
//     cin >> c;

//     cout << (a > b && a > c) << endl;

//     return 0;
// }

// Problem 20
// int main()
// {
//     int n1, n2, n3, n4, n5;
//     cin >> n1 >> n2 >> n3 >> n4 >> n5;

//     cout << (n1 >= 0 || n2 >= 0 || n3 >= 0 || n4 >= 0 || n5 >= 0);

//     return 0;
// }

// Problem 21
// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     cout << ((a + b > 30) && (a * b > 30)) << " ";

//     cout << (((a + (b - 10) > 30) || (a * (b - 10) > 30))) << " ";

//     cout << ((a > 30) || (b > 30));

//     return 0;
// }

// Problem 22
int main()
{
    double x, y;
    cin >> x >> y;

    cout << (y * 30.48 > x) << endl;

    return 0;
}