#ifndef __CONTACT_H__
#define __CONTACT_H__
#define MAX 1000

#define NAME_MAX 20
#define SEX_MAX 10
#define TELE_MAX 12
#define ADDR_MAX 20

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	CLEAR,
	SORT,
	SAVE
};
typedef struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;
typedef struct Contact
{
	struct PeoInfo data[MAX];
	int sz;
}Contact, *pContact;
void InitContact(pContact pc);
void AddContact(pContact pc);
void ShowContact(pContact pc);
void DelContact(pContact pc);
int SearchContact(pContact pc);
void sort_contact(pContact pc);
void ModdifyContact(pContact pc);
void ClearContact(pContact pc);

#endif 