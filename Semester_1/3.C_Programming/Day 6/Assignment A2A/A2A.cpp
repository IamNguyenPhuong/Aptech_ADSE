#include <stdio.h>

main(){
	int chon;
	int tongTien = 0;
	char chonNuoc;
	do{
		printf("1. Nhap tien\n");
		printf("2. Mua nuoc\n");
		printf("3. Rut tien\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &chon);
		
		switch(chon){
			case 1:
				int tien;
				printf("Nhap so tien ban muon: ");
				scanf("%d", &tien);
				tongTien += tien;
				break;
			case 2:
				fflush(stdin);
				printf("Ban muon mua gi: ");
				scanf("%c", &chonNuoc);
				switch(chonNuoc){
					case 'A':
						if(tongTien >= 10000){
							printf("Ban da mua Cafe den, chuc ngon mieng\n");
							tongTien -= 10000;
						} else {
							printf("Ban khong du tien\n");
						}
						break;
					case 'B':
						if(tongTien >= 15000){
							printf("Ban da mua Cafe sua, chuc ngon mieng\n");
							tongTien -= 15000;
						} else {
							printf("Ban khong du tien\n");
						}
						break;
				}
				break;
			case 3:
				printf("Ban da rut lai %d\n", tongTien);
				tongTien = 0;
				break;
		}
	}while(chon != 4);
}
