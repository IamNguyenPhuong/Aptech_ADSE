#include <stdio.h>
#include<math.h>

int main(){
	for(int i=1;i<=1000000;i++){
		long long tong=1;
		for(int j=2;j<=sqrt(i);j++){
				if(i%j==0){
				tong+=j;
				if(j*j!=i){
					// voi doan nay j luon khoi tao j=1, ban cong luon i vo tong la sai
					// vay ta nen co logic j=2
					//nhung 1 luon la uoc cua so hoan hao, ta day tong=1
					tong +=i/j;
				}
			}
		}
		if(i==tong) printf("%d\t",i);
		
	}
	
}
