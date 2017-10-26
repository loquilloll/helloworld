#include <stdint.h>
#include <stdio.h>

int main(void)
{
  uint16_t addr;
  addr = 0xff00;
    printf("value is %04x\n", addr);
  addr = (addr >> 8);
    printf("value is %04x\n", addr);
  addr = (addr & 0xff);
    printf("value is %04x\n", addr);
    return 0;
}
