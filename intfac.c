#include<stdio.h>

int main(){
	int in;
	int i2 = 0,i3 = 0,i5 = 0,i7 = 0,i11 = 0,i13 = 0,i17 = 0,i19 = 0,i23 = 0,i29 = 0,i31 = 0;
	int dead = 0,live = 0;
	printf("素因数分解したい整数を入力してください\n");
	scanf("%d",&in);
	printf("入力された値:%d\n",in);
	while(in == 1){
		if(in % 2 = 0){
			in /= 2;
			i2 += 1;
			live += 1;
		}
		else if(in % 3 = 0){
			in /= 3;
			i3 += 1;
			live += 1;
		}
		else if(in % 5 = 0){
			in /= 5;
			i5 += 1;
			live += 1;
		}
		else if(in % 7 = 0){
			in /= 7;
			i7 += 1;
			live += 1;
		}
		else if(in % 11 = 0){
			in /= 11;
			i11 += 1;
			live += 1;
		}
		else if(in % 13 = 0){
			in /= 13;
			i13 += 1;
			live += 1;
		}
		else if(in % 17 = 0){
			in /= 17;
			i17 += 1;
			live += 1;
		}
		else if(in % 19 = 0){
			in /= 19;
			i19 += 1;
			live += 1;
		}
		else if(in % 23 = 0){
			in /= 23;
			i23 += 1;
			live += 1;
		}
		else if(in % 29 = 0){
			in /= 29;
			i29 += 1;
			live += 1;
		}
		else if(in % 31 = 0){
			in /= 31;
			i31 += 1;
			live += 1;
		}
		else if(in % 37 = 0){
			in /= 37;
			i37 += 1;
			live += 1;
		}
		else if(in % 41 = 0){
			in /= 41;
			i41 += 1;
			live += 1;
		}
		else if(in % 43 = 0){
			in /= 43;
			i43 += 1;
		}
		else if(in % 47 = 0){
			in /= 47;
			i47 += 1;
			live += 1;
		}
		else if(in % 53 = 0){
			in /= 53;
			i53 += 1;
			live += 53;
		}
		else if(in % 59 = 0){
			in /= 59;
			i59 += 1;
			live += 59;
		}
		else if(in % 61 = 0){
			in /= 61;
			i61 += 1;
			live += 1;
		}
		else if(in % 67 = 0){
			in /= 67;
			i67 += 1;
			live += 1;
		}
		else if(in % 71 = 0){
			in /= 71;
			i71 += 1;
			live += 1;
		}
		else if(in % 73 = 0){
			in /= 73;
			i73 += 1;
			live += 1;
		}
		else if(in % 79 = 0){
			in /= 79;
			i79 += 1;
			live += 79;
		}
		else {dead = 1;
			in = 1;
		}
	}
	if((dead == 1)&&(live > 0))
		printf("＊101以上の素数が含まれています＊\n2が%d個|3が%d個|5が%d個\n7が個%d|11が%d個|13が%d個\n17が%d個|19が%d個|23が%d個\n29が%d個|31が%d個",i2,i3,i5,i7,i11,i13,i17,i19,i23,i29,i31);
	else if((dead == 1)&&(live == 0))
		printf("入力された整数は101未満の素数で分解できない値であるか、素数です。\n");
	else
		printf("2が%d個|3が%d個|5が%d個\n7が個%d|11が%d個|13が%d個\n17が%d個|19が%d個|23が%d個\n29が%d個|31が%d個",i2,i3,i5,i7,i11,i13,i17,i19,i23,i29,i31);
	return 0;
}
