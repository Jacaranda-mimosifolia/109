#include<stdio.h>
int i_array[]={1,2,3,4,5,0,1,2,3};
char c_array[]="hello\0 world";
int i_mystrlen(const int* constant);
char c_mystrlen(const char* string);

int main()
{
//	i_mystrlen(i_array);
	printf("i_mystrlen:\n");
	printf("count=%d\n\n",i_mystrlen(i_array));
//Ƕ�������������ڲ㺯������ i_mystrlen(array)�е�printf,���������printf;
	printf("c_mystrlen:\n");
	c_mystrlen(c_array);
	return 0;
}

int i_mystrlen(const int* constant)//constant�β�; arrayʵ�� 
{
	int count=0;
	if(constant!=NULL)
	{
		for(int i=0;*(constant+i)!='\0';i++)//constant[5]=='\0',break;������whileҲ�� 
		{
			printf("constant[%d]=%d\n",i,constant[i]);
			count++;
		}
		return count;//return,�Ǻ����������Ҫ;�� 
	}
}

char c_mystrlen(const char* string)
{
	int count=0;
	if(string!=NULL)
	{
		for(int i=0;*(string+i)!='\0';i++)//string[5]=='\0',break;������whileҲ�� 
		{
			printf("string[%d]=%c\n",i,string[i]);
			count++;
		}
		printf("count=%d\n\n",count);
		return count;//return,�Ǻ����������Ҫ;�� 
	}
}

