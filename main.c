#include <stdio.h>
#include <stdlib.h>

int printArray(int* arr, int size){
  printf("[");
  for(int i = 0; i<size-1; i++){
    printf("%d, ",arr[i]);
  }
  printf("%d", arr[size-1]);
  printf("]");
  return 0;
}

int* buildArray(int k, int value){
  int* array_start;
  int int_size = sizeof(int); //size of int in bytes
  array_start = (int*) malloc(k*int_size);
  for(int i =0; i<k; i++){
    array_start[i] = value;
  }
  printArray(array_start, k);
  return array_start;

}




int main(void) {
  buildArray(5, 0);
  return 0;
}