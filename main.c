#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*practice1*/
	int x, y, z, m;
	int a, b, c; 
	
	x=1;
	z=2;
	a=3;
	b=4;
	c=5;
	
	y=m*x+b;
	y=a*x*x+b*x+c;
	m=(x+y+c)/3;
	
	/*practice2*/
	int x=3; 
	int cond1, cond2;
	
	cond1=2<x&&x<5;
	cond2=x>1||x<4&&x>3;
	
	printf("cond1=%d, cond2=%d", cond1, cond2);
	
	/*practice3*/ 
	int x, y; 

	printf("enter two interge : ");
	scanf("%d %d", &x, &y);

	printf("+ result is %i\n", x+y);
	printf("- result is %i\n", x-y);
	printf("* result is %i\n", x*y);
	printf("/ result is %i\n", x/y);
	printf("% result is %i\n", x%y);
	
	return 0;
}
