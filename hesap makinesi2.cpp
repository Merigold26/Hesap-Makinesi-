#include<stdio.h>
#include <conio.h>
int main()
{

int birincisayi,ikincisayi; //tam say� girmek i�in int
char tus; //karakter girmek i�in bu
long sonuc; //32 bitten fazla tam say� girmek i�in


printf("hesap makinesine hos geldiniz \n");
printf("toplama yapmak icin + tusuna, cikarma yapmak icin - tusuna, carpma yapmak icin * tusuna, bolme yapmak icin / basiniz \n");
scanf("%c",&tus);
if(tus=='+'){
	printf("toplama islemine girdiniz \n");
	printf("ilk sayiyi giriniz \n");
	scanf("%d",&birincisayi);
	printf("ikinci sayiyi giriniz \n");
	scanf("%d",&ikincisayi);
	sonuc=birincisayi+ikincisayi;
	printf("sonuc=%d \n",sonuc);
}
else if (tus=='-'){
	printf("cikarma islemine girdiniz \n");
	printf("ilk sayiyi giriniz \n");
	scanf("%d",&birincisayi);
	printf("ikinci sayiyi giriniz \n");
	scanf("%d",&ikincisayi);
	sonuc=birincisayi-ikincisayi;
	printf("sonuc=%d \n",sonuc);	
}	
else if (tus=='*'){
	printf("carpma islemine girdiniz \n");
	printf("ilk sayiyi giriniz \n");
	scanf("%d",&birincisayi);
	printf("ikinci sayiyi giriniz \n");
	scanf("%d",&ikincisayi);
	sonuc=birincisayi*ikincisayi;
	printf("sonuc=%d \n",sonuc);	
}
else if (tus=='/'){
	printf("bolme islemine girdiniz \n");
	printf("ilk sayiyi giriniz \n");
	scanf("%d",&birincisayi);
	printf("ikinci sayiyi giriniz \n");
	scanf("%d",&ikincisayi);
	sonuc=birincisayi/ikincisayi;
	printf("sonuc=%d \n",sonuc );	
}
	printf("hesap makinemi kullandiginiz icin sag olun bu sadece bir ogrenci projesidir :)");
	return 0;
}
















