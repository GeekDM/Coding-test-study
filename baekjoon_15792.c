# include<stdio.h>

int main(){
	
	long double n1, n2, result;
	
	scanf("%Lf %Lf", &n1, &n2);
	
	result = n1 / n2;
	
	printf("%Lf", result);
	
	return 0;
}