#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>


struct book  //����ͼ��ṹ��
{
	int num;  // ���
	char name[20];  //����
	char publish[20];  // ������
    struct time //����ʱ��ṹ��
	{
		int year,month,day; //������
	}t;
	int jie;// ���� ���״̬

}bk[20];

int N;   // N�������Ϊ ¼���ͼ�������

	
int mymainmenu()   //���˵�
 {   
	int x;  
	printf("\n\n\n\n");   
	printf("\t\t|-------------------------------------------------------------|\n");
	printf("\t\t|                     |\n");   
	printf("\t\t|    ======================    |\n");   
	printf("\t\t|      ��ӭ����ͼ�����ϵͳ     |\n");   
	printf("\t\t|    ======================    |\n");   
	printf("\t\t|                     |\n");   
	printf("\t\t|      1.����Աģʽ          |\n");   
	printf("\t\t|      2.�ͻ�ģʽ           |\n");   
	printf("\t\t|      3.�˳�ϵͳ           |\n");   
	printf("\t\t|--------------------------------------------------------------|\n");   
    printf("\n\t\t����������ѡ��:");   
	scanf("%d",&x);   
	return x; 
}
char mima[20] = "admin";  //����
 
int mimayanzheng()  //������֤
{ 
    char mm[20];   //����������������
		 printf("\n");   
		 printf("\t\t     ======================    \n");   
		 printf("\t\t      ��ӭʹ�ù���Աģʽ      \n");   
		 printf("\t\t     ======================    \n");   
		 printf("\n");   
		 printf("\t\t     ����������:"); 
	     scanf("%s",&mm);
	if(!strcmp(mm,mima))  //�Ƚ���������� �Ƿ� ��ԭ������ͬ
	{
		return 1;
	}
	else
	{
		return 0;
	}

}

int xiugaimima()   //�޸�����
{
	char mima_temp[20];//��������û����������
	char new_mima[20];   //��ŵ�һ��������
	char new_mima1[20];  //��ŵڶ���������

	printf("������ԭʼ���룺\n");
	scanf("%s",&mima_temp);
	if(!strcmp(mima_temp,mima))  //�Ƚ�ԭʼ���� �� �û����������
	{
		printf("�����������룺\n");
		scanf("%s",&new_mima);
		printf("������һ�Σ�\n");
		scanf("%s",&new_mima1);
		if(!strcmp(new_mima1,new_mima)) //�Ƚ� �����޸ĺ����������
		{
			strcpy(mima,new_mima); //�� ������ ������ ԭʼ����
			printf("�����޸ĳɹ������μǣ�����������ء�����\n");
			getch();
			return 0;
		}
		else
		{
			printf("����������������벻һ�£�����������ء�����\n");
			getch();
			return 1;
		}
	}
	else
	{
		printf("ԭʼ������󣬰���������ء�����\n");
		getch();
	}
}

int adm()  //����Աģʽ
{   
	int x; 
		 system("cls");
 		 printf("\n\n\n\n");   
 		 printf("\t\t|-------------------------------------------------------------|\n");   
		 printf("\t\t|                     |\n");   
		 printf("\t\t|    ======================    |\n");   
		 printf("\t\t|        ����Աģʽ        |\n");  
		 printf("\t\t|    ======================    |\n");   
		 printf("\t\t|                     |\n");   
 		 printf("\t\t|      1.¼��ͼ����Ϣ        |\n");  
		 printf("\t\t|      2.�鿴ͼ����Ϣ        |\n");   
		 printf("\t\t|      3.�޸�ͼ����Ϣ        |\n");   
		 printf("\t\t|      4.�޸Ĺ�������        |\n");   
		 printf("\t\t|      5.�˳�ϵͳ          |\n");  
		 printf("\t\t|-------------------------------------------------------------|\n");   
		 printf("\n\t\t����������ѡ��:");   
		 scanf("%d",&x);   
	return x; 
} 

void xiugai_name()        //���������޸���Ϣ      
{
	char name[20];  //���������Ҫ�޸ĵ� ����
	int i;   //ѭ���±�
	int k = 0;// ��������Ƿ����
	printf("��������Ҫ�޸ĵ�����������exit���˳���\n");
	do
	{
		scanf("%s",&name);
		if(!strcmp(name,"exit"))
		{
			break;
		}
		for(i=0;i<N;i++)
		{
			if(!strcmp(name,bk[i].name))
			{
				k++;
				printf("�������ϢΪ��\n");
				 printf("\t���    ͼ������     ������        ����ʱ��     ״̬\n");
				printf("\t%-7d %-8s %-12s   %4d��%2d��%2d�� ",bk[i].num,bk[i].name,bk[i].publish,bk[i].t.year,bk[i].t.month,bk[i].t.day);
				if(bk[i].jie == 1)
				{
					printf("�ѱ�����\n");
				}
				else
				{
					printf("���Խ���\n");	
				}
				printf("�����������µ���Ϣ��\n");
				printf("��������ı�ţ�\n");
				scanf("%d",&bk[i].num);
				printf("������������ƣ�\n");
				scanf("%s",&bk[i].name);
				printf("��������ĳ����磺\n");
				scanf("%s",&bk[i].publish);
				printf("��������ĳ���ʱ�䣨�ö��Ÿ�����Ӣ�ĵĶ���Ŷ������\n");
				scanf("%4d,%2d,%d",&bk[i].t.year,&bk[i].t.month,&bk[i].t.day);
				printf("�����Ƿ��Ѿ������ģ��Ѿ��������롮1����δ���������롮0��:\n");
				scanf("%d",&bk[i].jie);
			//	if(bk[i].jie == 1)
			//		{
			//			printf("��ϲ����Ϣ�޸ĳɹ�������������ء�����\n");
			//			getch();
			//			break;
			//		}
			//		else
			//		{								
			//			 printf("��ϲ����Ϣ�޸ĳɹ�������������ء�����\n");
			//			 getch();
			//			 break;
			//		}
			//}
			//else
			//{
			//	break;
			//}
			}
		}
		if(k == 0)
		{
			system("cls");
			printf("����������������ڣ�����������(����exit���˳�)��\n");
		}
		else
		{
			 printf("��ϲ����Ϣ�޸ĳɹ�������������ء�����\n");
						 getch();
						 break;
		}
	}while(1);
}

void xiugai_num() //������޸�ͼ��
{
	int num;  //������� ��Ҫ �޸ĵ����
	int i;  //ѭ���±����
	int k = 0; //������� �����Ƿ����
	printf("����������Ҫ�޸ĵ�ͼ������(��'0'�˳�)��\n");
	do
	{
		scanf("%d",&num);
		if(num == 0)
		{
			break;
		}
		for(i=0;i<N;i++)
		{
			if(num == bk[i].num)
			{
				k++;
				printf("�������ϢΪ��\n");
				 printf("\t���    ͼ������     ������        ����ʱ��     ״̬\n");
				printf("\t%-7d %-8s %-12s   %4d��%2d��%2d�� ",bk[i].num,bk[i].name,bk[i].publish,bk[i].t.year,bk[i].t.month,bk[i].t.day);
				if(bk[i].jie == 1)
				{
					printf("�ѱ�����\n");
				}
				else
				{
					printf("���Խ���\n");	
				}
				printf("�����������µ���Ϣ��\n");
				printf("��������ı�ţ�\n");
				scanf("%d",&bk[i].num);
				
				printf("������������ƣ�\n");
				scanf("%s",&bk[i].name);
				
				printf("��������ĳ����磺\n");
				scanf("%s",&bk[i].publish);
					
				printf("��������ĳ���ʱ�䣨�ö��Ÿ�����Ӣ�ĵĶ���Ŷ������\n");
				scanf("%4d,%2d,%d",&bk[i].t.year,&bk[i].t.month,&bk[i].t.day);
				printf("�����Ƿ��Ѿ������ģ��Ѿ��������롮1����δ���������롮0��:\n");
				scanf("%d",&bk[i].jie);
			//	if(bk[i].jie == 1)
			//		{			
			//			printf("��ϲ����Ϣ�޸ĳɹ�������������ء�����\n");
			//			getch();
			//			break;
			//		}
			//		else
			//		{			
			//			 printf("��ϲ����Ϣ�޸ĳɹ�������������ء�����\n");
			//			 getch();
			//			 break;
			//		}
			//}
			//else
			//{
			//	break;
			//}
			}
		}
		if(k == 0)
		{
			system("cls");
			printf("���������Ų����ڣ�����������(����0���˳�)��\n");
		}
		else
		{
			printf("��ϲ����Ϣ�޸ĳɹ�������������ء�����\n");
						 getch();
						 break;
		}		
	}while(1);
}

void dele_name()   //�� ����ɾ��
{                                        
	int i; //ѭ���±����
	char name[20]; //����������������
	char new_name[20];  //����һ��������
	int k = 0;//������� �Ƿ���ڸ���
	char c[2];    //������ʾ   �Ƿ�ɾ��ͼ��               
	printf("����������Ҫɾ��������(���롱exit���˳�)��\n");
	while(1)
	{
		scanf("%s",&name);
		if(!strcmp(name,"exit"))
		{
			break;
		}
		for(i=0;i<N;i++)
		{
			if(!strcmp(name,bk[i].name))
			{
				k++;
				printf("�������ϢΪ��\n");
				printf("\t���    ͼ������     ������        ����ʱ��     ״̬\n");
				printf("\t%-7d %-8s %-12s   %4d��%2d��%2d�� ",bk[i].num,bk[i].name,bk[i].publish,bk[i].t.year,bk[i].t.month,bk[i].t.day);
				if(bk[i].jie == 1)
				{
					printf("�ѱ�����\n");
				}
				else
				{
					printf("���Խ���\n");	
				}
				printf("\t�Ƿ�Ҫɾ������('y' or 'n')��\n");
				scanf("%s",&c); 
				if(!strcmp(c,"y"))
				{
					strcpy(bk[i].name,new_name);     //������ ������ ��������
					bk[i].num = 0;                   //�����ֵΪ0
					strcpy(bk[i].publish,new_name);  //������ ������  ���г�����  
					bk[i].t.year = 0;                //����  = 0  
					bk[i].t.month = 0;               //����  = 0
					bk[i].t.day = 0;                 //����  = 0  
					printf("\tɾ���ɹ���\n");
					getch();
					break;
				}
				else
				{
					printf("�û�ȡ����������������ء�����");
					getch();
					break;
				}
			}
		/*	else
			{
				break;
			}*/
		}
		if(k == 0)
		{
			system("cls");
			printf("δ�ҵ����飬���������루���롰exit���˳�����\n");
		}
		else
		{
			break;
		}
	}
}

void dele_num()   //�� ���ɾ��
{
	int i;//ѭ���±����
	int k = 0; //����Ƿ���ڸ���
	int num; //�����������
	char new_name[20];//����һ��������
	char c[2];//������ʾ   �Ƿ�ɾ��ͼ��
	printf("����������Ҫɾ�������������(���롱0���˳�)��\n");
	while(1)
	{
		scanf("%d",&num);
		if(num == 0)
		{
			break;
		}
		for(i=0;i<N;i++)
		{
			if(num == bk[i].num)
			{
				k++;
				printf("�������ϢΪ��\n");
				printf("\t���    ͼ������     ������        ����ʱ��     ״̬\n");
				printf("\t%-7d %-8s %-12s   %4d��%2d��%2d�� ",bk[i].num,bk[i].name,bk[i].publish,bk[i].t.year,bk[i].t.month,bk[i].t.day);
				if(bk[i].jie == 1)
				{
					printf("�ѱ�����\n");
				}
				else
				{
					printf("���Խ���\n");	
				}
				printf("\t�Ƿ�Ҫɾ������('y' or 'n')��\n");
				scanf("%s",&c); 
				if(!strcmp(c,"y"))
				{
					strcpy(bk[i].name,new_name);
					bk[i].num = 0;
					strcpy(bk[i].publish,new_name);
					bk[i].t.year = 0;
					bk[i].t.month = 0;
					bk[i].t.day = 0;
					printf("\tɾ���ɹ���\n");
					getch();
					break;
				}
				else
				{
					printf("�û�ȡ����������������ء�����");
					getch();
					break;
				}
			}
			/*else
			{
				break;
			}*/
		}
		if(k == 0)
		{
			system("cls");
			printf("δ�ҵ����飬���������루���롰0���˳�����\n");
		}
		else 
		{
			break;
		}
	}
}

void dele_all()  //ɾ������ͼ��
{
	char c[2]; //������ʾ �Ƿ� ɾ��
	printf("\t����������ɾ������ͼ����Ϣ���Ƿ��������y�� or ��n����");
	scanf("%s",&c);
	if(!strcmp(c,"y"))
	{
		N = 0;  //�ε��ڣ���Ҳ������¼���ͼ������Ϊ�㡡��ɾ��������ͼ��
		printf("\tɾ���ɹ�\n");
		getch();
	}
	else
	{
		printf("\t����ȡ������������ء�����\n");
		getch();
	}
}

void dele()  //ɾ��ͼ��
{
	int x;	
	do
	{
		system("cls");
		printf("\t\t|-------------------------------------------------------------|\n");
    		printf("\t\t|         =====================        |\n");
    		printf("\t\t|              ɾ��ͼ����Ϣ               |\n");
    		printf("\t\t|         =====================        |\n");
    		printf("\t\t|                                         |\n");
    		printf("\t\t|            1.������ɾ��                 |\n");
    		printf("\t\t|            2.�����ɾ��                 |\n");
		printf("\t\t|            3.ɾ������ͼ��               |\n");
    		printf("\t\t|            4.�������˵�                 |\n");
    		printf("\t\t|-------------------------------------------------------------|\n");
		printf("\t\t����������ѡ�");
		scanf("%d",&x);
		switch(x)
		{
			case 1:system("cls");dele_name();break;/*������ɾ��*/
			case 2:system("cls");dele_num();break;/*�����ɾ��*/
			case 3:system("cls");dele_all();getch();break;/*ɾ������ͼ��*/
		}
	}while(x!=4);
}

/***********�޸�ͼ����Ϣ*********/
void xiugai()
{
    int x;
    do
    {
		system("cls");
		printf("\n\n\n\n");
   	 	printf("\t\t|-------------------------------------------------------------|\n");
   	 	printf("\t\t|         =====================        |\n");
    		printf("\t\t|               �޸�ͼ����Ϣ              |\n");
    		printf("\t\t|         =====================        |\n");
    		printf("\t\t|                                         |\n");
    		printf("\t\t|            1.����������                 |\n");
    		printf("\t\t|            2.����Ų���                 |\n");
    		printf("\t\t|            3.ɾ��ͼ��                   |\n");
    		printf("\t\t|            4.�������˵�                 |\n");
    		printf("\t\t|-------------------------------------------------------------|\n");
    		printf("\t\t����������ѡ��:");
    		scanf("%d",&x);
    		switch(x)
    		{
      	  		case 1:system("cls");xiugai_name();break;/*�������������޸���Ϣ*/
      	  		case 2:system("cls");xiugai_num();break;/*����Ų��Ҳ��޸���Ϣ*/
				case 3:system("cls");dele();break;							
    		}
    }while(x!=4);
}

/********����ͼ����Ϣ��********/
void xinxi()  
{   
	int i;   
		system("cls");   
		printf("\t\t     =====================    \n");   
		printf("\t\t        ¼��ͼ����Ϣ       \n");   
		printf("\t\t     =====================    \n\n");  
		printf("\t\t��������Ҫ¼�������:");  
		scanf("%d",&N);   
	for(i=0;i<N;i++)   
	{  
			printf("\t\t�������%d����ı��:",i+1);     
			scanf("%d",&bk[i].num);     
			printf("\t\t�������%d���������:",i+1);     
			scanf("%s",bk[i].name);     
			printf("\t\t�������%d����ĳ�����:",i+1);     
			scanf("%s",bk[i].publish);     
			printf("\t\t�������%d����ĳ���ʱ��(�ö��Ÿ���):",i+1);     
			scanf("%d,%d,%d",&bk[i].t.year,&bk[i].t.month,&bk[i].t.day);     
			printf("\t\t�����Ƿ��Ѿ�������,�ѱ���������'1'��δ����������'0':");     
			scanf("%d",&bk[i].jie);  
			printf("--------------------------------------------------------------------------------\n");   
	}  
		system("cls");   
		printf("\t\t     =====================    \n");   
		printf("\t\t        ��Ϣ¼�����       \n");   
		printf("\t\t     =====================    \n");   
		printf("\n\t\t       �����������...\n"); 
}
 
void showbook_name()  //����Ա���������������鿴
{
	 //int i;
  //   char name[20];
	 //printf("��������Ҫ�鿴��������\n");                      
	 //scanf("%s",&name);
	 //for(i=0;i<N;i++)
	 //{
		// if(strcmp(name,bk[i].name)!=0 || N == 0)  //����� �������������Ҫ�鿴������ �Ƚ�ʱ ����� ���� ¼��ͼ������ Ϊ0  �����ݲ�����
		// {
		//	 printf("���ݲ�����...\n");
		//	 system("pause");
		//	
		// }
		// else
		// {
		//		printf("\t���    ͼ������     ������        ����ʱ��     ״̬\n");
		//		printf("\t%-7d %-8s %-12s   %4d��%2d��%2d�� ",bk[i].num,bk[i].name,bk[i].publish,bk[i].t.year,bk[i].t.month,bk[i].t.day);
		//	 if(bk[i].jie == 1)
		//	 {
		//		 printf("\t\t�ѽ���\n");
		//	 }
		//	 else
		//	 {
		//		 printf("\t\tδ����\n");
		//	 }
		// }
	 //}
	int i,k=0; //i�Ǿֲ�����һ����ס�� ��k���������Ľ���״̬��
	char name[20];
	printf("��������Ҫ�鿴��������\n");
	scanf("%s",&name);                              
	for(i=0;i<N;i++)
	{
		if(!strcmp(name,bk[i].name))
		{		 
			   printf("\t���    ͼ������     ������        ����ʱ��     ״̬\n");
			   printf("\t%-7d %-8s %-12s   %4d��%2d��%2d�� ",bk[i].num,bk[i].name,bk[i].publish,bk[i].t.year,bk[i].t.month,bk[i].t.day);
			 if(bk[i].jie == 1)
			 {
				 printf("\t\t�ѽ���\n");
			 }
			 else
			 {
				 printf("\t\tδ����\n");
			 }
			 k++;
			 printf("\t����������ء�����\n");
		}
	}
	if(k == 0)
	{
		printf("���鲻���ڣ���������ء�����\n");
	}
}

void showbook_num()  //����Ա������������Ų鿴
{
	int i,k=0; //i�Ǿֲ�����һ����ס�� ��k���������Ľ���״̬��
	int num;
	printf("��������Ҫ�鿴����ţ�\n");
	scanf("%d",&num);                              
	for(i=0;i<N;i++)
	{
		if(num==bk[i].num)
		{		 
			   printf("\t���    ͼ������     ������        ����ʱ��     ״̬\n");
			   printf("\t%-7d %-8s %-12s   %4d��%2d��%2d�� ",bk[i].num,bk[i].name,bk[i].publish,bk[i].t.year,bk[i].t.month,bk[i].t.day);
			 if(bk[i].jie == 1)
			 {
				 printf("\t\t�ѽ���\n");
			 }
			 else
			 {
				 printf("\t\tδ����\n");
			 }
			 k++;
			 printf("\t����������ء�����\n");
		}
	}
	if(k == 0)
	{
		printf("���鲻���ڣ���������ء�����\n");
	}
}

void weijieyue()  //����Ա��������δ���ĵ�ͼ��
{
	int i,k=0;
	if(bk[0].num == 0&&bk[0].t.year == 0 || N == 0)   //��� �ṹ���� bk���������д�� �ĵ�һ�� ���� ��� Ϊ�� �� Ϊ�� �� ����Ϊ�� �� ���ݲ�����
		{
			printf("���ݲ����ڣ�����¼������...\n");
			printf("�����������...\n");
		}
	for(i=0;i<N;i++)
	{		
			if(bk[i].jie == 0)
			{
				printf("\t���    ͼ������     ������        ����ʱ��     ״̬\n");
				printf("\t%-7d %-8s %-12s   %4d��%2d��%2d�� ",bk[i].num,bk[i].name,bk[i].publish,bk[i].t.year,bk[i].t.month,bk[i].t.day);
				printf("�����Խ��Ĵ���...\n");
				k++;
			}
	}
	if(k == 0)
		printf("Ŀǰû�пɽ��ĵ�ͼ��,�����������������\n");
}

void yijieyue()  //����Ա���������Ѿ����ĵ�ͼ��
{
	int i,k=0;
	if(bk[0].num == 0&&bk[0].t.year == 0 || N == 0)   //��� �ṹ���� bk���������д�� �ĵ�һ�� ���� ��� Ϊ�� �� Ϊ�� �� ����Ϊ�� �� ���ݲ�����
	{
		printf("���ݲ����ڣ�����¼�����ݡ�����\n");
		printf("�����������...\n");
	}
	else
	{
		for(i=0;i<N;i++)
		{
			if(bk[i].jie == 1)
			{
				printf("\t���    ͼ������     ������        ����ʱ��     ״̬\n");
				printf("\t%-7d %-8s %-12s   %4d��%2d��%2d�� ",bk[i].num,bk[i].name,bk[i].publish,bk[i].t.year,bk[i].t.month,bk[i].t.day);
				printf("���ź��������ѱ����ߡ�����\n");
				k++;
			}
		}
		if(k == 0)
			printf("Ŀǰû���κ������������������������\n");
	}
}

void show_all_book()  //����Ա���������鿴����ͼ��
{
	int i;
	if(bk[0].num == 0&&bk[0].t.year == 0 || N == 0)  //��� �ṹ���� bk���������д�� �ĵ�һ�� ���� ��� Ϊ�� �� Ϊ�� �� ����Ϊ�� �� ���ݲ�����
	{
		printf("���ݲ����ڣ�����¼�����ݡ�����\n");
	}
	else
	{
		printf("\t���    ͼ������     ������        ����ʱ��     ״̬\n");
		for(i=0;i<N;i++)
		{		
			printf("\t%-7d %-8s %-12s   %4d��%2d��%2d�� ",bk[i].num,bk[i].name,bk[i].publish,bk[i].t.year,bk[i].t.month,bk[i].t.day);
			if(bk[i].jie == 1)
			{
				printf("�ѽ���\n");
			}
			else
			{
				printf("δ����\n");
			}
		}


	}
}

void show() //����Ա�������鿴ͼ����Ϣ
{
	int x; 
	do
	{
		 system("cls");   
		 printf("\n\n\n\n");    
		 printf("\t\t|-------------------------------------------------------------|\n");    
		 printf("\t\t|                     |\n");    
		 printf("\t\t|     =====================    |\n");    
		 printf("\t\t|       �鿴ͼ����Ϣ        |\n");    
		 printf("\t\t|     =====================    |\n");    
		 printf("\t\t|                     |\n");    
		 printf("\t\t|      1.����������         |\n");    
		 printf("\t\t|      2.����Ų���         |\n");    
		 printf("\t\t|      3.�鿴����δ����ͼ��     |\n");    
		 printf("\t\t|      4.�鿴�����ѽ���ͼ��     |\n");    
		 printf("\t\t|      5.�鿴����ͼ��        |\n");    
		 printf("\t\t|      6.�������˵�         |\n");    
		 printf("\t\t|-------------------------------------------------------------|\n");    
		 printf("\n\t\t����������ѡ��:");    
		 scanf("%d",&x);    
		 switch(x)    
		 {       
			 case 1:system("cls");showbook_name();getch();break;/*�������鿴*/     
			 case 2:system("cls");showbook_num();getch();break;/*����Ų鿴*/       
			 case 3:system("cls");weijieyue();getch();break;/*�鿴δ����ͼ��*/       
			 case 4:system("cls");yijieyue();getch();break;/*�鿴�ѽ���ͼ��*/   
			 case 5:system("cls");show_all_book();getch();break;/*�鿴����ͼ��*/    
		 }                   
	}while(x!=6);

} 

int peo()  //�ͻ�ģʽ
{
	int x;
	printf("\n\n\n\n");
    printf("\t\t|-------------------------------------------------------------|\n");
    printf("\t\t|                                         |\n");
    printf("\t\t|        ======================        |\n");
    printf("\t\t|               ��ӭ����                  |\n");
    printf("\t\t|        ======================        |\n");
    printf("\t\t|                                         |\n");
    printf("\t\t|           1.�鿴ͼ����Ϣ                |\n");
    printf("\t\t|           2.����ͼ��                    |\n");
    printf("\t\t|           3.�˳�ϵͳ                    |\n");
    printf("\t\t|-------------------------------------------------------------|\n");
    printf("\n\t\t����������ѡ��:");
    scanf("%d",&x);
    return x;
}

void jie_name()                 
{
	char name[20];   
	int i;
	char n[2];       //������ʾ �Ƿ� ���� 
	int k = 0;      
	system("cls");
	printf("������������\n");
	while(1)
	{
		scanf("%s",&name);
		for(i=0;i<N;i++)
		{
			if((!strcmp(name,bk[i].name))&&(bk[i].jie == 0))  //�Ƚ����������������������ʱ �� δ����  ʱ ִ�� if���
			{
				k++;
				printf("\t���    ͼ������     ������        ����ʱ��     ״̬\n");
				printf("\t%-7d %-8s %-12s   %4d��%2d��%2d�� ",bk[i].num,bk[i].name,bk[i].publish,bk[i].t.year,bk[i].t.month,bk[i].t.day);
				printf("���Խ���\n");
				printf("���Ƿ���Ҫ���Ĵ��飺'y' or 'n' \n");
				scanf("%s",&n);
				if(!strcmp(n,"y"))
				{
					bk[i].jie = 1;
					printf("���ĳɹ�������������ء�����\n");
					getch();
					break;
				}
				else 
				{
					if(!strcmp(n,"n"))
					{
						printf("����ȡ��������������ء�����\n");
						getch();
					}
					else 
					{
						printf("�����д�����������ء�����\n");  
						getch();
					}	
					break;
				}
			}
			/*else
			{
				break;
			}*/

		}
		if(k == 0)
		{
				printf("�����ڸ��飬������Ѿ����!����ȷ����ͼ������!\n");
				printf("����������ء�����\n");
				getch();
				break;
		}

		else 
		{
				break;
		}
		
	}
}

void jie_num()
{
	int i;
	int num;
	int k = 0;
	char n[2];  //������ʾ �Ƿ����
	system("cls");
	printf("��������������ţ�\n");
	while(1)
	{
		scanf("%d",&num);
		for(i=0;i<N;i++)
		{
			if((num == bk[i].num)&&(bk[i].jie == 0)) //�Ƚ��������������������ʱ �� δ����  ʱ ִ�� if���
			{
				k++;
				printf("\t���    ͼ������     ������        ����ʱ��     ״̬\n");
				printf("\t%-7d %-8s %-12s   %4d��%2d��%2d�� ",bk[i].num,bk[i].name,bk[i].publish,bk[i].t.year,bk[i].t.month,bk[i].t.day);
				printf("���Խ���\n");
				printf("���Ƿ���Ҫ���Ĵ��飺'y' or 'n' \n");
				scanf("%s",&n);
				if(!strcmp(n,"y"))
				{
					bk[i].jie = 1;
					printf("���ĳɹ�������������ء�����\n");
					getch();
					break;
				}
				else 
				{
					if(!strcmp(n,"n"))
					{
						printf("����ȡ��������������ء�����\n");
						getch();
					}
					else 
					{
						printf("�����д�����������ء�����\n");  
						getch();
					}	
					break;
				}
			}
			/*else
			{
				break;
			}
*/
		}
		if(k == 0)
		{
				printf("�����ڸ��飬������Ѿ����!����ȷ����ͼ������!\n");
				printf("����������ء�����\n");
				getch();
				break;
		}

		else 
		{
				break;
		}
		
	}
}

void jieyue()   //����ͼ��
{
	int x;
    do
    {
		system("cls");
		printf("\n\n\n\n");
		printf("\t\t|-------------------------------------------------------------|\n");
		printf("\t\t|         =====================        |\n");
		printf("\t\t|                ����ͼ��                 |\n");
		printf("\t\t|         =====================        |\n");
		printf("\t\t|                                         |\n");
		printf("\t\t|            1.����������                 |\n");
		printf("\t\t|            2.����Ž���                 |\n");
		printf("\t\t|            3.�鿴����ͼ��               |\n");
		printf("\t\t|            4.�������˵�                 |\n");
		printf("\t\t|-------------------------------------------------------------|\n");
		printf("\t\t����������ѡ��:");
		scanf("%d",&x);
		switch(x)
		{
			case 1:system("cls");jie_name();getch();break;/*����������*/
			case 2:system("cls");jie_num();getch();break;/*����Ž���*/
			case 3:system("cls");show_all_book();getch();break;/*�鿴����ͼ��*/
		}
    }while(x!=4);

}

int main()  /*������*/
{
	int n,s,x,t;  //s�����������˵���ֵ   n�����չ���Աģʽ��ֵ  x�����ܿͻ�ģʽ��ֵ
	do
	{
	    system("cls");
		s = mymainmenu();
		switch(s)
		{
			case 1 : system("cls");
					 t=mimayanzheng(); //t����� ���� ��������ȷ �� ����ֵ
					do
					{
						if(t == 1)
						{
							n = adm();
							switch(n)
							{
								case 1:system("cls");xinxi();getch();break;/*¼����Ϣ*/    
								case 2:system("cls");show();break;/*�鿴��Ϣ*/            
								case 3:system("cls");xiugai();break;/*�޸���Ϣ*/    
								case 4:system("cls");xiugaimima();break;/*�޸�����*/
							}
						}
						else
						{
							printf("������󣬰���������ء�����\n");
							getch();
							break;
						}
					}while(n!=5);break; 
			
			case 2 : 
				    do
					{
						system("cls");
						x = peo();
						switch(x)
						{
							case 1:system("cls");show();break;//�鿴ͼ����Ϣ
							case 2:system("cls");jieyue();break;//����ͼ��
						}
					}while(x!=3);break;
		}
	}while(s!=3);
	system("cls");
	printf("\n\n\n\n\n\n                            \t\tллʹ�ã�����\n");
    getch();//�ȴ��û� ���� һ���ַ�  Ȼ�����ִ���������

	return 0;
}

