#include <stdio.h>
//冒泡法排序

int main()
{
	int a[10], i, j, t;
	printf("input 10 numbers: \n");
	for(i = 0;i < 10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i = 0;i < 9;i++)					//控制比较多少趟
	{
		for(j = 0;j < 9 - i;j++)			//每一趟要比较多少次
		{
			if (a[j] > a[j+1])
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	for(i = 0;i < 10;i++)
	{
		printf("%d\n",a[i]);
	}
    return 0;
}