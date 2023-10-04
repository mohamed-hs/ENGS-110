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
     int x[n]; // Here we create an array that holds integers, of size n
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

void reverse_array(int t){
	
     int n = t;
     int x[n]; // Here we create an array that holds integers, of size n
     int y[n];
     for(int i = 0; i < n; i++){
          int j = 0;
          printf("Element - %d: ", i);
          scanf("%d", &j);
          x[i] = j; // store elements from index 0 --> n
	  y[(n-1)-i] = j; //store elemnts from index n --> 0
	  // Note: we can do this since the array has an initially set
	  // size, and we are accessing existing indeces, otherwise we
	  // would get a pretty error....dont believe me? well try then
     }

     printf("Elements in the array are: ");
     for(int i = 0; i < n; i++){
        printf("%d ", x[i]);
     }
     printf("\n");

     printf("Elements in the reversed array are: ");
     
     for(int i = 0; i < n; i++){
        printf("%d ", y[i]);
     }
     printf("\n");  


}


void sum_el_array(int t){

     int n = t;
     int sum = 0;
     int x[n]; // Here we create an array that holds integers, of size n
     for(int i = 0; i < n; i++){
          int j = 0;
          printf("Element - %d: ", i);
          scanf("%d", &j);
          x[i] = j;
     }
    
     for(int i = 0; i < n; i++){
        sum += x[i];
     }

     printf("Sum of the elements in the array is: %d", sum);
     printf("\n");

}




int main(){
     int p = 0;
     
     printf("Please choose what problem to access:\n 1 - Write a program in C to store elements in an array and print them. \n 2 - Write a program in C to read n number of values in an array and display them in reverse order.\n 3 - Write a program in C to find the sum of all elements of the array.\n ----> ");
     
     scanf("%d", &p);

     int t = 0;
     
     printf("Please choose the length of your array: ");
     
     scanf("%d", &t);

     switch(p){ // flip flip
     
	case 1:{
	     store(t);
	break;

	case 2:{
	     reverse_array(t);
	}
	break;

	case 3:{
	     sum_el_array(t); // sum_el_array is his formal name, 
			      // in the streets of Mexico, they call 
			      // him el gran rayo!	
	}
	break;
     }
     return 0;
}
}
