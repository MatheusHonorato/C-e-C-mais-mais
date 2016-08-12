#include <stdio.h>
 
int main(){
	
	int n,total=1;
	
	scanf("%d",&n);
	
	while(n>1){
		total=total*n;
		n--;
	}
	 
	printf("%d\n",total);
	
	return 0;
} 
