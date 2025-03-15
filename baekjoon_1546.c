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

/*
1. 과목 수를 입력 받음
2. 구목 점수를 입력 받음
3. 최댓값을 구함
4. 새로운 값으로 바꿈
5. 새로운 값으로 평균을 구함
6. 출력
*/