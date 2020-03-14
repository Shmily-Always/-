#include<stdio.h>
#pragma warning(disable:4996)                                 //��ֹ�ڴ����
#include<stdlib.h>
#include<time.h>

#define ROW 11                                                //��������
#define ROW2 17
#define ROW3 22
          
#define COL 11                                                //��������
#define COL2 17                                   
#define COL3 22

#define DEFAULT 10                                            //����
#define DEFAULT2 40
#define DEFAULT3 50

int heart();
int letter();                                                 //������Ϸ
void menu();
time_t start,end;

void map1(char mine1[ROW][COL], char show1[ROW][COL]);        //����
void map2(char mine2[ROW2][COL2],char show2[ROW2][COL2]);        
void map3(char mine3[ROW3][COL3],char show3[ROW3][COL3]);
                    
void display1(char show1[ROW][COL]);                          //��ӡ����
void display2(char show2[ROW2][COL2]);
void display3(char show3[ROW3][COL3]);
                 
void set1(char mine1[ROW][COL]);                              //����
void set2(char mine2[ROW2][COL2]);    
void set3(char mine3[ROW3][COL3]); 
                
int get1(char mine1[ROW][COL], int x, int y);                 //ͳ�Ƹ�λ����Χ�׵ĸ���
int get2(char mine2[ROW2][COL2],int x2,int y2);
int get3(char mine3[ROW3][COL3],int x3,int y3);        

void sweep1(char mine1[ROW][COL], char show1[ROW][COL]);      //ɨ��
void sweep2(char mine2[ROW2][COL2],char show2[ROW2][COL2]);
void sweep3(char mine3[ROW3][COL3],char show3[ROW3][COL3]);
   
void easy();                                                  //ѡ��ģʽ
void normal();
void hard();
                                                
int main()
{
    int input = 1;                                            //�����ֵΪ1��ʱ��while���ſ�������ѭ�����Դﵽ������ٴ������Ŀ��                                                  //���ð��ĺ���
    menu();

    while (input)
    {

        printf("��ѡ��ģʽ��\n");
        scanf("%d", &input);
        system("cls");                                        //��������ѡ����������
        switch (input)
        {

        case 0:
            printf("�˳�����\n");                             //switchѭ��ѡ��ģʽ
            break;
        case 1:
            easy();                                          
            break;
		case 2:
			normal();
			break;
        case 3:
			hard();
			break;
        default:
            printf("����ָ��������ѡ��\n");                 //��ѡ���ָ���3ʱ������ѡ��
            break;
        }
    }

    system("pause");       //����ѡ��
    return 0;
}

int heart()
{
	int  i, j, k, l, m;	
	char c=3;	                        //ASCII������ 3 ����һ���ַ�С���� 
	
	for (i=1; i<=5; i++)				
		printf("\n");	                //��ͷ�ճ�5�� 
	
	for (i=1; i<=3; i++) 
	{                                     //ǰ3���м��п�϶�ֿ���д 
		for (j=1; j<=32-2*i; j++)		
			printf(" ");	            //��ߵĿո�ÿ��һ����ߵĿո����һ����2�� //8*n-2*i 
		for (k=1; k<=4*i+1; k++)		
			printf("%c", c);            //�����벿���ַ�С���� 
		for (l=1; l<=13-4*i; l++)		
			printf(" ");	            //�м�Ŀո�ÿ��һ�еĿո����һ����4�� 
		for (m=1; m<=4*i+1; m++)		
			printf("%c", c);            //����Ұ벿���ַ�С����
		printf("\n");		            //ÿһ�������ϻ��� 
	}
	
	for (i=1; i<=3; i++) 
	{	                                //��3���м�û�пո� 
		for (j=1; j<=24+1; j++)			
			printf(" ");	            //��ߵĿո� //8*(n-1)+1
		for (k=1; k<=29; k++)			
			printf("%c", c);            //����ַ�С����
		printf("\n");		            //ÿһ�������ϻ���
	}
	
	for (i=7; i>=1; i--) 
	{	                                //��7�� 
		for (j=1; j<=40-2*i; j++)		
			printf(" ");	            //��ߵĿո�ÿ��һ����ߵĿո����һ����2��//8*(n+1)-2*i
		for (k=1; k<=4*i-1; k++)		
			printf("%c", c);            //ÿ��һ�е��ַ�С���ı���һ����4�������ѭ����i--�� 
		printf("\n");		            //ÿһ�������ϻ���
	}
	
	for (i=1; i<=39; i++)				
		printf(" ");	                //���һ����ߵĿո� 
	printf("%c\n", c);		            //���һ���ַ�С���� 
	
	for (i=1; i<=5; i++)				
		printf("\n");	                 //���ճ�5�� 
	
	return 0;
}


void menu()                //�˵�
{
   
int begin=1;

while(begin)
{

printf("\n\n\n\n\n\n\n\n\n");

printf("\t\t* * * * * * * * * * * * * * * * * * * * * * *\n");
printf("\t\t*                                           *\n");
printf("\t\t*              ��ӭ����ɨ��                 *\n");
printf("\t\t*              ���»س�������               *\n");
printf("\t\t*                                           *\n");
printf("\t\t* * * * * * * * * * * * * * * * * * * * * * *\n\n\n\n");
getchar();
begin=0;                                                                    //��ʾ����begin��ֵ������0�����ǲ���ѭ��
}

system("cls");
printf("\n\n\n\n\n\n\n\n\n");
printf("\t\t|\t0.�˳�                                  \n");
printf("\t\t|\t1.��ģʽ                              \n");
printf("\t\t|\t2.�е�ģʽ                              \n");
printf("\t\t|\t3.����ģʽ                              \n");
}


int letter()
{
	int i;

	for(i=1;i<=5;i++)                  //��ͷ�ճ�5��
	{
		printf("\n");
	}

    printf("*                    *                                   *  * *\n");
	printf("  *                *                                     *        *\n");                                         //Ϊ������ĸ������ʾ���������õ���
    printf("    *            *                                       *           *\n");
	printf("      *        *                                         *             *\n");                                    //ÿ�ж�Ҫ�ӻ��з��ţ�����*��ɢ���޷���ͼ��
	printf("        *    *                                           *              *\n");
	printf("          **                                             *              *\n");
	printf("          **      * * * * * *   *         *              *              *      *        * * * *\n");
	printf("          **      *         *   *         *              *              *             *         *\n");
	printf("          **      *         *   *         *              *              *      *     *            *\n");
	printf("          **      *         *   *         *              *              *      *    * * * * * * * *\n");
	printf("          **      *         *   *         *              *             *       *    *\n");
	printf("          **      *         *   *         *              *            *        *     *\n");
	printf("          **      *         *   *         *              *          *          *      *           *\n");
	printf("          **      * * * * * *   * * * * * *              * *  *  *             *        * * * * *\n");
	
	for(i=1;i<=5;i++)                  //��β�ճ�5��
	{
		printf("\n");
	}
	return 0;
}


void map1(char mine1[ROW][COL], char show1[ROW][COL])             //��ģʽ����
{

	printf("                                               *                *\n");
	printf("                                             ** **            ** **\n");
	printf("                                           ***   ***        ***   ***\n");
	printf("                                         ****     ****     ****    ****\n");
	printf("                                                                                                    \n");
	printf("                                                                                                    \n");

	printf("                                                *****************  \n");
	printf("                                                 **           ** \n");
	printf("                                                  **        **\n");
	printf("                                                    **     ** \n");
	printf("                                                      ***** \n");
	printf("\n");
	printf("                                                ��ӭ�����ģʽ!\n");
    printf("\n");             
    int i = 0;
    int j = 0;

    for (i = 1; i < ROW - 1; i++)
    {
        for (j = 1; j < COL - 1; j++)
        {
            mine1[i][j] = '0';
        }
    }
    for (i = 1; i < ROW - 1; i++)
    {
        for (j = 1; j < COL - 1; j++)
        {
            show1[i][j] = '*';
        }
    }
}


void map2(char mine2[ROW2][COL2], char show2[ROW2][COL2])         //��ͨģʽ����
{

	printf("                                               *                *\n");
	printf("                                             ** **            ** **\n");
	printf("                                           ***   ***        ***   ***\n");
	printf("                                         ****     ****     ****    ****\n");
	printf("                                                                                                    \n");
	printf("                                                                                                    \n");

	printf("                                                *****************  \n");
	printf("                                                 **           ** \n");
	printf("                                                  **        **\n");
	printf("                                                    **     ** \n");
	printf("                                                      ***** \n");
	printf("\n");
	printf("                                                ��ӭ������ͨģʽ!\n");
    printf("\n");             
    int i = 0;
    int j = 0;

    for (i = 1; i < ROW2 - 1; i++)
    {
        for (j = 1; j < COL2 - 1; j++)
        {
            mine2[i][j] = '0';
        }
    }
    for (i = 1; i < ROW2 - 1; i++)
    {
        for (j = 1; j < COL2 - 1; j++)
        {
            show2[i][j] = '*';
        }
    }
}


void map3(char mine3[ROW3][COL3], char show3[ROW3][COL3])          //����ģʽ����
{

	printf("                                               *                *\n");
	printf("                                             ** **            ** **\n");
	printf("                                           ***   ***        ***   ***\n");
	printf("                                         ****     ****     ****    ****\n");
	printf("                                                                                                    \n");
	printf("                                                                                                    \n");

	printf("                                                *****************  \n");
	printf("                                                 **           ** \n");
	printf("                                                  **        **\n");
	printf("                                                    **     ** \n");
	printf("                                                      ***** \n");
	printf("\n");
	printf("                                                ��ӭ��������ģʽ!\n");
    printf("\n");             
    int i = 0;
    int j = 0;

    for (i = 1; i < ROW3 - 1; i++)
    {
        for (j = 1; j < COL3 - 1; j++)
        {
            mine3[i][j] = '0';
        }
    }
    for (i = 1; i < ROW3 - 1; i++)
    {
        for (j = 1; j < COL3 - 1; j++)
        {
            show3[i][j] = '*';
        }
    }
}



void display1(char show1[ROW][COL])                               //չʾ��ģʽ��ͼ
{
    int i, j;
    printf("  ");

    for (i = 1; i < COL - 1; i++)
        printf("%d ", i);
    printf("\n");
    for (i = 1; i < ROW - 1; i++)
    {
        printf("%d ", i);
        for (j = 1; j < COL - 1; j++)
        {
            printf("%c ", show1[i][j]);
        }
        printf("\n");
    }
}


void display2(char show2[ROW2][COL2])                             //չʾ��ͨģʽ��ͼ
{

    int i, j;
    printf("   ");

    for (i = 1; i < COL2 - 1; i++)
	{
		if(i<10)
        printf("%d  ", i);
		else
        printf("%d ", i);
	}
    printf("\n");
    for (i = 1; i < ROW2 - 1; i++)
    {
		if(i<10)
		{
        printf(" %d ", i);
        for (j = 1; j < COL2 - 1; j++)
        {
            printf("%c  ", show2[i][j]);
        }
        printf("\n");
		}
		else
		{
			printf("%d ", i);
        for (j = 1; j < COL2 - 1; j++)
        {
            printf("%c  ", show2[i][j]);
        }
        printf("\n");
		}
    }
}


void display3(char show3[ROW3][COL3])                             //չʾ����ģʽ��ͼ
{

    int i, j;
    printf("   ");

    for (i = 1; i < COL3 - 1; i++)
	{
		if(i<10)
        printf("%d  ", i);
		else
        printf("%d ", i);
	}
    printf("\n");
    for (i = 1; i < ROW3 - 1; i++)
    {
		if(i<10)
		{
        printf(" %d ", i);
        for (j = 1; j < COL3 - 1; j++)
        {
            printf("%c  ", show3[i][j]);
        }
        printf("\n");
		}
		else
		{
			printf("%d ", i);
        for (j = 1; j < COL3 - 1; j++)
        {
            printf("%c  ", show3[i][j]);
        }
        printf("\n");
		}
    }
}


void set1(char mine1[ROW][COL])                                  //��ģʽ����
{

    int x = 0;
    int y = 0;
    int count = DEFAULT;

    srand((unsigned)time(NULL));
    while (count)
    {
        x = rand() % (ROW-2) + 1;
        y = rand() % (COL-2) + 1;
        if (mine1[x][y] == '0')
        {
            mine1[x][y] = '1';
            count--;
        }
    }
}


void set2(char mine2[ROW2][COL2])                                //��ͨģʽ����
{

    int x2 = 0;
    int y2 = 0;
    int count2 = DEFAULT2;

    srand((unsigned)time(NULL));
    while (count2)
    {
        x2 = rand() % (ROW2-2) + 1;
        y2 = rand() % (COL2-2) + 1;
        if (mine2[x2][y2] == '0')
        {
            mine2[x2][y2] = '1';
            count2--;
        }
    }
}


void set3(char mine3[ROW3][COL3])                                //����ģʽ����
{

    int x3 = 0;
    int y3 = 0;
    int count3 = DEFAULT3;

    srand((unsigned)time(NULL));
    while (count3)
    {
        x3 = rand() % (ROW3-2) + 1;
        y3 = rand() % (COL3-2) + 1;
        if (mine3[x3][y3] == '0')
        {
            mine3[x3][y3] = '1';
            count3--;
        }
    }
}




int get1(char mine1[ROW][COL], int x, int y)                     //��ģʽ������
{

    int count = 0;

    if (mine1[x - 1][y - 1] == '1')
        count++;
    if (mine1[x - 1][y] == '1')
        count++;
    if (mine1[x-1][y + 1] == '1')
        count++;
    if (mine1[x][y - 1] == '1')
        count++;
    if (mine1[x ][y + 1] == '1')
        count++;
    if (mine1[x + 1][y - 1] == '1')
        count++;
    if (mine1[x + 1][y] == '1')
        count++;
    if (mine1[x + 1][y + 1] == '1')
        count++;
    return count;
}



int get2(char mine2[ROW2][COL2], int x2, int y2)                //��ͨģʽ������
{

    int count2 = 0;

    if (mine2[x2 - 1][y2 - 1] == '1')
        count2++;
    if (mine2[x2 - 1][y2] == '1')
        count2++;
    if (mine2[x2-1][y2 + 1] == '1')
        count2++;
    if (mine2[x2][y2 - 1] == '1')
        count2++;
    if (mine2[x2 ][y2 + 1] == '1')
        count2++;
    if (mine2[x2 + 1][y2 - 1] == '1')
        count2++;
    if (mine2[x2 + 1][y2] == '1')
        count2++;
    if (mine2[x2 + 1][y2 + 1] == '1')
        count2++;
    return count2;
}



int get3(char mine3[ROW3][COL3], int x3, int y3)                 //����ģʽ������
{

    int count3 = 0;

    if (mine3[x3 - 1][y3 - 1] == '1')
        count3++;
    if (mine3[x3 - 1][y3] == '1')
        count3++;
    if (mine3[x3-1][y3 + 1] == '1')
        count3++;
    if (mine3[x3][y3 - 1] == '1')
        count3++;
    if (mine3[x3][y3 + 1] == '1')
        count3++;
    if (mine3[x3 + 1][y3 - 1] == '1')
        count3++;
    if (mine3[x3 + 1][y3] == '1')
        count3++;
    if (mine3[x3 + 1][y3 + 1] == '1')
        count3++;
    return count3;
}



void sweep1(char mine1[ROW][COL], char show1[ROW][COL])           //ɨ�׵�ʵ��
{

	
    int x = 0;
    int y = 0;
    int count = 0;

    while (count != (ROW - 2)*(COL - 2) - DEFAULT)
    {	
		count++;
		time_t start,end;
		int a;
		printf("��Ϸ����\n");
		printf("ѡ��1.����������������\nѡ��2.�����־��ȷ�����׵ĵط�\n");
		printf("����������ִ�е�ָ��");
		printf("\n");
		start =time(NULL);
		scanf("%d",&a);
		switch(a)
		{

		case 1:
        printf("�����������������꣺");
            scanf("%d%d", &x, &y);
			if (mine1[x][y] == '1')
				 {
				    system("cls");
					end =time(NULL);
					
				    letter();
					printf("                                                     �ȵ�����!\n");
					printf("                                                �ٽ���������һ�ְ�!\n\n");
                    printf("����ʱ��Ϊ:%.f��\n",difftime(end,start));
					printf("�������̵�λ�ã�                                  *****      *****\n");
					printf("                                                  *****      *****\n");
					printf("                                                                    \n");
					printf("                                                     ***********\n");
					printf("                                                     *         *\n");
					printf("                                                     ***********\n");
                    printf("\n");
					display1(mine1);
					return;
				}
			 else
				{
					int ret = get1(mine1, x, y);
					show1[x][y] = ret + '0';
					display1(show1);

				}
		
			 break;

		case 2:
			printf("�����־��ȷ�����׵ĵط�:");
            scanf("%d%d", &x, &y);
			show1[x][y] ='+';
			display1(show1);
			break;

		default:
			printf("error\n");
			continue;
		}

	}
	printf("ɨ�׳ɹ�\n");
	end =time(NULL);
	system("cls");
	heart();
	printf("��ϲ��ɨ�׳ɹ�~С�����͸���~");
	printf("����ʱ��Ϊ:%.f��\n",difftime(end,start));
	printf("\n");
}


void sweep2(char mine2[ROW2][COL2], char show2[ROW2][COL2])
{
	time_t start,end;
    int x2 = 0;
    int y2 = 0;
    int count2 = 0;

    while (count2 != (ROW2 - 2)*(COL2 - 2) - DEFAULT2)
    {	
		count2++;
		int a;
		printf("��Ϸ����\n");
		printf("ѡ��1.����������������\nѡ��2.�����־��ȷ�����׵ĵط�\n");
		printf("����������ִ�е�ָ��");
		printf("\n");
		start =time(NULL);
		scanf("%d",&a);

		switch(a)
		{

		case 1:
        printf("�����������������꣺");
            scanf("%d%d", &x2, &y2);
			if (mine2[x2][y2] == '1')
				 {
				    system("cls");
					end =time(NULL);
				    letter();
					printf("                                                     �ȵ�����!\n");
					printf("                                                �ٽ���������һ�ְ�!\n\n");
					printf("����ʱ��Ϊ:%.f��\n",difftime(end,start));
					printf("�������̵�λ�ã�                                  *****      *****\n");
					printf("                                                  *****      *****\n");
					printf("                                                                    \n");
					printf("                                                     ***********\n");
					printf("                                                     *         *\n");
					printf("                                                     ***********\n");
                    printf("\n");
					display2(mine2);
					return;
				}
			 else
				{
					int ret2 = get2(mine2, x2, y2);
					show2[x2][y2] = ret2 + '0';
					display2(show2);

				}
		
			 break;

		case 2:
			printf("�����־��ȷ�����׵ĵط�:");
            scanf("%d%d", &x2, &y2);
			show2[x2][y2] ='+';
			display2(show2);
			break;
		default:
			printf("error\n");
			continue;
		}
	}
	printf("ɨ�׳ɹ�\n");
	end =time(NULL);
	system("cls");
	heart();
	printf("��ϲ��ɨ�׳ɹ�~С�����͸���~");
	printf("����ʱ��Ϊ:%.f��\n",difftime(end,start));
	printf("\n");
}


void sweep3(char mine3[ROW3][COL3], char show3[ROW3][COL3])
{
	
    int x3 = 0;
    int y3 = 0;
    int count3 = 0;

    while (count3 != (ROW3 - 2)*(COL3 - 2) - DEFAULT3)
    {	
		time_t start,end;
		count3++;
		int a;

		printf("��Ϸ����\n");
		printf("ѡ��1.����������������\nѡ��2.�����־��ȷ�����׵ĵط�\n");
		printf("����������ִ�е�ָ��");
		printf("\n");
		start =time(NULL);
		scanf("%d",&a);

		switch(a)
		{
		case 1:
        printf("�����������������꣺");
            scanf("%d%d", &x3, &y3);
			if (mine3[x3][y3] == '1')
				 {
				    system("cls");
					end =time(NULL);
				    letter();
					printf("                                                     �ȵ�����!\n");
					printf("                                                �ٽ���������һ�ְ�!\n\n");
					printf("����ʱ��Ϊ:%.f��\n",difftime(end,start));
					printf("                                                                        ");
					printf("�������̵�λ�ã�                                  *****      *****\n");
					printf("                                                  *****      *****\n");
					printf("                                                                    \n");
					printf("                                                     ***********\n");
					printf("                                                     *         *\n");
					printf("                                                     ***********\n");
					printf("\n");

					display3(mine3);
					return;
				}
			 else
				{
					int ret3 = get3(mine3, x3, y3);
					show3[x3][y3] = ret3 + '0';
					display3(show3);

				}
		
			 break;

		case 2:
			printf("�����־��ȷ�����׵ĵط�:");
            scanf("%d%d", &x3, &y3);
			show3[x3][y3] ='+';
			display3(show3);
			break;

		default:
			printf("error\n");
			continue;
		}
	}
	printf("ɨ�׳ɹ�\n");
	end =time(NULL);
	system("cls");
	heart();
	printf("��ϲ��ɨ�׳ɹ�~С�����͸���~");
	printf("����ʱ��Ϊ:%.f��\n",difftime(end,start));
	printf("\n");
}


void easy()
{
    char mine1[ROW][COL];
    char show1[ROW][COL];

    map1(mine1, show1);
    display1(show1);
    set1(mine1);
    sweep1(mine1, show1);
}


void normal()
{   
    char mine2[ROW2][COL2];
    char show2[ROW2][COL2];

    map2(mine2, show2);
    display2(show2);
    set2(mine2);
    sweep2(mine2, show2);
}


void hard()
{
    char mine3[ROW3][COL3];
    char show3[ROW3][COL3];

    map3(mine3, show3);
    display3(show3);
    set3(mine3);
    sweep3(mine3, show3);
}