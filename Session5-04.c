#include<stdio.h>
int main(){
	int i,n;
	 printf("Nhap vao mot so nguyen tu 1 den 10: ");
    scanf("%d", &n);
     printf("Bang cuu chuong cua %d:\n", n);
	//i chay dong
	for( int i=1;i<=10;i++){
			printf("%d",i*n);
		  //het 1 dong thi xuong dong
		  printf("\n");
	}
	return 0;
}
