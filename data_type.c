// Data type in C
# include <stdio.h>
# include <limits.h>
# include <stdint.h>


int main(int argc, char *argv[]) {
  // Name Size(bytes) Min Value Max Value Capacity

  // Signed Char, byte
  printf("int8_t Size: %lu Min value: %d Max value: %d Capacity: %d\n", sizeof(int8_t), SCHAR_MIN, SCHAR_MAX, 1<<8);
  // Unsigned Char, byte
  printf("uint8_t Size: %lu Min value: %d Max value: %d Capacity: %d\n", sizeof(uint8_t), 0, UCHAR_MAX, 1<<8);
  // Signed Short, word
  printf("int16_t Size: %lu Min value: %d Max value %d Capacity: %d\n", sizeof(int16_t), SHRT_MIN, SHRT_MAX, 1<<16);
  // Unsigned Short, word
  printf("uint16_t Size: %lu Min value: %d Max value: %d Capacity: %d\n", sizeof(uint16_t), 0, USHRT_MAX, 1<<16);
  // Signed 32 Integer, double words, dwods
  printf("int32_t Size: %lu Min value: %d Max value: %d Capacity: %ld\n", sizeof(int32_t), INT_MIN, INT_MAX, 1l<<32);
  // Unsigned 32 Integer, double words, dwods
  printf("uint32_t Size: %lu Min value: %d Max value: %ld Capacity: %ld\n", sizeof(uint32_t), 0, UINT_MAX, 1l<<32);
  // nsigned 64 Integer, double words, dwods
  printf("int64_t Size: %ld Min value: %ld Max value: %ld Capacity: %s\n", sizeof(int64_t), LONG_MIN, LONG_MAX, "18446744073709551616");
  // Unsigned 64 Integer, double words, dwods
  printf("uint64_t Size: %lu Min value: %d Max value: %lu Capacity: %s\n", sizeof(int64_t), 0, ULONG_MAX, "18446744073709551616");
  // Float (imprecise but infinite range)
  printf("float %lu -inf inf\n", sizeof(float));
  // Double
  // Float imprecision
  printf("double %lu -inf inf\n", sizeof(double));
  float f = 0.0;
  for(int i = 0; i <10; i++) {
    f += 0.1;
  }
  printf("%.15f\n", f);

  return 0;
}
