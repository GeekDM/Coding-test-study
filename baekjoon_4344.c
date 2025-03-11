#include <stdio.h>

void main(){
	int s_num = 0;	/* 과목 수를 저장할 변수 */
	int p_num = 0;	/* 사람 수를 저장할 변수 */
	
	scanf("%d", &s_num);
	float avg[s_num];	/* 평균 넘는 사람 평균 값을 저장할 배열 */
	
	for(int i=0; i<s_num; i++){
		scanf("%d", &p_num);
		float score[p_num];	/* 학생들의 점수를 저장할 배열 */
		int count = 0;		/* 조건에 해당하는 사람 수를 저장할 변수 */
		float s_avg = 0;	/* 평균을 저장할 변수 */
		
		for(int j=0; j<p_num; j++){
			int a = 0;
			scanf("%d", &a);
			score[j] = a;
			s_avg += a;
		}
		
		s_avg = s_avg / p_num;
		
		for(int j=0; j<p_num; j++){
			if(s_avg < score[j]){
				count++;
			}
		}
		
		count = count / p_num * 100;
		
		avg[i] = count;
	}
	
	for(int i=0; i<s_num; i++){
		printf("%.000f%%\n", avg[i]);
	}
};

/*
1. 과목 수를 입력 받음 											int s_num;
2. 사람 수를 입력 받음											int p_num;
3. 사람들의 과목 점수를 저장함									int score[p_num];
4. 사람들의 과목 점수의 평균을 다른 변수에 저장함					float s_avg;
5. 저장 된 평균과 비교해서 더 높은 사람의 수만큼 카운트 함			if(s_avg<score[i]) {count++};
6. 더 높은 점수를 가진 사람의 수의 평균값을 다른 배열에 저장함		float avg[s_num];
*/