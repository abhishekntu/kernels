/****************************************************************/
/*   chebyshev		                                        */
/****************************************************************/

#ifdef TEST
#include <stdio.h>
#endif

#include<math.h>

#ifdef ALGO
void foo()
{
	int i[11];
	int o[2];
	int temp_1 = i[9] | i[10];
	int temp_2 = i[6]*(i[0]*i[1] + i[2]*i[3] + i[4]*i[5]);
	o[0] = temp_1*(temp_2+i[7]);
	o[1] = temp_1*(temp_2+i[8]);
}
#endif


#ifdef TEST
int main(void)
{
	foo();
  	return 0;
}
#endif
