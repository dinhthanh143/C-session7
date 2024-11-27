#include<stdio.h>

int main(){
	
	int array[6]={1,2,3,4,5,6};
	
	int size = sizeof(array)/sizeof(int);
	
	int i;
	for(i=0;i<=size;i++){
		
		printf("%d\n", array[i]);
		
		
	}
	printf("do dai cua mang la: %d",size);
	
	

   return 0;
}

