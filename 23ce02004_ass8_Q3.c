#include <stdio.h>

void reverse_array(int arr[], int size) {
  int *left = arr;     
  int *right = arr + size - 1; 

  while (left < right) {
  
    int temp = *left;
    *left = *right;
    *right = temp;

    left++;  
    right--; 
  }
}

int main() {
int size;
scanf("%d",&size);
int arr[size];
for (int i = 0; i < size; i++) {
    scanf("%d ", arr[i]);
  }

  printf("Original array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  reverse_array(arr, size);

  printf("\nReversed array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
