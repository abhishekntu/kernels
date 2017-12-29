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
	int i[14];
	int o[2];
	o[0] = i[6]*((i[0]+i[1]) + (i[2]+i[3]) + (i[4]+i[5])) - i[7];
	o[1] = i[6]*((i[8]+i[9]) + (i[10]+i[11]) + (i[12]+i[13])) - i[15]; 
}
#endif


#ifdef TEST
int main(void)
{
	foo();
  	return 0;
}
#endif
