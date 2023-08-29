#include <stddef.h>

const int *binary_search(int value, const int *arr, size_t length){
    int rvalue = (int)value;
    rvalue += 1;
    int i =((length-1)/2);
    
    while (arr[i] != rvalue){
        return 0;
        }
    
    /*
    int Upper = length-1;
  int Lower = 0;
  int i =((length-1)/2);
  while (arr[i] != value) {
    if (arr[i] > value) {
      Upper = i;
      i = (Upper-Lower)/2;
    } else {
      Lower = i;
      i = (Upper-Lower)/2;
    }
  } 
return (const int*)i; */
    return 0;
}
