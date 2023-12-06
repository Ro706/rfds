#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("example.txt","a");
	if(fp==NULL)
	{
		perror("Error opening the file");
		return 1;
	}
	fprintf(fp, " I am Ro706");
	fclose(fp);
	return 0;
}
