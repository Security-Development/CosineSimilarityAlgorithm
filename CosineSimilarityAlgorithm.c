#include <stdio.h>
#include <math.h>

double cos_similarity(int a[], int b[], int size) {
	double aa = 0, bb = 0, vector, hypotenuse;
	
	// 벡터의 내적을 구하는 부분
	for(int i = 0; i < size; i++) {
		vector += a[i] * b[i];
		aa += pow(a[i], 2);
		bb += pow(b[i], 2);	
	}
	
	// 피타고라스 정리를 이용해 빗변 구하기
	hypotenuse = sqrt(aa) * sqrt(bb);
	
	printf("%f %f \n\n", vector, hypotenuse);

	return vector / hypotenuse;
}

int main() { 
	int a[4] = {0, 1, 1, 1};
	int b[4] = {1, 0, 1, 1};
	double result = cos_similarity(a, b, 4);
	
	printf("%f", result);	
}
