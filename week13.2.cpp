#include <iostream>
using namespace std;

// ---------------------------------------------------------------- Problem 9
// int main()
// {

//     int a = 7, b = 14, c = 21;

//     int *ptrs[3] = {&a, &b, &c};

//     for (int i = 0; i < 3; i++)
//     {
//         cout << *ptrs[i] << " ";
//     }

//     return 0;
// }

// ---------------------------------------------------------------- Problem 10
// int main()
// {
//     int arr[5] = {9, 3, 7, 1, 6};
//     int *ptr = arr;

//     for (int i = 0; i < 5 - 1; i++)
//     {
//         for (int j = 0; j < 5 - i - 1; j++)
//         {

//             if (*(ptr + j) > *(ptr + j + 1))
//             {
//                 int temp = *(ptr + j);
//                 *(ptr + j) = *(ptr + j + 1);
//                 *(ptr + j + 1) = temp;
//             }
//         }
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         cout << *(ptr + i) << " ";
//     }

//     return 0;
// }

// ---------------------------------------------------------------- Problem 11
// int main()
// {
//     const char *suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};

//     for (int i = 0; i < 4; i++)
//     {
//         cout << *(suit + i) << " ";
//     }

//     return 0;
// }

// ---------------------------------------------------------------- Problem 12
// int main()
// {
//     const char *days[3] = {"Mon", "Tue", "Wed"};

//     for (int i = 0; i < 3; i++)
//     {
//         cout << *(*(days + i) + 1) << " ";
//     }

//     return 0;
// }

// ---------------------------------------------------------------- Problem 13
// int main()
// {
//     int deck[4][13] = {0};

//     const char *suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
//     const char *ranks[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
//                            "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

//     int card = 1;
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 13; j++)
//         {
//             deck[i][j] = card++;
//         }
//     }

//     cout << ranks[0] << " of " << suits[0] << endl;
//     cout << ranks[1] << " of " << suits[3] << endl;
//     cout << ranks[11] << " of " << suits[2] << endl;

//     return 0;
// }

// ---------------------------------------------------------------- Problem 14
// int main()
// {
//     const char *deck[4][13] = {
//         {"Ace of Hearts", "Two of Hearts", "Three of Hearts", "Four of Hearts", "Five of Hearts",
//          "Six of Hearts", "Seven of Hearts", "Eight of Hearts", "Nine of Hearts", "Ten of Hearts",
//          "Jack of Hearts", "Queen of Hearts", "King of Hearts"},
//         {"Ace of Diamonds", "Two of Diamonds", "Three of Diamonds", "Four of Diamonds", "Five of Diamonds",
//          "Six of Diamonds", "Seven of Diamonds", "Eight of Diamonds", "Nine of Diamonds", "Ten of Diamonds",
//          "Jack of Diamonds", "Queen of Diamonds", "King of Diamonds"},
//         {"Ace of Clubs", "Two of Clubs", "Three of Clubs", "Four of Clubs", "Five of Clubs",
//          "Six of Clubs", "Seven of Clubs", "Eight of Clubs", "Nine of Clubs", "Ten of Clubs",
//          "Jack of Clubs", "Queen of Clubs", "King of Clubs"},
//         {"Ace of Spades", "Two of Spades", "Three of Spades", "Four of Spades", "Five of Spades",
//          "Six of Spades", "Seven of Spades", "Eight of Spades", "Nine of Spades", "Ten of Spades",
//          "Jack of Spades", "Queen of Spades", "King of Spades"}};

//     const char *flatDeck[52];
//     int k = 0;
//     for (int i = 0; i < 4; i++)
//         for (int j = 0; j < 13; j++)
//             flatDeck[k++] = deck[i][j];

//     srand(time(0));

//     for (int i = 51; i > 0; i--)
//     {
//         int j = rand() % (i + 1);
//         const char *temp = flatDeck[i];
//         flatDeck[i] = flatDeck[j];
//         flatDeck[j] = temp;
//     }

//     for (int i = 0; i < 52; i++)
//         cout << flatDeck[i] << endl;

//     return 0;
// }
// ---------------------------------------------------------------- Problem 15
// void greet()
// {
//     cout << "Hello from greet()" << endl;
// }

// void bye()
// {
//     cout << "Goodbye from bye()" << endl;
// }

// int main()
// {
//     void (*ptrGreet)();
//     void (*ptrBye)();

//     ptrGreet = greet;
//     ptrGreet();

//     ptrBye = bye;
//     ptrBye();

//     return 0;
// }

// ---------------------------------------------------------------- Problem 16
// int add(int a, int b)
// {
//     return a + b;
// }

// int multiply(int a, int b)
// {
//     return a * b;
// }

// int main()
// {
//     int x, y;
//     cout << "Enter two numbers: ";
//     cin >> x >> y;

//     int (*fptrAdd)(int, int);
//     int (*fptrMultiply)(int, int);

//     fptrAdd = add;
//     cout << "Add: " << fptrAdd(x, y) << endl;

//     fptrMultiply = multiply;
//     cout << "Multiply: " << fptrMultiply(x, y) << endl;

//     return 0;
// }

// ---------------------------------------------------------------- Problem 17
// int add(int a, int b)
// {
//     return a + b;
// }

// int multiply(int a, int b)
// {
//     return a * b;
// }

// void calculate(int (*op)(int, int), int x, int y)
// {
//     int result = op(x, y);
//     cout << "Result: " << result << endl;
// }

// int main()
// {
//     int x, y;
//     cout << "Enter two numbers: ";
//     cin >> x >> y;

//     calculate(add, x, y);
//     calculate(multiply, x, y);

//     return 0;
// }

// ---------------------------------------------------------------- Problem 18
// int add(int a, int b)
// {
//     return a + b;
// }

// int multiply(int a, int b)
// {
//     return a * b;
// }

// int main()
// {
//     int x, y;
//     cout << "Enter two numbers: ";
//     cin >> x >> y;
//     int (*ops[])(int, int) = {add, multiply};
//     int choice;

//     cout << "Select operation: 1 = Add, 2 = Multiply: ";
//     cin >> choice;

//     if (choice == 1 || choice == 2)
//     {
//         int result = ops[choice - 1](x, y);
//         cout << "Result: " << result << endl;
//     }
//     else
//     {
//         cout << "Invalid choice!" << endl;
//     }

//     return 0;
// }