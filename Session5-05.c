#include<stdio.h>
int main(){
	int i,j;
	printf("Bang cuu chuong tu 1 den 9:\n");
	//i chay doc
	for(i=1;i<=9;i++){
		// j chay cot
		for(j=1;j<=9;j++){
			printf("%5d", i*j);
		}
		  //het 1 dong thi xuong dong
		  printf("\n");
	}
	return 0;
}
