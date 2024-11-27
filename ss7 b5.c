#include<stdio.h>

int main(){
	
	int i =0;

	int array[5]={2,3,4,5,6};
	
	int smallest= array[0];
	int biggest;
	for(i=0;i<5;i++){
	if (array[i]>smallest){
		biggest = array[i];
	}else{
		smallest=array[i];
	}
		
	
	
	}
	printf("so nho nhat la %d\n so lon nhat la %d",smallest,biggest);
	
	
	
	
	


	

   return 0;
}

