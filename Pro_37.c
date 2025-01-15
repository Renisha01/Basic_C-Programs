#include<stdio.h>
#include<stdlib.h>

struct list{
	int data;
	struct list * next;
}typedef node;

node * create(){
	node * ptr;
	ptr = (node * )malloc(sizeof(node));
	return ptr;
}

node * insert(node * head , int n){
	node * p , * ptr;
	int i = 1;
	p = create();
	printf("Enter a %d element : ",i);
	scanf("%d",&(p->data));
	ptr = p;
	head = ptr;
	n--;
	while(n>0){
		i++;
		ptr = p;
		p = create();
		printf("Enter a %d element : ",i);
		scanf("%d",&(p->data));
		ptr->next = p;
		n--;
	}
	p -> next = NULL;
	return head;	
}

void Traversal(node * ptr){
	printf("\n");
	while(ptr!=NULL){
		printf("%d ",(ptr->data));
		ptr = ptr->next;
	}
	printf("\n");
}

void sort(node * head){
	node * p , * temp;
	int a;
	p = head;
	while(p!=NULL){
		temp = p->next;
		while(temp!=NULL){
			if(p->data > temp->data){
				a = p->data;
				p->data = temp->data;
				temp->data = a;	
			}
			temp = temp->next;
		}
		p = p->next;
	}
}

int main(){
	node * head;
	int n;
	printf("Enter a size of linklist :");
	scanf("%d",&n);
	head = insert(head,n);
	printf("\n----------Before Sorting----------\n");
	Traversal(head);
	sort(head);
	printf("\n----------After Sorting-----------\n");
	Traversal(head);
}
