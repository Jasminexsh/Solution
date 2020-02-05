/*
本题要求计算 A/B，其中 A 是不超过 1000 位的正整数，B 是 1 位正整数。你需要输出商数 Q 和余数 R，使得 A=B×Q+R 成立。
输入格式：
输入在一行中依次给出 A 和 B，中间以 1 空格分隔。
输出格式：
在一行中依次输出 Q 和 R，中间以 1 空格分隔。
输入样例：
123456789050987654321 7
输出样例：
17636684150141093474 3
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char A[1001]={0};
	int B,Q,R=0;
	scanf("%s %d",&A,&B);
	int num=0;
	int j;
	for(j=0;j<strlen(A);j++)
	{
		Q=(10*R+(A[j]-'0'))/B;
		if(!(Q==0 && j==0 && strlen(A)>1))
		{
			printf("%d",Q);
		}
		R=(10*R+(A[j]-'0'))%B; 
	}
	printf(" %d\n",R);
	return 0;
}
