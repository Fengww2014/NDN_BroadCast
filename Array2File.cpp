#include<stdio.h>
void Array2File(char msg[])
{
	FILE *fp;
        fp=fopen("Array.txt","wt");
	if(fp== NULL)
	{       
		printf ("open failed");
	        return ;
	}
	else 
	{
		for (int i=0;i<15;i++)
		{
			fprintf(fp,"%c",msg[i]);
		}
		fclose(fp);
	}
	

}


