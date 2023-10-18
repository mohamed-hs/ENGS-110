#include <stdio.h>
#include <stdlib.h>


int max(int x, int y){
     return (x > y) ? x : y;
}


int min(int x, int y){
     return (x < y) ? x : y;
}


void mimax(int a[]){

     int maxn = max(a[0], a[1]);
     int minn = min(a[0], a[1]);     

     for(int i = 2; i < 10; i++){
     	if(a[i] > maxn) maxn = a[i];
	if(a[i] < minn) minn = a[i];
     }
     printf("Maximum value is %d\n", maxn);
     printf("Minimum value is %d\n",minn);
}


int main(){

     int a[10];
  
     for(int i = 0; i < 10; i++){
     scanf("%d", &a[i]);
     }

     mimax(a);
}
