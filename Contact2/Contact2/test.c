#define _CRT_SECURE_NO_WARNINGS 1
//存放1000名好友的信息
//信息： 姓名 性别  年龄  电话 住址
//功能：增加 删除 查找 修改 显示
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
		printf("请输入选项：");
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
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}

	} while (input);
	return 0;
}
