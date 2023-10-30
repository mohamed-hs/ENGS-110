#include <stdio.h>
#include <stdlib.h>

void array_remove(int array[],int index, int n)
{
     for(int i = index - 1; i < n - 1; i++)
     {
          array[i] = array[i + 1];
     } // This function basically skips the element with position (index)
     
     n--;

     for(int i = 0; i < n; i++)
     {
          printf("%d ", array[i]); //We then print the array yay
     }
     printf("\n");

}


void array_insert(int array[],int index,int n, int nu)
{
     int new_array[n+1];
     int x = nu;
     for(int i = 0, j = 0; i < n, j < n + 1; i++,j++){ 
	     //This function basically iterates through both arrays adding elemnts to the new array, once we meet the desired index, we add the new number (nu)
          if(j == index-1){
	  new_array[j] = nu; 
	  i -= 1;
	  }
	  else{
	  new_array[j] = array[i];
	  }
     }
     for(int i = 0; i < n + 1; i++){
          printf("%d ", new_array[i]);
     }// Again print yay
     printf("\n");
}


int main(){

//Recieve array using malloc, pass the pointer to the desired function using 
//switch case, passing index with input or recieving inout during function,
//editing the array accordingly and printing the results

     int o, n, x, index;
     int* array;
     printf("Enter size of your array: ");
     scanf("%d", &n);

     array = (int*) malloc(n * sizeof(int));


     for(int i = 0; i < n; i++){
        scanf("%d", &x);
	array[i] = x;
     }

   /*  for(int i = 0; i < n; i++){
     printf("%d ",array[i]);
     } */

     printf("Please enter your preferred operation:\n 1 - Remove an element\n 2 - Insert an elemnt\n----> ");
     scanf("%d", &o);

     printf("Choose the index: ");
     scanf("%d", &index);

     switch(o){
	     case 1:
		 array_remove(array, index, n);    
             break;

	     case 2:
	        //printf("Under development :)");
		int nu;
		printf("Enter the number you desire to insert: ");
		scanf("%d", &nu);
	        array_insert(array, index, n, nu);
             break;
             default:
	          printf("Error: invalid input");
     }

     free(array);
     //printf("\n");

return 0;
}
