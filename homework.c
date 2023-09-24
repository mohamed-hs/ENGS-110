/*
 * Dear Professor, TA, or fellow programmer.
 *
 * Welcome to the wonderland of Functioning functions!
 *
 * In order to get this place as clean as you see it, i installed indent, use it too!
 *
 * I have commented and added memes too to make the journey fun.
 *
 * Best regards,
 *
 * Mohmaed Saleh
 * */



// First thing's first, add libraries "this is Elon Musk"

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

// Junior coders commenting be like (THIS IS A FUNCTION)

int
sum_of_integers (int a)
{

  int sum = 0;
  int n = a;

  while (n > 0)
    {
      sum = sum + (n % 10);
      n = n / 10;
    }

  return sum;
  // (n > 0) ? (sum = sum + (n % 10)), (sum_of_integers(n / 10)) : return sum;
  // I have tried to use ternary operation and recursion but i will implement this later on!
}


int
reversed_number (int a)
{

  int reversed, remainder = 0;
  int n = a;

  while (n > 0)
    {
      remainder = n % 10;
      reversed = reversed * 10 + remainder;
      n = n / 10;
    }

  return reversed;

}

// I have decided to use a bool since a palindrome is either a palindorme or not, no need for pesky integers here :)

bool
is_palindrome (int a)
{
  int reversed, remainder = 0;
  int n = a;

  while (n > 0)
    {
      remainder = n % 10;
      reversed = reversed * 10 + remainder;
      n = n / 10;
    }

  if (a == reversed)
    {
      return true;
    }

  else
    {
      return false;
    }
}

// I have no idea what is this, but it works (i coulve made it better if the inputs werent integers)

int
concatenate (int a, int b)
{

  char s1[20];
  char s2[20];

  //String print yes
  sprintf (s1, "%d", a);
  sprintf (s2, "%d", b);
  // String concatenate
  strcat (s1, s2);
  // string --> integer
  int c = atoi (s1);

  return c;
}

// Just another swimming bool, you should be one of two's friends to get here tho

bool
is_power_of_two (int a)
{

  int n = a;

  if (n == 1)
    {
      return true;
    }

  while (n > 1)
    {
      if (n % 2 == 0)
	{
	  n = n / 2;
	}
      else
	{
	  return false;
	  break;
	}
    }
  return true;
}

// Ah yes, a rectangle doctor Nefario

int
print_my_rectangle (int a, int b, char c)
{

  int side1 = b;
  int side2 = a;
  char z = c;

  for (int i = 0; i < side1; i++)
    {

      for (int j = 0; j < side2; j++)
	{

	  if (i == 0 || j == 0 || i == side1 - 1 || j == side2 - 1)
	    {
	      printf ("%c ", z);
	    }
	  else
	    {
	      printf ("  ");
	    }
	}
      printf ("\n");
    }



}

// Here we make a cocktail of all functions...or do we?? hey guys Michael from vSauce

int
main ()
{

  int input = 0;
  int x, n, m = 0;
  bool pal = false;
  char ch;

  printf
    ("Choose a fucntion \n List of Functions: \n 1 --> Sum of integers \n 2 --> Reversed Number \n 3 --> Palindrome Test \n 4 --> Concatenation \n 5 --> Check of power of 2 \n 6 --> Draw a Rectangle\n ----> ");

  scanf ("%d", &input);

  switch (input)
    {
    case 1:
      printf ("\nEnter your number: ");
      scanf ("%d", &x);
      printf ("\nSum of digits is: %d \n", sum_of_integers (x));
      break;

    case 2:
      printf ("\nEnter your number: ");
      scanf ("%d", &x);
      printf ("\nReverse of  %d is %d \n", x, reversed_number (x));
      break;

    case 3:
      printf ("\nEnter your number: ");
      scanf ("%d", &x);
      if (is_palindrome (x))
	{
	  printf ("\nYour number is a palindrome!!! \n");
	}
      else
	{
	  printf ("\nNot this time :/ \n");
	}
      break;

    case 4:
      printf ("\nEnter number 1: ");
      scanf ("%d", &n);
      printf ("\nEnter number 2: ");
      scanf ("%d", &m);
      printf ("The result of concatenation is %d \n", concatenate (n, m));
      break;

    case 5:
      printf ("Enter your number: ");
      scanf ("%d", &x);
      if (is_power_of_two (x))
	{
	  printf ("Yes, this number is a power of 2!\n");
	}
      else
	{
	  printf ("Not this time...\n");
	}
      break;

    case 6:
      printf ("Enter number 1: ");
      scanf ("%d", &n);
      printf ("Enter number 2: ");
      scanf ("%d", &m);
      printf ("Enter preferred symbol: ");
      scanf (" %c", &ch);
      print_my_rectangle (n, m, ch);
      break;

    default:
      printf ("\nError, please try again!");
    }

  return 0;
}
