#include <stdio.h>

int main() {
   int a,b,c,x,y,z;
   printf("Nhap vao ngay dau");
   scanf("%d",&a);
   printf("Nhap vao thang dau");
   scanf("%d",&b);
   printf("Nhap vao nam dau");
   scanf("%d",&c);
   printf("Nhap vao ngay cuoi");
   scanf("%d",&x);
   printf("Nhap vao thang cuoi");
   scanf("%d",&y);
   printf("Nhap vao nam dau");
   scanf("%d",&z);
   if(c>z) printf("sau");
   else if(z>c) printf("truoc");
   else{
   		if(b>y) printf("sau");
   		else if(y>b) printf("truoc");
   		else{
   			if(a>x) printf("sau");
  			else if(x>a) printf("truoc");
  			else printf("bang");
		   }
   }
   
}


//#include <stdio.h> 
//
//int main() {
//    int a, b, c; // Ng�y, th�ng, nam c?a ng�y D
//    int x, y, z; // Ng�y, th�ng, nam c?a ng�y C
//
//    // Nh?p ng�y d?u ti�n D
//    printf("Nhap ngay dau: ");
//    scanf("%d", &a);
//    printf("Nhap thang dau: ");
//    scanf("%d", &b);
//    printf("Nhap nam dau: ");
//    scanf("%d", &c);
//
//    // Nh?p ng�y th? hai C
//    printf("Nhap ngay cuoi: ");
//    scanf("%d", &x);
//    printf("Nhap thang cuoi: ");
//    scanf("%d", &y);
//    printf("Nhap nam cuoi: ");
//    scanf("%d", &z);
//
//    // So s�nh nam
//    if (c < z) {
//        printf("Ket qua: truoc\n");
//    } else if (c > z) {
//        printf("Ket qua: sau\n");
//    } 
//    // So s�nh th�ng n?u nam b?ng nhau
//    else if (b < y) {
//        printf("Ket qua: truoc\n");
//    } else if (b > y) {
//        printf("Ket qua: sau\n");
//    } 
//    // So s�nh ng�y n?u nam v� th�ng b?ng nhau
//    else if (a < x) {
//        printf("Ket qua: truoc\n");
//    } else if (a > x) {
//        printf("Ket qua: sau\n");
//    } 
//    // N?u t?t c? b?ng nhau
//    else {
//        printf("Ket qua: bang\n");
//    }
//
//    return 0;
//}
//van la bai toan nay nhung cach tiep can khac chut, ta khong can else vi neu da ko chay 2 truong hop tren thi mac dinh z=c
