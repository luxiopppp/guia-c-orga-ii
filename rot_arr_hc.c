#include <stdio.h>

int main()
{
  int arr[] = {1,2,3,4};
  int n = sizeof(arr) / sizeof(arr[0]);

  int first = arr[0];
  for (int i = 0; i < 4; i++) {
    arr[i] = arr[i+1];
  }
  arr[n-1] = first;

  printf("[%d, %d, %d, %d]\n", arr[0], arr[1], arr[2], arr[3]);

  return 0;
}
