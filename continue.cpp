#include<stdio.h>
int main(){
	int i,r;
	
	for(i=1;i<=100;i=i+1){
		
		r=i%5;
		
		if(r==0)
			continue;
	
		printf("\n %d ",i);
	}
	return 0;
}
