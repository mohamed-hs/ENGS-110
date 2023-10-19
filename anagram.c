#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
     int n;
     printf("Enter the size of your strings (they must be equal): ");
     scanf("%d", &n);

     char* s1;
     char* s2;

     s1 = malloc(n+1);
     s2 = malloc(n+1);

     printf("Enter string 1: ");
     scanf("%s", s1);
     printf("Enter string 2: ");
     scanf("%s", s2);

     int i,j,chk = 0, tr = 0;
     int size = strlen(s1);

     for(i = 0; i < size; i++){
     
          for(j = 0; j < size; j++){
	  
	       if(s1[i] == s2[j]){
		  chk = 1;
		  tr = 1;
	       }
	       else chk = 0;
	  }

	  if(chk == 0){
		  tr = 0; 
		  break;
	  }
     }

     if(tr) printf("Yay anagram\n");
     else printf("Awhuhwhee\n");

     free(s1);
     free(s2);

}
