/****************************************************************/
/*   poly2		                                        */
/****************************************************************/

#ifdef TEST
#include <stdio.h>
#endif

#include<math.h>

#ifdef ALGO
int foo(int x,int y)
{	
int t1_1,t1_2,t1_3,t1_4,t1_5,t1_6,t1_7,t1_8,t1_9,t1_10,t2_1,t2_2,t2_3,t2_4,t2_5,t2_6,t2_7,t2_8,t3_1,t3_2,t3_3,t3_4,t3_5,t3_6,t3_7,t4_1,t4_2,t4_3,t4_4,t5_1,t5_2,t5_3,t6_1,t6_2,t6_3,t7_1,t7_2,t8_1,t8_2,t9_1,t10_1,t11_1;

t1_1 = y - 1;
t2_1 = x * x;
t2_2 = t1_1 * y;
t3_1 = 3 * y;
t4_1 = 2*t2_1 - t3_1;
t4_2 = t2_2 * t2_2;
t5_1 = t2_1 * t4_1;
return(t5_1 + t4_2);

}
#endif


#ifdef TEST
int main(void)
{
	int x,y;
 	int result;
  	result = foo(x,y);
  	return 0;
}
#endif
