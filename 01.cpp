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
//嵌套输出，先输出内层函数，即 i_mystrlen(array)中的printf,在输出外层的printf;
	printf("c_mystrlen:\n");
	c_mystrlen(c_array);
	return 0;
}

int i_mystrlen(const int* constant)//constant形参; array实参 
{
	int count=0;
	if(constant!=NULL)
	{
		for(int i=0;*(constant+i)!='\0';i++)//constant[5]=='\0',break;或者用while也行 
		{
			printf("constant[%d]=%d\n",i,constant[i]);
			count++;
		}
		return count;//return,是函数输出的重要途径 
	}
}

char c_mystrlen(const char* string)
{
	int count=0;
	if(string!=NULL)
	{
		for(int i=0;*(string+i)!='\0';i++)//string[5]=='\0',break;或者用while也行 
		{
			printf("string[%d]=%c\n",i,string[i]);
			count++;
		}
		printf("count=%d\n\n",count);
		return count;//return,是函数输出的重要途径 
	}
}

