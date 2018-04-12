#include<stdio.h>
void Save_i(int i)
{
	FILE *fp;
        fp=fopen("num_i.txt","wt");
	if(fp== NULL)
	{       
		printf ("open failed");
	        return ;
	}
	else 
	{
		
			fprintf(fp,"%d",i);
		
		fclose(fp);
	}
	

}
