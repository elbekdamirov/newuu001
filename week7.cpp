#include <iostream>
using namespace std;

// ===========================================================================//
//  Problem 5: Simple Banking System

// void deposit(double &balance)
// {
//     double amount;
//     cout << "Enter deposit amount: ";
//     cin >> amount;

//     if (amount <= 0)
//     {
//         cout << "Invalid amount!" << endl;
//         return;
//     }

//     balance += amount;
//     cout << "Deposited: $" << amount << endl;
// }

// void withdraw(double &balance)
// {
//     double amount;
//     cout << "Enter withdrawal amount: ";
//     cin >> amount;

//     if (amount <= 0)
//     {
//         cout << "Invalid amount!" << endl;
//         return;
//     }

//     if (amount > balance)
//     {
//         cout << "Insufficient balance!" << endl;
//     }
//     else
//     {
//         balance -= amount;
//         cout << "Withdrew: $" << amount << endl;
//     }
// }

// void checkBalance(double balance)
// {
//     cout << "Current balance: $" << balance << endl;
// }

// int main()
// {
//     double balance = 500.0;
//     char option;

//     do
//     {
//         cout << "======= Simple Banking System =======\n";
//         cout << "1. Deposit\n";
//         cout << "2. Withdraw\n";
//         cout << "3. Check Balance\n";
//         cout << "4. Exit\n\n";

//         cout << "Choose an option: ";
//         cin >> option;

//         switch (option)
//         {
//         case '1':
//             deposit(balance);
//             break;

//         case '2':
//             withdraw(balance);
//             break;

//         case '3':
//             checkBalance(balance);
//             break;

//         case '4':
//             cout << "Exiting program...\n";
//             break;

//         default:
//             cout << "Invalid option. Please try again.\n";
//         }

//         cout << endl;

//     } while (option != '4');

//     return 0;
// }

// ===========================================================================//
//  Problem 6: Movie Ticket Booking System

// double calculateTotal(double price, int tickets)
// {
//     return price * tickets;
// }

// int main()
// {
//     char option;
//     int tickets;
//     double total;
//     double allTotal = 0.0;
//     double price;
//     char choice;

//     do
//     {
//         cout << "====== Movie Ticket Booking System ======\n";
//         cout << "1. Interstellar - $8\n";
//         cout << "2. Inception - $10\n";
//         cout << "3. Fight Club - $12\n";
//         cout << "4. Exit\n\n";

//         cout << "Select a movie (1-3): ";
//         cin >> option;

//         switch (option)
//         {
//         case '1':
//             price = 8.0;
//             cout << "Enter number of tickets: ";
//             cin >> tickets;
//             total = calculateTotal(price, tickets);
//             allTotal += total;
//             cout << "Total cost: $" << total << endl;
//             break;

//         case '2':
//             price = 10.0;
//             cout << "Enter number of tickets: ";
//             cin >> tickets;
//             total = calculateTotal(price, tickets);
//             allTotal += total;
//             cout << "Total cost: $" << total << endl;
//             break;

//         case '3':
//             price = 12.0;
//             cout << "Enter number of tickets: ";
//             cin >> tickets;
//             total = calculateTotal(price, tickets);
//             allTotal += total;
//             cout << "Total cost: $" << total << endl;
//             break;

//         case '4':
//             cout << "Exiting system..." << endl;
//             cout << "Total amount for all bookings: $" << allTotal << endl;
//             return 0;

//         default:
//             cout << "Invalid selection! Please choose 1-3." << endl;
//         }

//         cout << "\nWould you like to book another movie? (y/n): ";
//         cin >> choice;

//         cout << endl;

//     } while (choice == 'y' || choice == 'Y');

//     cout << "Thank you for using the Movie Ticket Booking System!" << endl;
//     cout << "Total amount for all bookings: $" << allTotal << endl;

//     return 0;
// }

// ===========================================================================//
//  Problem 7: Car Parking Fee Calculator

// double calculateFee(int hours)
// {
//     double fee = 0;

//     if (hours <= 2)
//     {
//         fee = 0;
//     }
//     else if (hours <= 5)
//     {
//         fee = (hours - 2) * 2;
//     }
//     else
//     {
//         fee = (3 * 2) + (hours - 5) * 5;
//     }

//     return fee;
// }

// int main()
// {
//     int hours;
//     char choice;

//     while (true)
//     {
//         cout << "====== Car Parking Fee Calculator ======\n";
//         cout << "Enter number of hours parked: ";
//         cin >> hours;

//         if (hours < 0)
//         {
//             cout << "Invalid input! Hours cannot be negative.\n";
//         }
//         else
//         {
//             double fee = calculateFee(hours);
//             cout << "Fee: $" << fee << endl;
//         }

//         cout << "\nDo you want to calculate another fee? (y/n): ";
//         cin >> choice;

//         if (choice != 'y' && choice != 'Y')
//         {
//             cout << "Exiting program...\n";
//             break;
//         }

//         cout << endl;
//     }

//     return 0;
// }

// ===========================================================================//
//  Problem 8: Restaurant Billing System

// double calculateTotal(double price, int quantity)
// {
//     return price * quantity;
// }

// int main()
// {
//     int option;
//     int quantity;
//     double total = 0;
//     char choice;

//     do
//     {
//         cout << "====== Restaurant Menu ======\n";
//         cout << "1. Pizza  - $10\n";
//         cout << "2. Burger - $8\n";
//         cout << "3. Salad  - $5\n";
//         cout << "4. Exit\n\n";

//         cout << "Select an item (1-3): ";
//         cin >> option;

//         double price = 0;

//         switch (option)
//         {
//         case 1:
//             price = 10;
//             cout << "Enter quantity: ";
//             cin >> quantity;
//             total = calculateTotal(price, quantity);
//             cout << "Total Bill: $" << total << endl;
//             break;

//         case 2:
//             price = 8;
//             cout << "Enter quantity: ";
//             cin >> quantity;
//             total = calculateTotal(price, quantity);
//             cout << "Total Bill: $" << total << endl;
//             break;

//         case 3:
//             price = 5;
//             cout << "Enter quantity: ";
//             cin >> quantity;
//             total = calculateTotal(price, quantity);
//             cout << "Total Bill: $" << total << endl;
//             break;

//         case 4:
//             cout << "Exiting..." << endl;
//             return 0;

//         default:
//             cout << "Invalid choice! Please select again.\n";
//         }

//         cout << "\nWould you like to order another item? (y/n): ";
//         cin >> choice;

//         cout << endl;

//     } while (choice == 'y' || choice == 'Y');

//     cout << "Thank you for dining with us!" << endl;

//     return 0;
// }
