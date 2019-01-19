#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int ToBinary(int num){
	int result[4] = {0,};	//4칸배열을 0으로 초기화합니다. 
	int i = 3;				//가장 작은 자릿숫자부터 채우기에 3번인덱스부터 봅니다. 
	while (num>0){
		result[i] = num%2;	// 2로 나눈 나머지를 result 배열의 i인덱스에 삽입 
		num = num/2;
		i -= 1;
	}
	
	for (i = 0; i<4; i++){
		printf("%d", result[i]);	//바뀐 결과를 출력해줍니다. 
	}
	printf(" ");
	
	return 0;
}

int main() {
	int num;
	int dividelist[20] = {-1,};			//20자리까지 받을 수 있는 배열입니다. int형은 어차피 20자리를 넘지 못합니다. 
	int i = 0;
	int j;
	printf("10진수 숫자를 입력하세요: ");
	scanf("%d", &num);				//입력 
	
	
	printf("분할합니다.\n");
	
	while (num >=1) {
		dividelist[i] = num%10;		//분할 합니다. 
		i += 1;
		num = num/10; 
	}
	
	printf("분할된 결과는 ");			//분할 결과 출력 
	for (j = i-1; j>=0; j--){
		printf("%d ", dividelist[j]);
	}
	
	printf("\n\n각 자릿수를 이진수로 변환한 결과입니다.\n");
	for (j = i-1; j >= 0; j--){
		ToBinary(dividelist[j]);		//앞서 선언한 함수로 각 자리별 이진으로 바꾸어 출력 
	}
	
	return 0;
}
