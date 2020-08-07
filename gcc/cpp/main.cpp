#include "stdio.h"
#include "time.h"
#include "stdlib.h"

void printll(int (*table)[4], int total)
{
	for(int i=0; i<total+5; i++)
	{
		printf("%d %d %d %d \n", table[i][0], table[i][1], table[i][2], table[i][3]);
	}
}

int findStrike(int *foranswer, int *answer)
{
	int s = 0;
	for(int i=0; i<3; i++)
	{
		if(answer[i] == foranswer[i])
			s++;
	}
	return s;
}

int findball(int *foranswer, int *answer)
{
	int b = 0;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			if((i != j) && (answer[i] == foranswer[j]))
				b++;
		}
	}

	return b;
}


void findforanswer(int (* table)[4], int &choice, int *foranswer)
{
	foranswer[0] = table[choice][0];
	foranswer[1] = table[choice][1];
	foranswer[2] = table[choice][2];
}

void first(int (*table)[4], int &total)
{

	int num = 9;   //1~9 ����  (0~9������ �ٲٷ���, +1 �� �����ϰ� 9����)
	for(int i=0; i<num; i++)
	{
		for(int j=0; j<num; j++)
		{
			for(int k=0; k<num; k++)
			{
				if(i!=j && i!=k && j!=k)
				{
					table[total][0] = i+1;
					table[total][1] = j+1;
					table[total][2] = k+1;
					if(i==j || i==k || j==k)
					{
						table[total][3] = -1;
					}else
					{
						table[total][3] = 1;
					}

					if(num==10)      //1~9 ���� �ϰ�� ������ ��, 1~10���� ��츦 ���� ����
					{
						table[total][0]--;
						table[total][1]--;
						table[total][2]--;
					}

					total++;                        
				}				
			}
		}
	}
}

int after(int (* table)[4], int *foranswer, int &strike, int &ball, int total)
{
	if(strike == 3)
		return 0;

	
	if((strike == 0) && (ball == 0))  //�ƿ�ó��
	{
		//foranswer �� ���� table ���� ã�� -1 ó��
		for(int i=0; i<total; i++)
		{
			if( table[i][0] == foranswer[0] || table[i][0] == foranswer[1] || table[i][0] == foranswer[2] || table[i][1] == foranswer[0] || table[i][1] == foranswer[1] || table[i][1] == foranswer[2] || table[i][2] == foranswer[0] || table[i][2] == foranswer[1] || table[i][2] == foranswer[2])
			{
				table[i][3] = -1;
			}
		}
	}

	//���� strike & ball ���� ������ table ���� ã�Ƽ� �Ǵܰ��� -1 �� ����

	for(int i=0; i<total ; i++)
	{
		int s=0, b=0;
		s=findStrike(foranswer, table[i]);
		b=findball(foranswer, table[i]);
		
		if((s!=strike) || (b!=ball))
		{
			table[i][3] = -1;
		}
	}

	return 1;
}

void remove(int (* table)[4], int &total)
{
	for(int z=0; z<total; z++)
	for(int i=0; i<total; i++)
	{
		for(int j=0; j<total; j++)
		{
			if(table[j][3] == -1)
			{
				table[j][0] = table[total-1][0];
				table[j][1] = table[total-1][1];
				table[j][2] = table[total-1][2];
				table[j][3] = table[total-1][3];
				table[total-1][3] = -1;
				total--;
			}
		}
	}

}

int main()
{
	int table[720][4];  //720 => 0~9  :: 504 => 1~9
	int total = 0;
	int choice = 0;
	int answer[3] = { 4, 8, 6};
	int foranswer[3];
	int strike = 0, ball = 0;
	int re = 1;
	int num = 0;
	while(1){
		num = 0;
		re = 1;
		
		//���̺� �� �ʱ�ȭ.
		first(table, total);
		
		//������ ����
		srand(time(NULL));
		
		
		printf("��ǻ�Ͱ� Ǯ����� ������ �Է��� �ּ��� \n(���� 3�� ��ĭ���� ���� (1~9 ���̼���)) : ");
		scanf("%d %d %d", &answer[0], &answer[1], &answer[2]);
		
		
		do{
			num++;
			
			choice=rand()%total;
			
			//foranswer ã��
			findforanswer(table, choice, foranswer);
			
			//strike, ball ã��
			printf("================================================\n[%d] ��ǻ���� ���� : %d %d %d  \n", num, foranswer[0], foranswer[1], foranswer[2]);
			/*
			printf("     strike ������ �־��ּ��� : ");
			scanf("%d", &strike);
			printf("     ball ������ �־��ּ��� : ");
			scanf("%d", &ball);
			
			*/
			
			
			strike = findStrike(foranswer, answer);
			ball = findball(foranswer, answer);
			
			
			printf("     ------%d strike, %d ball-----\n", strike, ball);
			
			//�Է� ����ó�� after �Լ�
			re = after(table, foranswer, strike, ball, total);
			//		printll(table, total); //
			//printf("\n%d %d %d %d\n", answer[0], answer[1], answer[2], total);
			//���̺�����
			remove(table, total);
			
			if(total == 0)
			{
				printf("\n\n================================================\n�Էµ� ���� ��Ȯ���� Ȯ���� �ֽʽÿ�\n================================================\n");
				break;
			}
			
		}while(re);
		
		if(strike == 3)
			printf("��ǻ�ʹ� %d ���� �����Ͽ����ϴ�.\n", num);
	}
	return 0;
}
