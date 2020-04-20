#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <string.h>

#define  STRUCT_OFFSET(id, element)  ((unsigned long)(&(( struct id*)0)->element))


/*#define EXCHANGE(n)  (((n)&0x55555555)<<1)|(((n)&0xaaaaaaaa)>>1)

int main()
{
	int n = 0;
	int m = 0;
	scanf("%d", &n);
	printf("交换前:%d\n", n);
	m = EXCHANGE(n);
	printf("交换后:%d\n", m);
	system("pause");
	return 0;
}

/*void find_two_diff_num(int arr[], int sz, int *p1, int *p2)
{
	int i = 0;
	int ret = 0;
	int pos = 0;
	*p1 = 0;
	*p2 = 0;
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	for (i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			(*p1) ^= arr[i];
		}
	}
	(*p2) = (*p1) ^ ret;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 1, 2, 3, 4, 5, 6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int num1 = 0;
	int num2 = 0;
	find_two_diff_num(arr, sz, &num1, &num2);
	printf("num1=%d,num2=%d\n", num1, num2);
	return 0;
}

/*char *my_strncpy(char *dest, char *src, size_t len)
{
	assert(dest != NULL && src != NULL);
	char *ret = dest;
	char *tmp = NULL;
	int offset = 0;
	if (strlen(src) < len)
	{
		offset = len - strlen(src);
		len = strlen(src);
	}
	if (dest > src && dest < src + len)
	{
		dest = dest + len - 1;
		src = src + len - 1;
		tmp = dest;
		while (len--)
			*dest-- = *src--;
	}
	else
	{
		while (len--)
			*dest++ = *src++;
		tmp = dest;
	}
	while (offset--)
		*tmp++ = '\0';
	return dest;
}

int main()
{
	char ar1[4] = "Hi!";
	char ar2[5] = { 0 };
	printf("%s\n", my_strncpy(ar2, ar1, 5));
	return 0;
}
/*enum State
{
	VALID, //合法状态
	INVALID //非法状态
};
enum State state = INVALID;//因为非法状态的情况比较多，而合法的状态只有一种情况，为了使代码简单些，所以将开始状态初始化为非法状态
int my_atoi(const char* str)
{
	long long ret = 0;
	int flag = 1;//标识正负数
	assert(str != NULL);//空指针
	if (*str == '\0')//空字符串
	{
		return 0;
	}
	while (isspace(*str))//空白字符
	{
		str++;
	}
	if (*str == '+')
	{
		str++;
	}
	else if (*str == '-')
	{
		str++;
		flag = -1;
	}

	while (*str)
	{
		if (isdigit(*str))
		{
			ret = ret * 10 + (*str - '0')*flag;
			if (ret > INT_MAX&&ret < INT_MIN)//越界情况
			{
				return 0;
			}
		}
		else
		{
			state = VALID;//合法状态
			return (int)ret;
		}
		str++;
	}
	state = VALID;
	return (int)ret;
}


int main()
{
	char *p = "-122abc44";
	int ret = my_atoi(p);
	if (state == VALID)
		printf("%d\n", ret);
	return 0;
}*/