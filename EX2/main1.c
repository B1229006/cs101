#include <stdio.h>
#include <string.h>
int main (){
	char space[7][7]={"      ","     ","    ","   ","  "," ",""};
	for (int i=1;i<=7;++i){
		printf(space[i-1]);
		for (int j=1;j<=i;++j)	{printf("%d ",i);}
		printf("\n");		
	}
}