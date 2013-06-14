#include "processing.h"
#include <string.h>

void process_array(const unsigned char* buff, const unsigned int number_of_photo_receivers) {

  bool in_shadow = false;
  unsigned int number_of_found_shadows = 0;
  shadow* shad = new shadow[number_of_photo_receivers];
  memset(shad, 255, (sizeof(shadow) * number_of_photo_receivers));

  for (int i = 0; i < number_of_photo_receivers; i++) {
    if (buff[i] == 1) {
      if (in_shadow == false) {
        in_shadow = true;
        shad[number_of_found_shadows].start = i;
      }
    } else if (buff[i] == 0) {
      if (in_shadow == true) {
        in_shadow = false;
        shad[number_of_found_shadows].end = i-1;
        number_of_found_shadows++;
      }
    }
  }

  delete[] shad;
}


