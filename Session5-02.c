#include<stdio.h>
int main(){
	int a;
	printf("moi ban nhap so nguyen bang so 5 : ");
	scanf("%d",&a);
	while(a!=5){
		printf("moi ban nhap so nguyen ");
		scanf("%d",&a);
		return 0;
	}
}
