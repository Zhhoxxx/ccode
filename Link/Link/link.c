#include<stdio.h>
#include<malloc.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX 20
typedef char ElemType;
typedef struct LNode
{
	ElemType data;
	struct LNode* next;
}LNode,*LinkList;

LinkList create()
{
	LNode* head, * p, * q; int x; char y;
	head = (LinkList)malloc(sizeof(LNode));
	p = head;
	for (x = 0; x < 100; x++)
	{
		scanf("%c", &y);
		if (y == '@')
			break;
		q = (LinkList)malloc(sizeof(LNode));
		q->data = y;
		p->next = q;
		p = q;
	}
	p->next = NULL;
	return(head);
}
void display(LinkList head)
{
	LNode* p = head->next;
	while (p!=NULL)
	{
		printf("%2c", p->data);
		p = p->next;
	}
}

LinkList add(LinkList ha, LinkList hb)
{
	LNode* hc;
	LNode* ap = ha->next, * bp = hb->next, * cp;
	hc = cp = ha;
	while (ap && bp)
	{
		if (ap->data <= bp->data)
		{
			cp->next = ap;
			cp = ap;
			ap = ap->next;
		}
		else
		{
			cp->next = bp;
			cp = bp;
			bp = bp->next;
		}
	}
	cp->next = ap ? ap : bp;
	free(hb);
	return hc;
}

void main()
{
	LinkList la, lb, lc;
	printf("请输入la中的元素,输入@时表示结束输入:\n");
	la = create();
	printf("请输入;b中的元素,输入@时表示结束输入:\n");
	lb = create();
	printf("\n显示la中的元素:\n");
	display(la);
	printf("\n显示lb中的元素:\n");
	display(lb);
	lc = add(la, lb);
	printf("\nla和lb合并后的结果:");
	display(lc);
	printf("\n");
}