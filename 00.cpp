#include<stdio.h>
#include<string.h>
#include<iostream>
int tmp[]={1,2,3,0,1,2,3};
char mpt[]="hello";
//string.h;
//size_t strlen(const char* str);如：char类型的数组首地址，打印数组长度 
//sizeof(type);如：sizeof(int) 
int main()
{
	//tmp[3]=='\0',break;相当于strlen(int); 
	for(int i=0;tmp[i]!='\0';i++)
	{
		printf("tmp[%d]=%d\n",i,tmp[i]);
	}
	printf("\n");
	
	//strlen(mpt)=5;char
	for(int i=0;i<strlen(mpt);i++)
	{
		printf("mpt[%d]=%c\n",i,mpt[i]);
	}
	printf("%d,%d\n\n",sizeof(tmp),sizeof(mpt)); 
	
	//sizeof(tmp)/4-1=7;sizeof(int)=4;sizeof(tmp)=28;数组的末尾都带有一个'\0'
	for(int i=0;i<sizeof(tmp)/4-1;i++) 
	{
		printf("tmp[%d]=%d\n",i,tmp[i]);
	}
	system("\npause\n");
	return 0;
}
