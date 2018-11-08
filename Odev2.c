#include<stdio.h>


int main()
{
	int islem, a3 ,a4, topl2;
	float a1, a2, topl;
	char c1, c2;
	baslangic:
	printf("1.Toplama\n2.Cikarma\n3.Carpma\n4.Bolme\n5.Mod\nYapmak istediginiz islem numarasini giriniz\n");
	scanf("%d", &islem);
	switch(islem){
		case 1:
			
			printf("TOPLAMA\n\nBirinci sayiyi giriniz:\n");
			scanf("%f",&a1);
			printf("Ikinci sayiyi giriniz:\n");
			scanf("%f",&a2);
			topl = a1 + a2;
			printf("Sonuc %.2f 'dir\n", topl);
			printf("Basa donmek icin Y harfine basiniz\n");
	        scanf(" %c", &c1);
	if (c1 == 'y')
	{
		goto baslangic;
	}
	break;
	
			case 2:
			
			printf("CIKARMA\n\nBirinci sayiyi giriniz:\n");
			scanf("%f",&a1);
			printf("Ikinci sayiyi giriniz:\n");
			scanf("%f",&a2);
			topl = a1 - a2;
			printf("Sonuc %.2f 'dir\n", topl);
			printf("Basa donmek icin Y harfine basiniz\n");
	        scanf(" %c", &c1);
	if (c1 == 'y')
	{
		goto baslangic;
	}
	break;
			case 3:
			
			printf("CARPMA\n\nBirinci sayiyi giriniz:\n");
			scanf("%f",&a1);
			printf("Ikinci sayiyi giriniz:\n");
			scanf("%f",&a2);
			topl = a1 * a2;
			printf("Sonuc %.2f 'dir\n", topl);
			printf("Basa donmek icin Y harfine basiniz\n");
	        scanf(" %c", &c1);
	if (c1 == 'y')
	{
		goto baslangic;
	}
	break;
			case 4:
			
			printf("BOLME\n\nBirinci sayiyi giriniz:\n");
			scanf("%f",&a1);
			printf("Ikinci sayiyi giriniz:\n");
			scanf("%f",&a2);
			topl = a1 / a2;
			printf("Sonuc %.2f 'dir\n", topl);
			printf("Basa donmek icin Y harfine basiniz\n");
	        scanf(" %c", &c1);
	if (c1 == 'y')
	{
		goto baslangic;
	}
	break;
	
		case 5:
			
			printf("MOD\n\nBirinci sayiyi giriniz:\n");
			scanf("%d",&a3);
			printf("Ikinci sayiyi giriniz:\n");
			scanf("%d",&a4);
			topl2 = a3 % a4;
			printf("Sonuc %d 'dir\n", topl2);
			printf("Basa donmek icin Y harfine basiniz\n");
	        scanf(" %c", &c1);
	if (c1 == 'y')
	{
		goto baslangic;
	}
	break;
		
		default:
		
		printf("Yanlis islem lutfen 1-5 arasinda bir deger giriniz\n");
		goto baslangic;
		break;		
			
			
			
		
	}
	
	return 0;

}
