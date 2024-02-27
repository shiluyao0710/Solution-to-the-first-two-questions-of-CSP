#include <stdio.h>
#define MAXN 20 //定义最大的书籍数量

int main() {
    int n, m; //定义书籍数量和包邮条件
    int price[MAXN]; //定义每本书的价格数组
    int min_cost, min_set; //定义最小花费和最小方案
    int i, j, sum, set; //定义循环变量，价格总和，购买方案

    scanf("%d %d", &n, &m); //输入书籍数量和包邮条件
    for (i = 0; i < n; i++) {
        scanf("%d", &price[i]); //输入每本书的价格
    }

    min_cost = 0; //初始化最小花费为0
    for (i = 0; i < n; i++) {
        min_cost += price[i]; //累加所有书的价格
    }
    min_set = (1 << n) - 1; //初始化最小方案为全1，表示全部购买

    for (i = 0; i < (1 << n); i++) { //遍历所有可能的购买方案
        sum = 0; //初始化价格总和为0
        for (j = 0; j < n; j++) {
            if (i & (1 << j)) { //如果第j位为1，表示购买第j本书
                sum += price[j]; //累加该书的价格
            }
        }
        if (sum >= m && sum < min_cost) { //如果价格总和大于等于包邮条件且小于当前的最小花费
            min_cost = sum; //更新最小花费
            min_set = i; //更新最小方案
        }
    }

    printf("%d\n", min_cost); //输出最小花费
    return 0;
}
