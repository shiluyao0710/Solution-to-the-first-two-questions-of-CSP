#include <stdio.h>
#define MAXN 20 //���������鼮����

int main() {
    int n, m; //�����鼮�����Ͱ�������
    int price[MAXN]; //����ÿ����ļ۸�����
    int min_cost, min_set; //������С���Ѻ���С����
    int i, j, sum, set; //����ѭ���������۸��ܺͣ����򷽰�

    scanf("%d %d", &n, &m); //�����鼮�����Ͱ�������
    for (i = 0; i < n; i++) {
        scanf("%d", &price[i]); //����ÿ����ļ۸�
    }

    min_cost = 0; //��ʼ����С����Ϊ0
    for (i = 0; i < n; i++) {
        min_cost += price[i]; //�ۼ�������ļ۸�
    }
    min_set = (1 << n) - 1; //��ʼ����С����Ϊȫ1����ʾȫ������

    for (i = 0; i < (1 << n); i++) { //�������п��ܵĹ��򷽰�
        sum = 0; //��ʼ���۸��ܺ�Ϊ0
        for (j = 0; j < n; j++) {
            if (i & (1 << j)) { //�����jλΪ1����ʾ�����j����
                sum += price[j]; //�ۼӸ���ļ۸�
            }
        }
        if (sum >= m && sum < min_cost) { //����۸��ܺʹ��ڵ��ڰ���������С�ڵ�ǰ����С����
            min_cost = sum; //������С����
            min_set = i; //������С����
        }
    }

    printf("%d\n", min_cost); //�����С����
    return 0;
}
