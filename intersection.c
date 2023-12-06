#include<stdio.h>
int main(){
	int n,m;
	printf("Enter a size of arr1: ");
	scanf("%d",&n);
	printf("Enter a size of arr2: ");
	scanf("%d",&m);
	int arr1[n],arr2[m];
  	for(int i = 0; i < n; i++){
		printf("Enter arr1 element %d:",i);
		scanf("%d",&arr1[i]);
	}
	for(int i = 0; i < m; i++){
                printf("Enter arr2 element %d:",i);
                scanf("%d",&arr2[i]);
        }
	for(int i = 0 ; i < n; i++){
	      for(int j = 0 ;j < m ;j++){
		      if( arr1[i]==arr2[j]){
			      printf("%d ",arr1[i]);	  
		      	      break;
		      }
	      }
	}
	return 0;
}
