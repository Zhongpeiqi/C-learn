/*#include"stdio.h"
void Find(int arr[], int sz, int n)																	//��������Ԫ��
{
	int i;
	int flag = 0;
	for (i = 0; i < sz; i++)
	{
		if (arr[i] == n)
	{
			printf("�ҵ���,arr[%d]=%d\n",i,n);
			flag = 1;
		}
	}
	if (flag == 0)
		printf("�Ҳ���\n");
}
int main()													
{
	int arr[] = {1,2,3,4,5,1,2,3};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int n;
	printf("��������Ҫ���ҵ�ֵ��");
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
		printf("�Ҳ���\n");
}
void main()
{
	int i, t,x;
	int a[] = { 1,2,3,4,5,6,7,8 };
	printf("ԭʼ������Ϊ\n");
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		printf("%4d", a[i]);
	}
	printf("��Ҫ���ҵ���\n");
	scanf_s("%d", &t);
	x = search(a, sizeof(a) / sizeof(a[0]), t);
	printf("Ҫ���ҵ������������е�λ��Ϊ%d\n", x);
}


