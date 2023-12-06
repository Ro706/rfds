#include <stdio.h>
#include <string.h>

int main() {
  FILE *fp;
  fp = fopen("example.txt", "r");
  if (fp == NULL) {
    perror("Error opening the file");
    return 1;
  }

  char data[100];
  fscanf(fp, "%[^n]s", data);
  printf("%s ", data);
  for (int i =0;i<10;i++){
	printf("%c",data[i]);
  }
  fclose(fp);
  return 0;
}

