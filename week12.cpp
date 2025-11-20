#include <iostream>
using namespace std;

// ------------------------------------------------------------------- Problem 1
// int findmax(int *arr, int size) {
//     int *ptr = arr, max;
//     max = *ptr;
//     for (int i = 1; i < size; i++) {
//         if (*(ptr+i) > max) {
//             max = *(ptr+i);
//         }
//     }
//     return max;
// }
// int main() {
//     int heights[] = {150,165,172,160,180};
//     int size = sizeof(heights) / sizeof(heights[0]);
//     cout<< "Maximum height : " <<findmax(heights, size)<<endl;
//     return 0;
// }

// ------------------------------------------------------------------- Problem 2
//  int main() {
//      cout << "Enter integer: " << endl;
//      int A;
//      cin >> A;
//      cout << "Enter another integer: " << endl;
//      int B;
//      cin >> B;
//      int *ptrA=&A;
//      cout<< *ptrA<<endl;
//      int *ptrB=&B;
//      cout<< *ptrB<<endl;
//
//  }

// ------------------------------------------------------------------- Problem 3
//  int main() {
//      int n;
//      cin >> n;
//      int arr[n];
//      for (int i = 0; i < n; i++) {
//          cin >> arr[i];
//      }
//      int *max=&arr[0];
//      for(int i=0; i<n; i++) {
//           if (arr[i]>*max)
//               max=&arr[i];
//      }
//      cout<< max;
//  }

// ------------------------------------------------------------------- Problem 4
//  #define val 33.3;
//  #define number 50;
//  int a;
//  int& fun(){return a;}
//  int foo(){return a;}
//  int main(){
//      int n1=9,n2=11,*ptr_1=nullptr,*ptr_2=nullptr,k=0;
//      double t;
//      ptr_1=&n2;
//      ptr_2=&n1;
//      t=val-1;
//      fun()=number-42;
//      cout<<number<<" "<<*ptr_1+1<<" "<<t<<" "<<a<<endl;
//  }

// ------------------------------------------------------------------- Problem 5
// int main() {
//     int arr[10], *ptrA;
//     srand(time(NULL));
//     for (int i = 0; i < 10; i++) {
//         arr[i] = rand() % 100;
//     }
//     ptrA = arr;
//     for (int i = 0; i < 10; i++) {
//         cout << "Element: "<< *(ptrA+i) << "; Address: " << (ptrA+i) << endl;
//     }
// }

// ------------------------------------------------------------------- Problem 6
//  int main(){
//      int message;
//      cin >> message;
//      int* ptr=&message;
//      cout<<*ptr<<endl;
//      return 0;
//  }

// ------------------------------------------------------------------- Problem 7
//  float calculateAverage(int *arr, int size){
//      int sum = 0;
//      for(int i=0;i<size;i++)
//          sum += *(arr+i);
//      return (float)sum/size;
//  }
//  int main(){
//      int scores[] = {88, 76, 90, 85, 92};
//      int size = sizeof(scores)/sizeof(scores[0]);
//      float average = calculateAverage(scores, size);
//      cout << average;
//      return 0;
//  }

// ------------------------------------------------------------------- Problem 8
//  int main(){
//      int treasures[] = {10, 20, 30, 40, 50};
//      int *ptr = treasures;
//      ptr=treasures;
//      cout << *(ptr+sizeof(treasures)/sizeof(treasures[0])-1) << endl;
//      return 0;
//  }

// ------------------------------------------------------------------- Problem 9
//  int main(){
//      int score = 75;
//      int *ptr = &score;
//      cout << "Original score: " << *ptr << endl;
//      *ptr += 10;
//      cout << "Updated score: " << *ptr << endl;
//      return 0;
//  }

// ------------------------------------------------------------------- Problem 10
// int main() {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10}, size=sizeof(arr)/sizeof(arr[0]);
//     int *sptr = arr;
//     int *eptr = arr + (size - 1);
//     while(sptr < eptr) {
//         int temp = *sptr;
//         *sptr = *eptr;
//         *eptr = temp;
//         sptr++;
//         eptr--;
//     }
//     for(int i = 0; (i < size); i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }