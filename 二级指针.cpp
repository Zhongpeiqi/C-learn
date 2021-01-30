#include"stdio.h"
int main()
{
	int* p_a[4];
	int a[4][5];
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 5; j++)
		{
			printf("ÇëÊäÈëÊý×Ö£º\n");
			scanf_s("%d", &a[i][j]);
		}
	int max = a[0][0], min = a[0][0],sum=0;
	p_a[0] = a[0];
	p_a[1] = a[1];
	p_a[2] = a[2];
	p_a[3] = a[3];
	int** pp = p_a;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (*(*(pp + i) + j) > max)
			{
				max = *(*(pp + i) + j);
			}
			if (*(*(pp + i) + j) < min)
			{
				min = *(*(pp + i) + j);
			}
			sum += *(*(pp + i) + j);
		}
	}
	int avg = sum / 20;
	printf("min = %d,max = %d,avg = %d", min, max, avg);


}