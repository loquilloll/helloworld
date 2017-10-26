#include <stdint.h>
#include <stdio.h>

int main(void)
{
  uint16_t addr;
  addr = 0x00ff;
    printf("value is %hu\n", addr);
  addr = (addr >> 8);
    printf("value is %hu\n", addr);
  addr = (addr & 0xff);
    printf("value is %hu\n", addr);
    return 0;
}
