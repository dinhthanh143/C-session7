#include<stdio.h>

int main(){
	int length,i,valid;
	printf("moi nhap so phan tu cua mang (so le): ");
	scanf("%d", &length);
	
	int array[length];
		
	while (i!=length){
		printf("moi nhap phan tu: ");

		scanf("%d",&valid);
	if (valid%2!=0){
		array[i]=valid;
		i++;
		
	}else{
		printf("Phai la so le! ");
	}
		
	}
	

	

	

   return 0;
}

