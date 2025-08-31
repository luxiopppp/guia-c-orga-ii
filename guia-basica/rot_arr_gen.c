#include <stdio.h>

void rotate_left_by_d(int arr[], int n, int d) {
  for (int i = 0; i < d; i++) {
  
    int first = arr[0];
    for (int j = 0; j < n; j++) {
      arr[j] = arr[j+1];
    }
    arr[n-1] = first;
  }
}

int main()
{
  int arr[] = {1,2,3,4};
  int n = sizeof(arr) / sizeof(arr[0]);

  rotate_left_by_d(arr, n, 2);

  printf("[%d, %d, %d, %d]\n", arr[0], arr[1], arr[2], arr[3]);

  return 0;
}
