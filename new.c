#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int a=5;
int func(int x){
	a=42;
	return x%a;
}

int main()
{
	int a=5;
	a=a+func(84);
	printf("%d",a);
    return 0;
}
