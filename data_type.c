// Data type in C
# include <stdio.h>
# include <limits.h>
# include <stdint.h>


int main(int argc, char *argv[]) {
  // Name Size(bytes) Min Value Max Value Capacity

  // Signed Char, byte
  printf("Signed char (int8_t) Size: %lu byte - Min value: %d Max value: %d - Capacity: %d\n\n", sizeof(int8_t), SCHAR_MIN, SCHAR_MAX, 1<<8);

  // Unsigned Char, byte
  printf("Unsigned char (uint8_t) Size: %lu byte - Min value: %d Max value: %d - Capacity: %d\n\n", sizeof(uint8_t), 0, UCHAR_MAX, 1<<8);

  // Signed Short, word
  printf("Signed short (int16_t) Size: %lu bytes - Min value: %d Max value %d - Capacity: %d\n\n", sizeof(int16_t), SHRT_MIN, SHRT_MAX, 1<<16);

  // Unsigned Short, word
  printf("Unsigned short (uint16_t) Size: %lu bytes - Min value: %d Max value: %d - Capacity: %d\n\n", sizeof(uint16_t), 0, USHRT_MAX, 1<<16);

  // Signed 32 Integer, double words, dwods
  printf("Signed int (int32_t) Size: %lu bytes - Min value: %d Max value: %d - Capacity: %ld\n\n", sizeof(int32_t), INT_MIN, INT_MAX, 1l<<32);

  // Unsigned 32 Integer, double words, dwods
  printf("Unsigned int (uint32_t) Size: %lu bytes - Min value: %d Max value: %ld - Capacity: %ld\n\n", sizeof(uint32_t), 0, UINT_MAX, 1l<<32);

  // Signed 64 Integer, double words, dwods
  printf("Signed long long int (int64_t) Size: %ld bytes - Min value: %ld Max value: %ld - Capacity: %s\n\n", sizeof(int64_t), LONG_MIN, LONG_MAX, "18446744073709551616");

  // Unsigned 64 Integer, double words, dwods
  printf("Unsigned long long int (uint64_t) Size: %lu bytes - Min value: %d Max value: %lu - Capacity: %s\n\n", sizeof(int64_t), 0, ULONG_MAX, "18446744073709551616");

  // Single Precision Float (imprecise but infinite range)
  printf("Single Precision float Size: %lu bytes - range -3.4E38 .. 3.4E38\n\n", sizeof(float));
  // Double Precision Float
  printf("Double Precision float Size: %lu bytes - range -1.7E308 .. 1.7E308\n\n", sizeof(double));

  
  // Float imprecision
  float f = 0.0;
  for(int i = 0; i <10; i++) {
    f += 0.1;
  }
  printf("%.15f\n", f);

  return 0;
}
