#include <cstdio>

int main(){

   int x {0}, y {1}; 

   printf( "%d ", y );

  /* part of the compiler */
   y = __sync_val_compare_and_swap(&x, x, y);

   printf( "%d ", y );

   return 0;

}

