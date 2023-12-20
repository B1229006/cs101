#include <stdio.h>
#include <stdlib.h>
int main (){
	int i=12345;
	int thousands =i/1000%10;
	int units =i%10;
	int hundreds =i/100%10;
	int tens =i/10%10;
	
	int x=i%10000;
	int y=units*1000+hundreds*100+tens*10+thousands*1;
	
	printf("%d",i-x+y);
	
	return 0;
}