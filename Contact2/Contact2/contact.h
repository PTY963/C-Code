#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

#define MAX 1000

#define INC 2
#define INIT 3


typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//typedef struct Contact
//{
//	PeoInfo data[MAX];
//	int sz;
//}Contact;
typedef struct Contact
{
	PeoInfo* data;
	int sz;
	int capacity;
}Contact;

void InitContact(Contact* pc);
void AddContact(Contact* pc);
void PrintContact(const Contact* pc);
void DelContact(Contact* pc);
void SearchContact(Contact* pc);
void ModifyContact(Contact* pc);
void ExitContact(Contact* pc);