#include <stdio.h>

int main() {

	int arr[10];
	int count_arr[7] = { 0, };

	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}

	// 개수 세기
	for (int i = 0; i < 10; i++) {
		count_arr[arr[i]]++;
	}

	// 개수 출력
	for (int i = 1; i < 7; i++) {
		printf("%d - %d\n", i, count_arr[i]);
	}

	return 0;

}