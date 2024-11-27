#include<stdio.h>

int main(){
	int array[5];
	
	int i;
	for(i=1;i<6;i++){
	printf("moi nhap phan tu: ");
	scanf("%d",&array[i]);
	
	}
	for(i=1;i<6;i++){
		printf("\n phan tu thu %d la: %d\n",i,array[i]);
	}
	

   return 0;
}

