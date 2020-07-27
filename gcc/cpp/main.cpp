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

	int num = 9;   //1~9 까지  (0~9까지로 바꾸려면, +1 을 제거하고 9까지)
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

					if(num==10)      //1~9 까지 일경우 지워도 됨, 1~10까지 경우를 위해 존재
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

	
	if((strike == 0) && (ball == 0))  //아웃처리
	{
		//foranswer 의 값을 table 에서 찾아 -1 처리
		for(int i=0; i<total; i++)
		{
			if( table[i][0] == foranswer[0] || table[i][0] == foranswer[1] || table[i][0] == foranswer[2] || table[i][1] == foranswer[0] || table[i][1] == foranswer[1] || table[i][1] == foranswer[2] || table[i][2] == foranswer[0] || table[i][2] == foranswer[1] || table[i][2] == foranswer[2])
			{
				table[i][3] = -1;
			}
		}
	}

	//같은 strike & ball 값을 가지는 table 값을 찾아서 판단값을 -1 로 결정

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
		
		//테이블 값 초기화.
		first(table, total);
		
		//랜덤값 생성
		srand(time(NULL));
		
		
		printf("컴퓨터가 풀어야할 정답을 입력해 주세요 \n(숫자 3개 빈칸으로 띄어쓰기 (1~9 사이숫자)) : ");
		scanf("%d %d %d", &answer[0], &answer[1], &answer[2]);
		
		
		do{
			num++;
			
			choice=rand()%total;
			
			//foranswer 찾기
			findforanswer(table, choice, foranswer);
			
			//strike, ball 찾기
			printf("================================================\n[%d] 컴퓨터의 선택 : %d %d %d  \n", num, foranswer[0], foranswer[1], foranswer[2]);
			/*
			printf("     strike 갯수를 넣어주세요 : ");
			scanf("%d", &strike);
			printf("     ball 갯수를 넣어주세요 : ");
			scanf("%d", &ball);
			
			*/
			
			
			strike = findStrike(foranswer, answer);
			ball = findball(foranswer, answer);
			
			
			printf("     ------%d strike, %d ball-----\n", strike, ball);
			
			//입력 이후처리 after 함수
			re = after(table, foranswer, strike, ball, total);
			//		printll(table, total); //
			//printf("\n%d %d %d %d\n", answer[0], answer[1], answer[2], total);
			//테이블정리
			remove(table, total);
			
			if(total == 0)
			{
				printf("\n\n================================================\n입력된 값이 정확한지 확인해 주십시오\n================================================\n");
				break;
			}
			
		}while(re);
		
		if(strike == 3)
			printf("컴퓨터는 %d 만에 성공하였습니다.\n", num);
	}
	return 0;
}
