#include <stdio.h>

int count = 0;

void subsequence(int arr[], int n, int targetSum, int currentSum, int index) {
    // 부분 수열의 합이 목표 합과 같으면 count 증가
    if (currentSum == targetSum) {
        count++;
        return;  // 수정: 더 이상 재귀 호출하지 않음
    }

    // 모든 원소를 확인하며 재귀적으로 호출
    for (int i = index; i < n; i++) {
        currentSum += arr[i];
        subsequence(arr, n, targetSum, currentSum, i + 1);
        currentSum -= arr[i];
    }
}

int main() {
    int N, S;
    scanf("%d %d", &N, &S);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    subsequence(arr, N, S, 0, 0);

    printf("%d\n", count);

    return 0;
}
