/*
 * Welcome to this fun game where we try to guess eachother's IQ
 * You can either predict my IQ or I predict yours!
 * Let's not take any offense as the purpose of this is to make the assignment more fun
 * So goodluck IQ'ing :)
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h> // I wanted to implement sleep so it could feel like the console is "thinking" it didn't work tho :/


void guesser(){ // You guessed it, this is the code for when YOU have to guess my IQ

     int n = rand() % (100 + 1 - 1) + 1; // Since I am a machine, I will let my algorithms decide my IQ
					 // In this case, I'm using a random number generator
					 // The arguments are as followed (max + 1 - min) + min
					 // And this basically transaltes to generating a random number from
					 // 1 to 100.
     int t = 0;
     int x;
     while(!t){
     
     	printf("Take a guess! ");
	scanf("%d", &x);
	// Here we implement the logic...obviously....
	if(x > n) printf("Too high!\n");
	if(x < n) printf("Too low!\n");
        if(x == n){
	t = 1;
	printf("You've guessed it!!!!\n");
	}
     }
}


void challenger(){ // We all want a dodge challenger, but this is not it
	char ans; // We try to save the user's yeses and noses (As an Engineer, I am allowed to create words to staistfy my needs)
		  // Just kidding :)
	int arr[100];

	for(int i = 0; i < 100; i++){
		arr[i] = i + 1;
	}

        // I prompt you to randomly pick your IQ
	// sleep(1000);
	// A practical method would be to check if the number is divisible by 10 then 2, to eliminate more than 50% of the possibilities
	// then check on what half is the number i.e greater than or less than 50, if it is 50 then, yay!
	// finally, we can check if it is divisible by 3, to reduce the number of possibilites again
	// No, we wont check for divisibilty by 4, but rather by 5, to further narrow down the scope to almost 5 possibilities
	// Now we can ask the user if it is the number we have
	
	int n = 50;
	int up = 100;
	int lo = 1;
	char in;

	printf("Think of a number from 1 - 100\n");

        for(int i = 0; i < 7; i++){
		printf("Is your number greater than %d (y/n)\n", n);
		scanf(" %c", &in);
		if(in == 'y'){
			for(int i; i < 100; i++){
				if(arr[i] < n) arr[i] = 0;
			}
			lo = n;
			n = (up + lo) / 2;
		}
		else if(in == 'n'){
		        for(int i; i < 100; i++){
                                if(arr[i] >= n) arr[i] = 0;
                        }
			up = n;
			n = (up + lo) / 2;
		}	
	}

	for(int i = 0; i < 100; i++){
	if(arr[i] != 0) printf("%d ", arr[i]);}

}

int main(){

     int t = 0;
     int x = 0;
	
     while(!t){
          int o;
          printf("This is guess the IQ game! \nTo be the guesser press 1\nTo challenege the computer press 2: ");
          scanf("%d", &o);

          switch(o){
     
               case 1: guesser();
               break;

               case 2: challenger();
	       break;

               default: printf("Error: invalid choice\n");
          }
	  printf("Do you want to continue? (-1 to exit): ");
	  scanf("%d", &t);
	  if(t == -1) t = 1;
          else t = 0;
	}
}

