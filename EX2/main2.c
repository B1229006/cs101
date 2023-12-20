
#include <stdio.h>
#include <math.h>
int main (){
	double target =3.14159;
	double pi=0.0;
	double x;
	int sign =1;
	for (int i=1;i ;i++){
		x=sign*4.0/(2*i-1);
		pi+=x;	
		if (fabs(pi-target)<=0.000005) break;
		sign=-sign;	
	}
	printf ("x=%f\n",x);
	printf ("PI=%6.5f",pi);
	
	return 0;
}
	
	


