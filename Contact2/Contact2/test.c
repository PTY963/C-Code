#define _CRT_SECURE_NO_WARNINGS 1
//���1000�����ѵ���Ϣ
//��Ϣ�� ���� �Ա�  ����  �绰 סַ
//���ܣ����� ɾ�� ���� �޸� ��ʾ
#include"contact.h"
void menu()
{
	printf("****************************\n");
	printf("****   1.add   2.del    ****\n");
	printf("****   3.search 4.modify****\n");
	printf("****   5.print  0.exit  ****\n");
	printf("****************************\n");
}
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	PRINT,
};
int main()
{
	int input = 0;
	Contact con;
	InitContact(&con);
	do
	{
		menu();
		printf("������ѡ�");
		scanf("%d", &input);

		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}

	} while (input);
	return 0;
}
