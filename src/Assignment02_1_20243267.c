#include <stdio.h>

int main() {

	int germ = 10; //초기 세균 수
	int multiplication = 4; // 증식률
	int time=0; //시간 변수
	
	while (time < 7) {
		time += 1;  //while문이 한 번 반복될 때 마다 +1 하기
		germ *= multiplication; //1시간이 지날 때마다 4를 곱해주기

		
	}
	printf("7시간 후의 세균의 수는 %d마리입니다.", germ); //값을 출력하기





}