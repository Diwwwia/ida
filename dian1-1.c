#include <stdio.h>
int main() {

	int a, b, c;
	printf("请输入哪层有一人等候电梯:,请输入要到哪一层：,请输入电梯此时在哪一层\n");
	scanf("%d%d%d", &a, &b, &c);
	//表⽰第a层有⼀⼈等候电梯到第b层以及电梯此时所在的层数c
	printf("%d %d %d\n%d %d %d\n%d %d %d", c, 0, 0, a, abs(a - c), 1, b, abs(a - c) + abs(b - a), 0);
	//绝对值（因运行单位并无负数，须以正数叠加）
	//输出结果第一列为电梯所在楼层，第二列为电梯运行的单位时间，第三列为电梯内现有人数
	//第三列（已完成送客，即乘客要在此楼层出电梯时，电梯内人数不包含该乘客）
	return 0;
}