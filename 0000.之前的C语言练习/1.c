/*此程序为输入年月日可得出这是这一年的第几天*/
#include <stdio.h>

int main()
{
	int q,w,e,r,t;     //q为年，w为月，e为日,t为这一年的第几天
    printf("请输入年，月，日： \n");
	scanf("%d,%d,%d",&q,&w,&e);
	if (q % 4 == 0)
	{
		if (q % 100 == 0)
		{
			if (q % 400 == 0)
				r = 1;
			else r = 0;
		}
		else r = 1;
	}
	else r = 0;
	if (r == 1)
	{
		switch (w)
		{
		case 1:t = e;break;
		case 2:t = 31 + e;break;
		case 3:t = 30 * 2 + e;break;
		case 4:t = 30 * 3 + 1 + e;break;
		case 5:t = 30 * 4 + 1 + e;break;
		case 6:t = 30 * 5 + 2 + e;break;
		case 7:t = 30 * 6 + 2 + e;break;
		case 8:t = 30 * 7 + 3 + e;break;
		case 9:t = 30 * 8 + 4 + e;break;
		case 10:t = 30 * 9 + 4 + e;break;
		case 11:t = 30 * 10 + 5 + e;break;
		case 12:t = 30 * 11 + 5 + e;break;
		}
	}
	else 
	{
		switch (w)
		{
		case 1:t = e;break;
		case 2:t = 31 + e;break;
		case 3:t = 30 * 2 - 1 + e;break;
		case 4:t = 30 * 3 + e;break;
		case 5:t = 30 * 4 + e;break;
		case 6:t = 30 * 5 + 1 + e;break;
		case 7:t = 30 * 6 + 1 + e;break;
		case 8:t = 30 * 7 + 2 + e;break;
		case 9:t = 30 * 8 + 3 + e;break;
		case 10:t = 30 * 9 + 3 + e;break;
		case 11:t = 30 *10 + 4 + e;break;
		case 12:t = 30 * 11 + 4 + e;break;
		}
	}
	printf("%d\n",t);
    return 0;
}
