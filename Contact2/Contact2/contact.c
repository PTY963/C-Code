#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
//初始化
void InitContact(Contact* pc)
{
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));
}
//添加
void AddContact(Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("通讯录已满，无法增加\n");
		return;
	}
	//增加
	printf("请输入姓名:");
	scanf("%s", pc->data[pc->sz].name);
	
	printf("请输入性别:");
	scanf("%s", pc->data[pc->sz].sex);

	printf("请输入年龄:");
	scanf("%d",&(pc->data[pc->sz].age));

	printf("请输入电话:");
	scanf("%s", pc->data[pc->sz].tele);

	printf("请输入住址:");
	scanf("%s", pc->data[pc->sz].addr);

	//数量加1
	pc->sz++;
	printf("添加成功\n");
}

//打印
void PrintContact(const Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法显示\n");
		return;
	}

	int i = 0;
	//打印标题
	printf("%-15s %-5s %-5s %-15s %-20s\n", "姓名", "性别", "年龄", "电话", "住址");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-15s %-5s %-5d %-15s %-20s\n",
			pc->data[i].name,
			pc->data[i].sex,
			pc->data[i].age,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

//删除
static int Find(const Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
			return i;
	}
	return -1;
	
}
void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };

	if (pc->sz == 0)
	{
		printf("通讯录为空，无法删除\n");
	}

	printf("请输入要删除联系人的姓名：");
	scanf("%s", name);
	
	//查找 找到
	int pos = Find(pc,name);
	if (-1 == pos)
	{
		printf("要删除的联系人不存在\n");
		return;
	}
	//删除
	int i = 0;
	for (i = pos; i < pc->sz-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}

	pc->sz--;
	printf("删除成功\n");
}

//查找
void SearchContact(const Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找联系人的姓名：");
	scanf("%s", name);

	int pos = Find(pc, name);
	if (-1 == pos)
	{
		printf("要查找的联系人不存在\n");
	}
	//找到了

	printf("%-15s %-5s %-5d %-15s %-20s\n",
		pc->data[pos].name,
		pc->data[pos].sex,
		pc->data[pos].age,
		pc->data[pos].tele,
		pc->data[pos].addr);
}

//修改
void ModifyContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改联系人的姓名：");
	scanf("%s", name);

	int pos = Find(pc, name);
	if (-1 == pos)
	{
		printf("要修改的联系人不存在\n");
	}

	//修改
	printf("请输入姓名:");
	scanf("%s", pc->data[pc->sz].name);

	printf("请输入性别:");
	scanf("%s", pc->data[pc->sz].sex);

	printf("请输入年龄:");
	scanf("%d", &(pc->data[pc->sz].age));

	printf("请输入电话:");
	scanf("%s", pc->data[pc->sz].tele);

	printf("请输入住址:");
	scanf("%s", pc->data[pc->sz].addr);

}