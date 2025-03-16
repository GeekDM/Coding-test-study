#include <stdio.h>

float fake(float max, float score);

int main(){
	
	int num = 0;
	float max = 0;
	float sum = 0;
	
	scanf("%d", &num);
	float score[num];
	
	for(int i = 0; i < num; i++){	// 과목 점수를 입력 받는 반복문
		float a = 0;
		scanf("%f", &a);
		score[i] = a;
	}
	
	for(int i = 0; i < num; i++){	// 최댓값을 구하는 반복문
		if(max < score[i]){
			max = score[i];
		}
	}
	
	for(int i = 0; i < num; i++){	// 새로운 값으로 바꾸고 전체 합을 구하는 반복문
		score[i] = fake(max, score[i]);
		sum += score[i];
	}
	
	sum = sum/num;	// 새로운 평균을 구하는 연산
	
	printf("%.2f", sum);
	
	return 0;
}

float fake(float max, float score){	// 새로운 값으로 바꾸는 함수
	float new_score;
	
	new_score = score/max*100;
	
	return new_score;
}

/*
1. 과목 수를 입력 받음
2. 과목 점수를 입력 받음
3. 최댓값을 구함
4. 새로운 값으로 바꿈
5. 새로운 값으로 평균을 구함
6. 출력
*/