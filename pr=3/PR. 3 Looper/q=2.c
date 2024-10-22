#include <stdio.h>

main() 
{
    int n,number = 0;

    printf("Enter a number = ");
    scanf("%d", &n);
do{
	
	n=n/10;
	number++;
	
}
while(n!=0);

    printf("The total number of digits in a number is :- %d\n",number);
}
