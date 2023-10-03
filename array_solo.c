/* Welcome to my version of solutions to the first 10 questions of the link below:
 *
 * https://www.w3resource.com/c-programming-exercises/array/index.php
 *
 * I hope you feel fantastic; if not, this code will make your hair stand and your jaw do a backflip!
 *
 *
 * */

// Libraries first, they said...


#include <stdio.h>

void store(int t){
  
     int n = t;
     int x[n];
     for(int i = 0; i < n; i++){
          int j = 0;
	  printf("Element - %d: ", i);
	  scanf("%d", &j);
	  x[i] = j;
     }
     printf("Elements in the array are: ");
     for(int i = 0; i < n; i++){
     	printf("%d ", x[i]);
     }
     printf("\n");

}






int main(){
     int p = 0;
     printf("Please choose what problem to access:\n 1 - Write a program in C to store elements in an array and print them. \n 2 - Write a program in C to read n number of values in an array and display them in reverse order.\n 3 - Write a program in C to find the sum of all elements of the array.\n ----> ");
     scanf("%d", &p);

     switch(p){
     
	case 1:{
	int t = 0;
	printf("Please choose the length of yout array: ");
	scanf("%d", &t);
	store(t);
	}
     	break;

	//case 2{
	
//	}
	//break;

	//case 3{
	
//	}
	//break;
     //}
     return 0;
}
}
