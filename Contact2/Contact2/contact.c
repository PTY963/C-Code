#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
//��ʼ�� - ��̬��
//void InitContact(Contact* pc)
//{
//	pc->sz = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}

//��ʼ�� - ��̬��
void InitContact(Contact* pc)
{
	pc->data = (PeoInfo*)malloc(INIT * sizeof(PeoInfo));
	if (pc->data == NULL)
	{
		perror("InitContact");
		return;
	}
	pc->sz = 0;
	pc->capacity = INIT;
}

//��� - ��̬��
void AddContact(Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + INC) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += INC;
			printf("���ݳɹ�\n");
		}
		else
		{
			perror("AddContact");
			printf("����ʧ��\n");
		}
	}
	//����
	printf("����������:");
	scanf("%s", pc->data[pc->sz].name);

	printf("�������Ա�:");
	scanf("%s", pc->data[pc->sz].sex);

	printf("����������:");
	scanf("%d", &(pc->data[pc->sz].age));

	printf("������绰:");
	scanf("%s", pc->data[pc->sz].tele);

	printf("������סַ:");
	scanf("%s", pc->data[pc->sz].addr);

	//������1
	pc->sz++;
	printf("��ӳɹ�\n");
}

//��� - ��̬��
//void AddContact(Contact* pc)
//{
//	if (pc->sz == MAX)
//	{
//		printf("ͨѶ¼�������޷�����\n");
//		return;
//	}
//	//����
//	printf("����������:");
//	scanf("%s", pc->data[pc->sz].name);
//	
//	printf("�������Ա�:");
//	scanf("%s", pc->data[pc->sz].sex);
//
//	printf("����������:");
//	scanf("%d",&(pc->data[pc->sz].age));
//
//	printf("������绰:");
//	scanf("%s", pc->data[pc->sz].tele);
//
//	printf("������סַ:");
//	scanf("%s", pc->data[pc->sz].addr);
//
//	//������1
//	pc->sz++;
//	printf("��ӳɹ�\n");
//}

//��ӡ
void PrintContact(const Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷���ʾ\n");
		return;
	}

	int i = 0;
	//��ӡ����
	printf("%-15s %-5s %-5s %-15s %-20s\n", "����", "�Ա�", "����", "�绰", "סַ");
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

//ɾ��
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
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
	}

	printf("������Ҫɾ����ϵ�˵�������");
	scanf("%s", name);
	
	//���� �ҵ�
	int pos = Find(pc,name);
	if (-1 == pos)
	{
		printf("Ҫɾ������ϵ�˲�����\n");
		return;
	}
	//ɾ��
	int i = 0;
	for (i = pos; i < pc->sz-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}

	pc->sz--;
	printf("ɾ���ɹ�\n");
}

//����
void SearchContact(const Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ������ϵ�˵�������");
	scanf("%s", name);

	int pos = Find(pc, name);
	if (-1 == pos)
	{
		printf("Ҫ���ҵ���ϵ�˲�����\n");
	}
	//�ҵ���

	printf("%-15s %-5s %-5d %-15s %-20s\n",
		pc->data[pos].name,
		pc->data[pos].sex,
		pc->data[pos].age,
		pc->data[pos].tele,
		pc->data[pos].addr);
}

//�޸�
void ModifyContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�޸���ϵ�˵�������");
	scanf("%s", name);

	int pos = Find(pc, name);
	if (-1 == pos)
	{
		printf("Ҫ�޸ĵ���ϵ�˲�����\n");
	}

	//�޸�
	printf("����������:");
	scanf("%s", pc->data[pc->sz].name);

	printf("�������Ա�:");
	scanf("%s", pc->data[pc->sz].sex);

	printf("����������:");
	scanf("%d", &(pc->data[pc->sz].age));

	printf("������绰:");
	scanf("%s", pc->data[pc->sz].tele);

	printf("������סַ:");
	scanf("%s", pc->data[pc->sz].addr);

}

//�˳� - ��̬��
void ExitContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->sz = 0;
	pc->capacity = 0;
}