/*#include"stdio.h"
void Find(int arr[], int sz, int n)																	//查找数组元素
{
	int i;
	int flag = 0;
	for (i = 0; i < sz; i++)
	{
		if (arr[i] == n)
	{
			printf("找到了,arr[%d]=%d\n",i,n);
			flag = 1;
		}
	}
	if (flag == 0)
		printf("找不到\n");
}
int main()													
{
	int arr[] = {1,2,3,4,5,1,2,3};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int n;
	printf("请输入你要查找的值：");
	scanf_s("%d",&n);
	Find(arr, sz,n);
	return 0;
}
*/
#include"stdio.h"
int search(int* pp, int n, int t)
{
	int* p,flag=0,x;
	for (p = pp; p < pp + n; p++)
	{
		if (*p == t)
		{
			return p - pp;
			flag = 1;
		}
	}
	if (flag == 0)
		printf("找不到\n");
}
void main()
{
	int i, t,x;
	int a[] = { 1,2,3,4,5,6,7,8 };
	printf("原始的数组为\n");
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		printf("%4d", a[i]);
	}
	printf("你要查找的数\n");
	scanf_s("%d", &t);
	x = search(a, sizeof(a) / sizeof(a[0]), t);
	printf("要查找的数组在数组中的位置为%d\n", x);
}


