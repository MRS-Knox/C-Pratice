#include <stdio.h>
//二分法查找

int main()
{
	static int a[10] = {-12, 0, 6, 16, 23, 56, 80, 100, 110, 115};
	int n, low, mid, high;
	low = 0;
	high = 9;
	printf("input a number to be searched: ");
	scanf("%d",&n);
	mid = (low + high)/2;
	if(n == a[mid])
	{
		printf("%d\n",mid);
	}
    else if(n < a[mid])
	{
		for(low = 0;low <= 3;low++)
		{
			high = low + 2;
			mid = (low + high)/2;
			if(n < a[mid])
			{
				if(n == a[low])
				{
					printf("%d\n",low);
					break;
				}
				else 
				{
					printf("Don't have this number\n");
					break;
				}
			}
			else if(n > a[mid])
			{
				continue;
			}
			else 
			{
				printf("%d\n",mid);
				break;
			}
		}
	}
	else if(n > a[mid])
	{
		for(high = 9;high >= 5;high--)
		{
			low = high - 2;
			mid = (low + high)/2;
			if(n > a[mid])
			{
				if(n == a[high])
				{
					printf("%d\n",high);
					break;
				}
				else 
				{
					printf("Don't have this number\n");
					break;
				}
			}
			else if(n < a[mid])
			{
				continue;
			}
			else
			{
				printf("%d\n",mid);
				break;
			}
		}
	}
    return 0;
}
