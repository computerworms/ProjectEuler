#include <stdio.h>

int main()
{
  int toplam = 0;

  for(int i=0 ; i<1000 ; i++)
  {
    if(i%3==0 || i%5==0) toplam = toplam + i;

  }

  printf(" toplam: %i\n", toplam );

  return 0;
}
