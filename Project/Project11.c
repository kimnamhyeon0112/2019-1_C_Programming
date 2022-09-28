#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct linkedlist {
	char people[1000];
	struct linkedlist* next;
}
*first1, *first2, *cur;
struct linkedlist* pre = NULL;

void findname(char d[]);

int main() {
	for (int i = 0; i < 10; i++) {
		char num[1000] = { 0 };
		scanf("%s", num);
		struct linkedlist* newlist =
			(struct linkedlist*)malloc(sizeof(struct linkedlist));
		strcpy(newlist->people, num);
		newlist->next = NULL;
		cur = first1;
		pre = NULL;
		if (i == 0) {
			first1 = newlist;
			continue;
		}
		for (; cur != NULL && strcmp(newlist->people, cur->people) > 0;) {
			pre = cur;
			cur = cur->next;
		}
		if (cur == NULL) {
			pre->next = newlist;
			newlist->next = NULL;
		}
		else {
			if (pre == NULL) {
				struct linkedlist* temp =
					(struct linkedlist*)malloc(sizeof(struct linkedlist));
				strcpy(temp->people, first1->people);
				temp->next = first1->next;
				first1 = newlist;
				first1->next = temp;
			}
			else {
				pre->next = newlist;
				newlist->next = cur;
			}
		}
	}
	first2 = first1;
	for (; first1 != NULL;) {
		printf("%s ", first1->people);
		first1 = first1->next;
	}
	printf("\n");
	char name[1000] = { 0 };
	scanf("%s", name);
	findname(name);
	return 0;
}

void findname(char d[]) {
	for (int i = 0; first2 != NULL; i++) {
		if (strcmp(first2->people, d) == 0) {
			if (i == 0) {
				printf("%s %s", first2->people, (first2->next)->people);
				break;
			}
			else if (first2->next == NULL) {
				printf("%s %s", pre->people, first2->people);
				break;
			}
			else {
				printf("%s %s %s", pre->people, first2->people, (first2->next)->people);
				break;
			}
		}
		pre = first2;
		first2 = first2->next;
	}
}