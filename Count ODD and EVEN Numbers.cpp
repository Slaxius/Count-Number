#include <stdio.h>

int main(){
	
	int n, m;
	
	printf("===================================\n    Count ODD and EVEN Numbers\n===================================\n");
	
	printf("\n\nInsert First Number : ");
	scanf("%d", &n);
	printf("Insert Last Number  : ");
	scanf("%d", &m);
	getchar();
	
	printf("\nNumber List :\n");
		for(int i=n; i<=m; i++){
			printf("%d ", i);
		}
		
	printf("\n\nEvent Number :\n");
		for(int i=n; i<=m; i++){
			if(i%2==0)
			printf("%d ", i);
		}
	
	printf("\n\nOdd Number :\n");
		for(int i=n; i<=m; i++){
			if(i%2!=0)
			printf("%d ", i);
		}
		
	printf("\n\n\n===================================\n Thank you for using this program!\n===================================\n");

	return 0;
}
