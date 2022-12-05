#include<stdio.h>
#include<time.h>

int main() {

	clock_t start, end;
	printf("エンターキーを押すと計測開始");

	getchar();
	start = clock();
	printf("エンターキーを押すと計測を終了します");

	getchar();
	end = clock();
	printf(
		"CPU時間(start):%f\nCPU時間(end):%f\n実時間換算：%f seconds\n", (double)start, (double)end, (double)(end - start) / CLOCKS_PER_SEC);


	return 0;

};
