#include <iostream>
using namespace std;

// Problem 1
// int main()
// {
//     int intNumber = 21;
//     cout << "Value of Integer is " << intNumber << ". Size is " << sizeof(intNumber) << " bytes" << endl;

//     float floatNumber = 3.14f;
//     cout << "Value of Float is " << floatNumber << ". Size is " << sizeof(floatNumber) << " bytes" << endl;

//     double doubleNumber = 45.1234;
//     cout << "Value of Double is " << doubleNumber << ". Size is " << sizeof(doubleNumber) << " bytes" << endl;

//     bool isAlive = true;
//     cout << "Value of Boolean is " << isAlive << ". Size is " << sizeof(isAlive) << " bytes" << endl;

//     char charName = 'A';
//     cout << "Value of Character is " << charName << ". Size is " << sizeof(charName) << " bytes" << endl;

//     return 0;
// }

// Problem 2
// int main()
// {
//     string name = "Elbek Damirov";
//     int id = 250197;
//     string favouriteSong = "Tame Impala - Let It Happen";
//     string favouriteMovie = "Breaking Bad";

//     cout << name << endl;
//     cout << id << endl;
//     cout << favouriteSong << endl;
//     cout << favouriteMovie << endl;
// }

// Problem 3
// int main()
// {
//     cout << "\"I'm standing \" on the edge of some crazy cliff.\nWhat I have to do, I have to catch everybody\\\n  if they start to go over the cliff—I mean\\\n   \\if they\'re running and they don't look\n   where they're going I have to come out\n   from somewhere and\tcatch them." << endl;
//     return 0;
// }

// Problem 4
// int main()
// {
//     int a;
//     char b;

//     cout << "a: ";
//     cin >> a;
//     cout << "b: ";
//     cin >> b;

//     float val1 = a / 3.0;
//     int val2 = (int)b;
//     float val3 = (a + val2) / 5;
//     char val4 = b + (a / 10 - 1);

//     cout << val1 << " " << val2 << " " << val3 << " " << val4 << " " << endl;

//     return 0;
// }

// Problem 5
// int main()
// {
//     int num1 = 44;
//     int num2 = 12;
//     int sum = num1 + num2;
//     int product = num1 * num2;

//     cout << "Sum= " << sum << endl;
//     cout << "Product= " << product << endl;

//     return 0;
// }

// Problem 6
// int main()
// {
//     int value1, value2;
//     cout << "Enter value1: ";
//     cin >> value1;
//     cout << "Enter value2: ";
//     cin >> value2;
//     int sum = value1 + value2;
//     cout << "Sum: " << value1 << " + " << value2 << " = " << sum << endl;
//     return 0;
// }

// Problem 7
// int main()
// {

//     int x, y;
//     cout << "Enter x: ";
//     cin >> x;
//     cout << "Enter y: ";
//     cin >> y;

//     float t = (3.f * (x * x + 3.f)) / (y / 4.f + 3.f);
//     cout << "t= " << t << endl;

//     return 0;
// }

// Problem 8
// int main()
// {
//     float diameter;
//     cout << "Enter diameter: ";
//     cin >> diameter;
//     float radius = diameter / 2;
//     const float PI = 3.14159;
//     float area = 4 * PI * radius * radius;
//     cout << "Area: " << area << endl;
// }

// Problem 9
// int main(){
//     float v0, v1, t;
//     cout << "Enter v0: ";
//     cin >> v0;
//     cout << "Enter v1: ";
//     cin >> v1;
//     cout << "Enter t: ";
//     cin >> t;
//     float a = (v1 - v0) / t;
//     cout << "Average acceleration: " << a << endl;
//     return 0;
// }

// Problem 10
// int main()
// {
//     float distance, fuel_efficiency, price_per_gallon;
//     cout << "Enter distance (miles): ";
//     cin >> distance;
//     cout << "Enter fuel efficiency (miles per gallon): ";
//     cin >> fuel_efficiency;
//     cout << "Enter price per gallon: ";
//     cin >> price_per_gallon;
//     float total_cost = (distance / fuel_efficiency) * price_per_gallon;
//     cout << "Total cost of driving: $" << total_cost << endl;
// }