#include<stdio.h>
int main(){
	int a,b;
	printf("Moi ban nhap vao so thu nhat:");
	scanf("%d",&a);
	printf("Moi ban nhap vao so thu hai:");
	scanf("%d",&b);
	//Tim UCLN cua a va b
	for (int j=1;;j++){ // bieu thuc dieu kien de trong : cho lap vo han
		if(j%a==0 && j%b==0){
			printf("Boi chung nho nhat cua %d va %d la: %d", a, b, j);
			break;  //khi i tim duoc 2 so a va b deu chia het thi dung lai
		}
	}
}
