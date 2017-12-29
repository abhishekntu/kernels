/****************************************************************/
/*   poly3		                                        */
/****************************************************************/

#ifdef TEST
#include <stdio.h>
#endif

#include<math.h>

#ifdef ALGO
int foo(int t,int u,int v,int x,int y,int z)
{	
int t1_1,t1_2,t1_3,t1_4,t1_5,t1_6,t1_7,t1_8,t1_9,t1_10,t2_1,t2_2,t2_3,t2_4,t2_5,t2_6,t2_7,t2_8,t3_1,t3_2,t3_3,t3_4,t3_5,t3_6,t3_7,t4_1,t4_2,t4_3,t4_4,t5_1,t5_2,t5_3,t6_1,t6_2,t6_3,t7_1,t7_2,t8_1,t8_2,t9_1,t10_1,t11_1;

t1_1 = v * v;
t1_2 = y * u;
t2_1 = t1_1 * 11;
t2_2 = t1_2 * 25;
t3_1 = x + 2*t;
t3_2 = 80 * z;
t4_1 = t3_1 - t2_1;
t4_2 = t2_2 - t3_2;
t5_1 = t4_1 * 15;
return(t5_1 + t4_2);


}
#endif


#ifdef TEST
int main(void)
{
	int t,u,v,x,y,z;
 	int result;
  	result = foo(t,u,v,x,y,z);
  	return 0;
}
#endif
