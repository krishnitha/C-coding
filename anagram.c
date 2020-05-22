#include<stdio.h>
#include<string.h>
char s1[100],s2[100],s3[100],s4[100],temp;
int l1=0,l2=0,found=0,i,j;
void no();
void copy(char[],char[]);
void sort(char[]);
void main()
{
printf("enter the strings\n");
gets(s1);
gets(s2);
copy(s1,s3);
copy(s2,s4);
l1=strlen(s3);
l2=strlen(s4);
if(l1!=l2)
{
	printf("strings are not anagram\n");
}
else
{
	sort(s3);
	sort(s4);
	for(i=0;s3[i]!='\0';i++)
	{
		if(s3[i]!=s4[i])
		{
			no();
			break;
		}
	}
	if(found==0)
	{
		printf("strings are anagram\n");
	}
}
getch();
}
void no()
{
	found=1;
	printf("strings are not anagram\n");
}
void copy(char s1[],char s2[])
{
	j=0;
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]!=' ')
		{
			s2[j]=s1[i];
			j++;
		}
	}
	s2[j]='\0';
}
void sort(char s1[])
{
	for(i=0;s1[i]!='\0';i++)
	{
		for(j=0;j<l1-i-1;j++)
		{
		if(s1[j]>s1[j+1])
		{
			temp=s1[j];
			s1[j]=s1[j+1];
			s1[j+1]=temp;
		}
		}
	}
}
