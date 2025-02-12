#include<stdio.h>
//int main(){
//	int n;
//	scanf("%d",&n);
//	for(int i=2;i<=sqrt(n);i++){
//		if(n%i==0){
//			printf("khong phai so nguyen to");
//			return 0;
//		}
//	}
//	printf("So nguyen to");
//}
int main() {
    int n;
    int kt;  // viec gan kt=1 la quan trong de khong che so 2 va 3
    printf("Nhap so n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        kt = 1;  // khoi tao lai bien kt o dau moi vòng lap ngoài
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                kt = 0;  // hop so
                break;  // toi uu
            }
        }
        if (kt) {
            printf("%d ", i);
        }
    }
    
    return 0;
}

