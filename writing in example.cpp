#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("example.txt","w");
	if(fp==NULL)
	{
		perror("Error opening the file");
		return 1;
	}
	fprintf(fp, "Hello World!");
	fclose(fp);
	return 0;
}
