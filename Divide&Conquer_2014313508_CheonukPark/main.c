#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int ToBinary(int num){
	int result[4] = {0,};	//4ĭ�迭�� 0���� �ʱ�ȭ�մϴ�. 
	int i = 3;				//���� ���� �ڸ����ں��� ä��⿡ 3���ε������� ���ϴ�. 
	while (num>0){
		result[i] = num%2;	// 2�� ���� �������� result �迭�� i�ε����� ���� 
		num = num/2;
		i -= 1;
	}
	
	for (i = 0; i<4; i++){
		printf("%d", result[i]);	//�ٲ� ����� ������ݴϴ�. 
	}
	printf(" ");
	
	return 0;
}

int main() {
	int num;
	int dividelist[20] = {-1,};			//20�ڸ����� ���� �� �ִ� �迭�Դϴ�. int���� ������ 20�ڸ��� ���� ���մϴ�. 
	int i = 0;
	int j;
	printf("10���� ���ڸ� �Է��ϼ���: ");
	scanf("%d", &num);				//�Է� 
	
	
	printf("�����մϴ�.\n");
	
	while (num >=1) {
		dividelist[i] = num%10;		//���� �մϴ�. 
		i += 1;
		num = num/10; 
	}
	
	printf("���ҵ� ����� ");			//���� ��� ��� 
	for (j = i-1; j>=0; j--){
		printf("%d ", dividelist[j]);
	}
	
	printf("\n\n�� �ڸ����� �������� ��ȯ�� ����Դϴ�.\n");
	for (j = i-1; j >= 0; j--){
		ToBinary(dividelist[j]);		//�ռ� ������ �Լ��� �� �ڸ��� �������� �ٲپ� ��� 
	}
	
	return 0;
}
