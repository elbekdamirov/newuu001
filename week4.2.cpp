#include <iostream>
using namespace std;
#include <cmath>

// Problem 12
// int main()
// {
//     int angle1, angle2, angle3;

//     cout << "Enter three angles of a triangle:";
//     cin >> angle1 >> angle2 >> angle3;

//     if (angle1 + angle2 + angle3 == 180)
//         cout << "The triangle is valid." << endl;
//     else
//         cout << "The triangle is not valid." << endl;

//     return 0;
// }

// Problem 13
// int main()
// {
//     double a, b, c;
//     cout << "Enter a/b/c" << endl;
//     cin >> a >> b >> c;

//     double d = b * b - 4 * a * c;
//     if (d > 0)
//     {
//         double x1 = (-b + sqrt(d)) / (2 * a);
//         double x2 = (-b - sqrt(d)) / (2 * a);
//         cout << "x1: " << x1 << " x2: " << x2 << endl;
//     }
//     else if (d == 0)
//     {
//         double x = -b / (2 * a);
//         cout << "x: " << x << endl;
//     }
//     else
//     {
//         cout << "No real roots." << endl;
//     }
// }

// Problem 14
// int main()
// {
//     char character;
//     cout << "Enter a character: ";
//     cin >> character;

//     if (character >= 'A' && character <= 'Z')
//     {
//         cout << character << " is an Uppercase alpabet" << endl;
//     }
//     else if (character >= 'a' && character <= 'z')
//     {
//         cout << character << " is a Lowercase alphabet" << endl;
//     }
//     else
//     {
//         cout << character << " is not an alphabet" << endl;
//     }

//     return 0;
// }

// Problem 15
// int main()
// {
//     double weight1, weight2, price1, price2;

//     cout << "Enter weight and price for package 1: ";
//     cin >> weight1 >> price1;

//     cout << "Enter weight and price for package 2: ";
//     cin >> weight2 >> price2;

//     double unitPrice1 = weight1 / price1;
//     double unitPrice2 = weight2 / price2;

//     if (unitPrice1 > unitPrice2)
//     {
//         cout << "Package 2 has a better price." << endl;
//     }
//     else if (unitPrice1 < unitPrice2)
//     {
//         cout << "Package 1 has a better price." << endl;
//     }
//     else
//     {
//         cout << "Both packages have the same price." << endl;
//     }

//     return 0;
// }

// Problem 16
// int main()
// {
//     int num;
//     cout << "Enter a 3-digit number: ";
//     cin >> num;

//     int first = num / 100;
//     int last = num % 10;

//     if (first == last)
//         cout << "Palindrome number" << endl;
//     else
//         cout << "Not a palindrome" << endl;

//     return 0;
// }

// Problem 17
// int main()
// {

//     char ch;
//     cout << "Enter one laguange (u, e, r, g): ";
//     cin >> ch;

//     switch (ch)
//     {
//     case 'u':
//         cout << "Assalomu aleykum" << endl;
//         break;
//     case 'e':
//         cout << "Hello" << endl;
//         break;
//     case 'r':
//         cout << "Здравствуйте" << endl;
//         break;
//     case 'g':
//         cout << "Halo" << endl;
//         break;
//     default:
//         cout << "Unknown Language" << endl;
//         break;
//     }

//     return 0;
// }

// Problem 18
// int main()
// {
//     double x, y;
//     cout << "Enter x and y coordinates: ";
//     cin >> x >> y;

//     double distanceSquared = x * x + y * y;
//     int r = 10;

//     if (distanceSquared < r * r)
//         cout << "Point is inside the circle." << endl;
//     else if (distanceSquared == r * r)
//         cout << "Point is on the circle." << endl;
//     else
//         cout << "Point is outside the circle." << endl;

//     return 0;
// }

// Problem with no number
// int main()
// {

//     double gpa;
//     cout << "Enter you GPA: ";
//     cin >> gpa;

//     switch (int(gpa * 10))
//     {
//     case 40 ... 45:
//         cout << "You got 80% scholarship" << endl;
//         break;
//     case 35 ... 39:
//         cout << "You got 60% scholarshop" << endl;
//         break;
//     case 30 ... 34:
//         cout << "You got 50% scholarshop" << endl;

//     default:
//         cout << "You are not eligible for scholarship" << endl;
//         break;
//     }

//     return 0;
// }

// Problem 19
// int main()
// {
//     int today, daysAfter;
//     cout << "Enter today's day (0=Sunday, 1=Monday, ..., 6=Saturday): ";
//     cin >> today;
//     cout << "Enter number of days after today: ";
//     cin >> daysAfter;
//     int futureDay = (today + daysAfter) % 7;
//     cout << "Today is ";
//     switch (today)
//     {
//     case 0:
//         cout << "Sunday";
//         break;
//     case 1:
//         cout << "Monday";
//         break;
//     case 2:
//         cout << "Tuesday";
//         break;
//     case 3:
//         cout << "Wednesday";
//         break;
//     case 4:
//         cout << "Thursday";
//         break;
//     case 5:
//         cout << "Friday";
//         break;
//     case 6:
//         cout << "Saturday";
//         break;
//     default:
//         cout << "Invalid day";
//         return 0;
//     }

//     cout << " and the future day is ";

//     switch (futureDay)
//     {
//     case 0:
//         cout << "Sunday";
//         break;
//     case 1:
//         cout << "Monday";
//         break;
//     case 2:
//         cout << "Tuesday";
//         break;
//     case 3:
//         cout << "Wednesday";
//         break;
//     case 4:
//         cout << "Thursday";
//         break;
//     case 5:
//         cout << "Friday";
//         break;
//     case 6:
//         cout << "Saturday";
//         break;
//     }

//     cout << endl;
//     return 0;
// }

// Problem 20
// #include <iostream>
// using namespace std;

// int main()
// {
//     double weight;
//     cout << "Enter weight of package (kg): ";
//     cin >> weight;

//     if (weight <= 0)
//     {
//         cout << "Invalid input" << endl;
//     }
//     else if (weight <= 1)
//     {
//         cout << "Shipping cost = 3500" << endl;
//     }
//     else if (weight <= 3)
//     {
//         cout << "Shipping cost = 5500" << endl;
//     }
//     else if (weight <= 10)
//     {
//         cout << "Shipping cost = 8500" << endl;
//     }
//     else if (weight <= 20)
//     {
//         cout << "Shipping cost = 10500" << endl;
//     }
//     else
//     {
//         cout << "The package cannot be shipped" << endl;
//     }

//     return 0;
// }

// Problem 21
// int main()
// {
//     int month;
//     cout << "Enter month number (1-12): ";
//     cin >> month;

//     switch (month)
//     {
//     case 1:
//         cout << "In January there is:\n";
//         cout << "- New Year, 1 January\n";
//         break;
//     case 2:
//     case 4:
//     case 6:
//     case 7:
//     case 8:
//     case 11:
//         cout << "In February, April, June, July, August, November there is no holidays.\n";
//         cout << "But there may be Ramadan Hayit or Kurban Hayit depending on the year.\n";
//         break;
//     case 3:
//         cout << "In March there is:\n";
//         cout << "- International Women's Day, 8 March\n";
//         cout << "- Navruz, 21 March\n";
//         break;
//     case 5:
//         cout << "In May there is:\n";
//         cout << "- Memorial Day, 9 May\n";
//         break;
//     case 9:
//         cout << "In September there is:\n";
//         cout << "- Independence Day, 1 September\n";
//         break;
//     case 10:
//         cout << "In October there is:\n";
//         cout << "- Teacher's and Mentor's Day, 1 October\n";
//         break;
//     case 12:
//         cout << "In December there is:\n";
//         cout << "- Constitution Day, 8 December\n";
//         break;
//     default:
//         cout << "Invalid month number!\n";
//     }

//     return 0;
// }
