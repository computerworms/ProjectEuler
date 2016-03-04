/*
ProjectEuler Even Fibonacci numbers
*/


int main()
{
  int x = 0;
  int y = 1;
  int z;
  int toplam= 0;

  do {
    z = x + y;
    x = y;
    y = z;
    if (y % 2 == 0) toplam += y;
  } while (y <= 4000000); /
   printf("%d", toplam);
   return 0 ;
}
