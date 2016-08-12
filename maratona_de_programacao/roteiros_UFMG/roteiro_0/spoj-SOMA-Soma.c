#include <stdio.h>
 
int main(){
	
	int n,val,total=0;
	
	scanf("%d",&n);
	
	while(n--){
		scanf("%d",&val);
		total=total+val;
	}
	 
	printf("%d\n",total);
	
	return 0;
}
  
