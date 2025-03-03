#include <iostream>
using namespace std;
int isBalanced(int a[], int len){
for(int i = 0; i<len; i++){
if(i % 2 == 0 && a[i] % 2 != 0){
return 0;
}
else if(i % 2 != 0 && a[i] % 2 == 0){
return 0;
}
}
return 1;
}
int main(){
int arr1[] = {2, 3, 6, 7};
int arr2[] = {6, 3, 2, 7};
int arr3[] = {6, 7, 2, 3, 12};
int arr4[] = {6, 7, 2, 3, 14, 95};
int arr5[] = {7, 15, 2, 3};
int arr6[] = {16, 6, 2, 3};
int arr7[] = {2};
int arr8[] = {3};
int arr9[] = {};


cout << "array 1 is: " <<isBalanced(arr1, 4) <<endl;
cout << "array 2 is: " <<isBalanced(arr2, 4) <<endl;

cout << "array 3 is: " <<isBalanced(arr3, 5) <<endl;
cout << "array 4 is: " <<isBalanced(arr4, 6) <<endl;
cout << "array 5 is: " <<isBalanced(arr5, 4) <<endl;
cout << "array 6 is: " <<isBalanced(arr6, 4) <<endl;
cout << "array 7 is: " <<isBalanced(arr7, 1) <<endl;
cout << "array 8 is: " <<isBalanced(arr8, 1) <<endl;
cout << "array 9 is: " <<isBalanced(arr9, 0)<< endl;
return 0;
}