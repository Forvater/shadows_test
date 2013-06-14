#include <string.h>
#include "processing.h"

const int number_of_photo_receivers = 10;

int main() {
  unsigned char a[number_of_photo_receivers];
  memset(a, 0, (sizeof(unsigned char) * number_of_photo_receivers));
  a[0] = 1;
  a[1] = 0;
  a[2] = 0;
  a[3] = 1;
  a[4] = 1;
  a[5] = 1;
  a[6] = 0;
  a[7] = 1;
  a[8] = 1;
  a[9] = 0;
  process_array(a, number_of_photo_receivers);


  return 0;
}