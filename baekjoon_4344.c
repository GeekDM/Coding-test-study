#include <stdio.h>

void main(){
	int p_num = 0;
	int s_num = 0;
	
	scanf("%d", &p_num);
	int avg[p_num];
	
	for(int i=0; i<p_num; i++){
		scanf("%d", &s_num);
		int score = 0;
		
		for(int j=0; j<s_num; j++){
			int a = 0;
			scanf("%d", &a);
			score += a;
		}
		
		avg[i] = score/s_num*100;
	}
	
	for(int i=0; i<p_num; i++){
		printf("%d%%\n", avg[i]);
	}
}