#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int B,D;
	int temp;
	int input_num[5];
	printf("��J5�ӼƱƤj�p");
	scanf(" %d %d %d %d %d", &input_num[0],&input_num[1],&input_num[2],&input_num[3],&input_num[4]);
	
	for(D=0;D<5;D++){
		for(B=D+1;B<5;B++){
			if(input_num[B]<input_num[D]){
				temp=input_num[B];
				input_num[B]=input_num[B];
				input_num[D]=temp;
			}
		}
	}
	printf("�̤p�Ȭ�:%d",input_num[0]);
	system("pause");
	return 0;
	
}
