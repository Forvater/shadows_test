#ifndef PROCESSING_H
#define PROCESSING_H

struct shadow {
  unsigned int start;
  unsigned int end;
};

void process_array(const unsigned char* buff, const unsigned int number_of_photo_receivers);

#endif
