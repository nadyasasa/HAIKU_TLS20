#include <stdio.h>
int main ()
	{int i=1, sum, volume;
	struct
	{int length[i], width[i], height[i];
	}
	v;
	printf ("Enter the number of boxes (1-100) : ");
	scanf ("%d", &sum);
	printf("\n");
	if (sum>=1 && sum<=100)
		{while(i<=sum)
		{printf("Box %d \n", i);
		printf ("Enter length : ");
		scanf ("%d", &v.length[i]);
		printf ("Enter width : ");
		scanf ("%d", &v.width[i]);
		printf ("Enter height : ");
		scanf ("%d", &v.height[i]);
		if ((v.length[i])>=1 && (v.length[i])<=100 && (v.width[i])>=1 && (v.width[i])<=100 && (v.height[i])>=1 && (v.height[i])<41)
			volume = (v.length[i])*(v.width[i])*(v.height[i]);
			printf ("The box's volume is %d\n", volume);	
			i=i+1;
			}
		}
	return 0;
	}
