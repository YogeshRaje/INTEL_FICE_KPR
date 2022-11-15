#include <stdio.h>
#include <time.h>

int main() {
// printf() displays the string inside quotation
	double time_spent = 0.0;
 
	clock_t begin = clock();
 	printf("Hello, World!");
 	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
 
   	printf("The elapsed time is %f seconds", time_spent);
   	return 0;
}

