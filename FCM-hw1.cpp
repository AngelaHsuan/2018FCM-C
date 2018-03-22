#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <math.h>

int main()
{
	clock_t t1,t2;
	int i,choose;
	double j=2,k,T1,T2;
	char again;
	
	printf("\n");
	again = 'y';
	while (again == 'y')
	{
		printf("Which computing time do you want to know?\n");
		printf("(1) addition\n");
		printf("(2) multiplication\n");
		printf("(3) sine function\n");
		scanf(" %d",&choose);
		
		if (choose != 1 && choose != 2 && choose != 3)
		{
			printf("Please follow the instructions.");
			break;
		}
		
		t1 = clock();
		for (i=0;i<1000000000;++i)
		{
		}
		t2 = clock();
		T1 = t2 - t1;
		printf("-----------------------------------------------------------\n");
		printf("Time of loop only(sec) : %.3f\n", T1/(double)(CLOCKS_PER_SEC));
		printf("-----------------------------------------------------------\n");
		
		if (choose == 1)
		{
			t1 = clock();
			for (i=0;i<1000000000;++i)
			{
				j = j+1;
			}
			t2 = clock();
			T2 = t2 - t1;
			printf("Computational time with additions(sec) :  %.5f\n",T2/(double)(CLOCKS_PER_SEC));
			printf("-----------------------------------------------------------\n");
			printf("Computational time of 1*10^9 additions(sec) :  %.5f\n",(T2-T1)/(double)(CLOCKS_PER_SEC));
		}
		else if (choose == 2)
		{
			t1 = clock();
			for (i=0;i<1000000000;++i)
			{
				j = j*1.1;
			}
			t2 = clock();
			T2 = t2 - t1;
			printf("Computational time with multiplications(sec) :  %.5f\n",T2/(double)(CLOCKS_PER_SEC));
			printf("-----------------------------------------------------------\n");
			printf("Computational time of 1*10^9 multiplications(sec) :  %.5f\n",(T2-T1)/(double)(CLOCKS_PER_SEC));
		}
		else if (choose == 3)
		{
			t1 = clock();
			for (i=0;i<1000000000;++i)
			{
				j = sin(j);
			}
			t2 = clock();
			T2 = t2 - t1;
			printf("Computational time with sine functions(sec) :  %.5f\n",T2/(double)(CLOCKS_PER_SEC));
			printf("-----------------------------------------------------------\n");
			printf("Computational time of 1*10^9 multiplications(sec) :  %.5f\n",(T2-T1)/(double)(CLOCKS_PER_SEC));
		}
		else
		{
			printf("Whaaaaaat?\n");
		}
		
		printf("-----------------------------------------------------------\n");
		printf("Do you want to do again?(y/n)\n");
		scanf("%s",&again);
	}
	
	return 0;
	
}
