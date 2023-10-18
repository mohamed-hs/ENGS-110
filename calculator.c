#include <stdio.h>
#include <stdlib.h>

void amazing_calculator(int a, int b, char op){

     int ans = 0;
     
     switch(op){
     
     	case '+':
	ans = a + b;
	printf(" %d + %d = %d \n",a,b,ans);
     	break;

	case '-':
	ans = a - b;
	printf(" %d - %d = %d \n",a,b,ans);
	break;

	case '*':
        ans = a * b;
        printf(" %d * %d = %d \n",a,b,ans);
        break;

	case '/':
        double c = a / b;
        printf(" %d / %d = %f \n",a,b,c);
        break;

	default:
	printf("Error: invalid operator");
     
     }
}


int main(){
     
     int a = 0;
     int b = 0;
     char op;
     int t = 0;

     while(!t){
	  int x = 0;   
	  printf("Enter number 1: ");
	  scanf("%d", &a);
	  printf("Enter number 2: ");
          scanf("%d", &b);
	  printf("Choose one of the operators: +, -, *, /\n-----> ");
	  scanf(" %c", &op);
          amazing_calculator(a, b, op);
	  printf("If you wish to stop, enter -1\n");
	  scanf("%d", &x);
	  if(x == -1) t = 1;
     }

     return 0;
}
