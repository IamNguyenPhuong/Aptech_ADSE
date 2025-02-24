#include <stdio.h>
struct Grade{
	char monHoc[50];
	float diem;
};
int main() {
	struct Grade GD[3];
	for(int i=0;i<3;i++){
		printf("Nhap mon hoc thu %d: ",i+1);
		gets(GD[i].monHoc);
	}
	for(int i=0;i<3;i++){
		printf("%s\t",GD[i].monHoc);
	}
}

