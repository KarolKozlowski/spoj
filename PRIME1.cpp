#include <cstdlib>
#include <stdio.h>
#include <cmath>

void do_sieve(int from, int to);

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);

  do
  {
    int m, n;

    scanf("%d %d", &m, &n );

    do_sieve(m,n);

  } while (--t);

  return EXIT_SUCCESS;
}

void do_sieve(int from, int to)
{
  int tab[ to - from ];

  for (int i = 0; i <= to - from; i++)
    tab[i] = i + from;

  if ( from == 1 )
    tab[0] = 0;

  int limit = sqrt(to);
  for (int i = 2; i <= limit; i++)
  {
    for ( int j = 2 * i > from - (from % i) - i ? 2 * i : from - (from % i) - i  ; j <= to; j+=i)
      if ( j - from >= 0 )
        tab[ j - from ] = 0;
  }

  for (int i = 0; i <= to - from; i++)
    if ( tab[i] != 0 )
      printf("%d\n", tab[i]);

}


