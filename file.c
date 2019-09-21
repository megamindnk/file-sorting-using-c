#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct emp
{
	char name[15];
}rec;
rec t,emp[100];
/*
create a file already where you store this file,write the file as ageand then name
 for example: 18 naseem
 	      19 zaheer 
*/
void main()
{
	FILE *fp;
	int n,i=0,j=0;
	char filename[15];
	printf("enter file name\n");//accept the file name
	scanf("%s",filename);
	fp=fopen(filename,"r+");
	if(fp==NULL)
	{
		printf("file not found");
		exit(0);
	}
	else
	{
		while(!feof(fp))
		{
				fscanf(fp,"%s",emp[i].name);//storing the file in structure	
				i++;
		}
		n=i;
	}
	printf("printing in a structure\n");
	for(i=0;i<4;i++)//printfing unsorted data
	{	
		printf("%s\n",emp[i].name);
	}
	for(i=0;i<n;i++)//insertion sort this one is easy than the otehr sorting shown in book
	{
		t=emp[i];
		for(j=i-1;j>=0 && emp[j].name[0]>t.name[0];j--)
		{
			emp[j+1]=emp[j];
			emp[j]=t;
		}
	}
	printf("sorted in a array\n");//printing in sorted format
	for(i=0;i<4;i++)
	{	
		printf("%s\n",emp[i].name);
	}
	
fclose(fp);
}














