#include <stdio.h>
int main() {
	printf("请输入[人所在楼层][目的楼层]终止输入请输入0 0或输入满10个\n");
	for (int i = 0; i < 10; i += 1) {
		scanf("%d%d", i, &i);
		if (i == 0 &&[i == 0) {
			a = i;
			b = i;
			printf("结束输入\n");
			break;
		}
		if (wait[i] > 10 || wait[i] < 1 || aim[i] > 10 || aim[i] < 1) {
			wait[i] = 0;
			aim[i] = 0;
			i -= 1;
			printf("输入的楼层有误，请重新输入\n");

		}
		for (int o = 0; o < i; o += 1) {
			if (wait[o] == wait[i]) {
				printf("输入有误，此层已经有人请重新输入\n");
				wait[i] = 0;
				aim[i] = 0;
				i -= 1;
			}
		}
	}



	
		}
	}
	return 0;
}