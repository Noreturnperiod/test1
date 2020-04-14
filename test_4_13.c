#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 
#include <string.h>
#include<assert.h>
void *Strstr(const void *str, const void *sub)
{
	assert(str != NULL && sub != NULL);
	const char *str_p = str;
	const char *start = str;
	const char *sub_p = sub;
	while (*start != '\0')
	{
		str_p = start;
		sub_p = sub;
		while (*str_p != '\0'&&*sub_p != '\0')
		{
			if (*str_p == *sub_p)
			{
				str_p++;
				sub_p++;
			}
			else
			{
				break;
			}
		}
		if (*sub_p == '\0')
		{
			return start;
		}
		start++;
	}
	return NULL;
}

int main()
{

	char str[] = "abbbbcdef";
	char *p;
	p = strstr(str, "bbc");
	printf("%s", p);
	system("pause");
	return 0;
}
//void *my_strstr(const void *buf1,const void *buf2)
//{
//	assert(buf1 != NULL && buf2 != NULL);
//	const char
//}

/*
void main()
{
	FILE *fp = fopen("Test.txt", "r");//Test.txt
	if (fp == NULL)
	{
		printf("Open Test.txt Error :%s.\n", strerror(errno));  //errno 系统定义的 全局变量
		//printf("Open Test.txt Error :%d.\n", errno);
		return;
	}
	else
		printf("Open Test.txt Successfully.\n");
}


/*
void *my_memcpy(void *dest, void *src, size_t count)
{
	assert(dest != NULL && src!=NULL);
	char *pdest = (char*)dest;
	const char *psrc = (char*)src;
	while (count-- != 0)
	{
		*pdest++ = *psrc++;
	}
	return dest;
}

int main()
{
	char dest[] = "abcdefgh";
	printf("dest = %s\n",dest);
	my_memcpy(dest, dest + 4, 4);
	printf("dest = %s\n",dest);
	return 0;
}
/*
int my_memcmp(const void *buf1, const void* buf2, size_t count)
{
	assert(buf1 != NULL && buf2 != NULL);
	const int *pbuf1 = (int*)buf1;
	const int *pbuf2 = (int*)buf2;
	int res = 0;
	while (count-- != 0)
	{
		if ((res = *pbuf1 - *pbuf2) != 0)
			break;
		pbuf1++;
		pbuf2++;
	}
	if (res > 0)
		res = 1;
	else if (res < 0)
		res = -1;
	return res;
}
int main()
{
	int ar1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int ar2[] = { 1, 2, 3, 4, 5, 6, 9, 8, 7 };
	int res = my_memcmp(ar1, ar2, sizeof(int)* 7);
	printf("res = %d\n", res);
	return 0;
}
*/
//int main()
//{
//	char str[] = "This is a simple string"; 
//	char * pch;
//	pch = strstr(str, "simple"); 
//	strncpy(pch, "sample", 6); 
//	puts(str);
//	return 0; 
//}
#include <stdio.h>
#include <string.h>
//int main() 
//{
//	char str[] = "- This, a sample string.";
//	char * pch;
//	printf("Splitting string \"%s\" into tokens:\n", str);
//	pch = strtok(str, " ,.-");
//	while (pch != NULL)
//	{
//		printf("%s\n", pch);
//		pch = strtok(NULL, " ,.-");
//	}
//	return 0;
//}
//#include<assert.h>
//void *my_mommove(void *dest, const void *src, size_t count)
//{
//	assert(dest != NULL && src != NULL);
//	char *pdest = (char*)dest;
//	const char *psrc = (char*)src;
//
//	if (psrc >= pdest || pdest >= psrc + count)
//	{
//		while (count-- != 0)
//		{
//			*pdest++ = *psrc++;
//		}
//	}
//	else
//	{
//		pdest = pdest + count - 1;
//		psrc = psrc + count - 1;
//		while (count-- != 0)
//		{
//			*pdest-- = *psrc--;
//		}
//	}
//	return dest;
//}
//int main()
//{
//	char dest[20] = "abcdefghijk";
//	printf("dest = %s\n",dest);
//	my_mommove(dest + 2, dest, 4);
//	printf("dest = %s\n",dest);
//	return 0;
//}
