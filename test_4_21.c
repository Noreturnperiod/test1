﻿#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/* rewind example */ 
#include <stdlib.h>​​

#include <stdio.h> 
#define __DEBUG__ 

int main() {
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
#ifdef __DEBUG__   
		printf("%d\n", arr[i]);//为了观察数组是否赋值成功。     
#endif //__DEBUG__  
	}
	return 0;
}
/*int main()
{
	int array[ARRAY_SIZE];
	int i = 0;
	for (i = 0; i< ARRAY_SIZE; i++)
	{
		array[i] = i;
	}
	for (i = 0; i< ARRAY_SIZE; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	return 0;
}

​

/*#define MAX(a, b)  ( (a) > (b) ? (a) : (b) )

int main()
{
	int x = 5; 
	int y = 8; 
	int z = MAX(x++, y++);
	printf("x=%d y=%d z=%d\n", x, y, z);//输出的结果是什么？ 
	return 0;
}

/*#define PRINT(FORMAT,VALUE)\
	printf("the value is "FORMAT"\n", VALUE);
int main()
{
	PRINT("%d", 10);
}
/*enum { SIZE = 5 };
int main(void)
{
	double a[SIZE] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	double b = 0.0;
	size_t ret_code = 0;
	FILE *fp = fopen("test.bin", "wb");// 必须用二进制模式    
	fwrite(a, sizeof(*a), SIZE, fp);// 写 double 的数组    
	fclose(fp);

	fp = fopen("test.bin", "rb");// 读 double 的数组    
	while((ret_code = fread(&b, sizeof(double), 1, fp))>=1)
	{
		printf("%lf\n",b);
	}
	if (feof(fp))
		printf("Error reading test.bin: unexpected end of file\n");
	else if (ferror(fp)) 
	{
		perror("Error reading test.bin");
	}
	fclose(fp);
	fp = NULL; 
} 
/*int main(void)
{
	int c;// 注意：int，非char，要求处理EOF    
	FILE* fp = fopen("test.txt", "r");
	if(!fp)
	{
		perror("File opening failed");
		return EXIT_FAILURE;
	}//fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
	while ((c = fgetc(fp)) != EOF)// 标准C I/O读取文件循环    
	{
		putchar(c);
	}    //判断是什么原因结束的   
	if (ferror(fp))
		puts("I/O error when reading");
	else if (feof(fp))
		puts("End of file reached successfully");
	fclose(fp);
}

/*int main()
{
	int n;
	FILE * pFile;
	char buffer[27];
	pFile = fopen("myfile.txt", "w+");
	for (n = 'A'; n <= 'Z'; n++)
		fputc(n, pFile);
	rewind(pFile);
	fread(buffer, 1, 26, pFile);
	fclose(pFile);
	buffer[26] = '\0';
	puts(buffer);
	return 0;
}*/
//int main()
//{
//	FILE * pFile;
//	pFile = fopen("example.txt", "wb");
//	fputs("This is an apple.", pFile);
//	fseek(pFile, 9, SEEK_SET);
//	fputs(" sam", pFile);
//	fclose(pFile);
//	return 0;
//}
