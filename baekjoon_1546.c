#include <stdio.h>

float fake(int max, int score);

int main(){
	
	int num = 0;
	
	scanf("%d", &num);
	int score[num];
	
	for(i = 0; i < num; i++){
		int a = 0;
		scanf("%d", &a);
		score[i] = a;
	}
	
	return 0;
}

float fake(int max, int score){
	int score = score;
	int max = max;
	
	float new score;
	
	new_score = score/max*100;
	
	return new_score;
}