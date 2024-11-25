#include<stdio.h>
int main(){
	int a,b;
	printf("Moi ban nhap vao so thu nhat:");
	scanf("%d",&a);
	printf("Moi ban nhap vao so thu hai:");
	scanf("%d",&b);
	//Tim UCLN cua a va b
	for (int i=a;i>1;i--){
		if(a%i==0 && b%i==0){
			printf("Uoc chung lon nhat cua %d va %d la: %d", a, b, i);
			break; // khi i tim duoc 2 so a va b deu chia het thi dung lai
		}
	}
}
