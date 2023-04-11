#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000
#define SWAP(x, y, t) ( (t)=(x), (x)=(y), (y)=(t) )

void selection_sort(int list[], int n)
{
	int i, j, least, temp;
	for (i = 0; i < n - 1; i++) {
		least = i;
		for (j = i + 1; j < n; j++) 	// 최소값 탐색
			if (list[j] < list[least]) 
				least = j;
		SWAP(list[i], list[least], temp);
	}
}

int main(void)
{
	int i; int list[MAX_SIZE];
	int n;
	scanf("%d", &n);

	

	for (i = 0; i < n; i++)
		scanf("%d", &list[i]);

	selection_sort(list, n); // 선택정렬 호출 
	for (i = 0; i < n; i++)
		printf("%d\n", list[i]);
	
	return 0;
}