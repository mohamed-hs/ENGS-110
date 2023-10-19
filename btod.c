#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
     char* b;
     int i, dec, n;

     printf("Enter size of binary number: ");
     
     scanf("%d", &n);

     b = malloc(n+1);
  
     scanf("%s", b);
  
     //printf("String b = %s\n", b);

     int sb = strlen(b);
     
     //printf("size of b = %d\n", sb);

     for(i = 0; i < sb; i++){
     
          if(b[i] == '1') dec = dec + pow(2, (sb - i - 1));
     
     }
     
     printf("%d\n", dec);

     free(b);

     return 0;
}
