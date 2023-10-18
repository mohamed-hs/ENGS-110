// Welcome to my amazing grade calculator, I have used our syllabus's grading ranges, although it was a little faulty, 
// I fixed it and made it work for decimal numbers too!


// First thing's first: libraries!
// Since there is really not much math needed, I didn't include the floor function, assuming that any grade wont be rounded up or down

#include <stdio.h>
#include <stdlib.h>

// This function basically is where our switch will be implemented, in order to check the ranges and print a corresponding letter grade for it.
// G to L ---> grade to letter for short

void g_to_l(int a){

     switch(a){
     
	     case 0 ... 59: // Instead of making a case for each number (0 -- >100)
			    // I just used ranges 
	          printf("Your letter grade is F\n");
   	     break;

	     case 60 ... 62:
	     	  printf("Your letter grade is D-\n");
	     break;

	     case 63 ... 66:
                  printf("Your letter grade is D\n");
             break;

	     case 67 ... 69:
                  printf("Your letter grade is D+\n");
             break;

	     case 70 ... 72:
                  printf("Your letter grade is C-\n");
             break;

	     case 73 ... 76:
                  printf("Your letter grade is C\n");
             break;

	     case 77 ... 79:
                  printf("Your letter grade is C+\n");
             break;

	     case 80 ... 83:
                  printf("Your letter grade is B-\n");
             break;

	     case 84 ... 86:
                  printf("Your letter grade is B\n");
             break;

	     case 87 ... 89:
                  printf("Your letter grade is B+\n");
             break;

	     case 90 ... 92:
                  printf("Your letter grade is A-\n");
             break;

	     case 93 ... 96:
                  printf("Your letter grade is A\n");
             break;

	     case 97 ... 100:
                  printf("Your letter grade is A+\n");
             break;

	     default: //Of course users make mistakes, so its good to tell them before its too late :)
	     	  printf("Error: number out of range, hoping its not negative :)\n");
     }
}

// Our lovely main fucntion
int main(){
     // I believe there are more efficient ways to make this while true statemetn cleaner
     // But for now we have a pseudo bool (t) that changes from 0 to 1 based on value of x. if x == -1, i.e user wants to quit, then t becomes 1 and !t = 0 so we stop the function
     int t = 0;
     int x = 0;
     while(!t){
     
     double input = 0.0; //Just to make students hopeful of round ups, but less do they know, heheheheheh

     printf("Please enter your grade: ");
     scanf("%lf", &input); // Long floar, or double, the same thing
/*
     if( __typeof__(input) == int && input >= 0){ 
          g_to_l(input); //In this part I learned that we can't compare types in C, for some reason, and sizeof wont word because it has an error rate.
     }
     
     else{ 
	  printf("Error: input a positive integer!");
     }
*/
     // However, we can make sure the number isn't negative with this if statement
     if(input >= 0.0) g_to_l(input);
     else printf("Error: negative number caught\n");
     // Here we prompt the user to either continue or exit
     printf("If you wish to exit, input -1\n");
     scanf("%d", &x);
     //How the function ends, we explained at the very top
     if(x == -1) t = 1;
     }
     return 0;
}
// nth to see here (dont scroll down)




















// really nothing (you can stop scrolling)








































// okay okay you win, have a nice day :)
