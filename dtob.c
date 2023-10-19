#include <stdio.h>
#include <stdlib.h>

int main()
{

     int ans[64],x,i; // Here we initialise our array where we
		      // will store our binary units, it is of size 64
		      // since we will be accepting a maximum of 64bit numbers 
		      // x is our input decimal number
		      // i is our counter variable
		      //
     scanf("%d", &x);

     for(i = 0; x > 0; i++){
     
     ans[i] = x % 2; // Here we check if the number is divisible by 2
		     // meaning that if it is divisible by 2, we will have
		     // ans[i] = 1, else we will have ans[i] = 0
		     // and hence have a sequence of 0's and 1's
      x /= 2; //here we divide the number by two to get the nex
   
     }

     for(i = i - 1; i >= 0; i--){ // Since we have stored the 
				  // elements in reverse, we have to iterate
				  // through them backwards
     printf("%d", ans[i]);
     }

     printf("\n");
     return 0;
}
