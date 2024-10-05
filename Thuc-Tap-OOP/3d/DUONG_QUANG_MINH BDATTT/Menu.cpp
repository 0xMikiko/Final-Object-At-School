#pragma once

#include <malloc.h>
#include <conio.h>
#include <String.h>
//#include "Draw.cpp"

struct Node{
	char text[30];
	int focus;
	int sel;
	Node *up;
	Node *down;
	Node *right;
	Node *left;
};
typedef Node *List;

void insertAtLast (List *first, char text[30], int focus, int sel, char ch)
{
	Node *temp;
	temp=(Node*)malloc(sizeof(Node));
	strcpy(temp->text,text);
	temp->focus=focus;
	temp->sel=sel;
	temp->up=temp->down=temp->right=temp->left=NULL;
	if (*first==NULL) (*first)=temp;
	else
	{
		if (ch=='d')
		{
			Node *temp1;
			temp1=(*first);
			while (temp1->down!=NULL) temp1=temp1->down;
			temp1->down=temp;
			temp->up=temp1;
		}
		else if (ch=='r')
		{
			(*first)->right=temp;
			temp->left=(*first);
		}
	}
}

void initList (List *MainMenu)
{
	insertAtLast(MainMenu,"Cap nhat DS SV    >",1,100,'d');
	insertAtLast(MainMenu,"In danh sach      >",2,100,'d');
	insertAtLast(&(*MainMenu)->down," In ra man hinh console  >",1,3,'r');
	insertAtLast(MainMenu,"Sap xep           >",3,100,'d');
	insertAtLast(MainMenu,"Tim kiem          >",4,100,'d');
	insertAtLast(MainMenu,"Thong ke          >",5,100,'d');
	insertAtLast(MainMenu,"Thoat",6,30,'d');
	insertAtLast(MainMenu,"Nhap thong tin      >",1,100,'r');
	insertAtLast(&(*MainMenu)->right,"Chinh sua truc tiep >",2,38,'d');
	insertAtLast(&(*MainMenu)->right,"Xoa theo ma   >",3,39,'d');
	insertAtLast(&(*MainMenu)->right,"Chinh sua theo ma   >",4,40,'d');
	insertAtLast(&(*MainMenu)->right,"Nhap thu cong",1,1,'r');
	insertAtLast(&(*MainMenu)->down->down,"Sap xep chon      >",1,100,'r');
	insertAtLast(&(*MainMenu)->down->down->right,"Sap xep chen      >",2,100,'d');
	insertAtLast(&(*MainMenu)->down->down->right,"Sap xep tron   >",3,100,'d');
	insertAtLast(&(*MainMenu)->down->down->right,"Quick Sort        >",4,100,'d');
	insertAtLast(&(*MainMenu)->down->down->right,"Theo ma",1,4,'r');
	insertAtLast(&(*MainMenu)->down->down->right->right,"Theo ten",2,5,'d');
	insertAtLast(&(*MainMenu)->down->down->right->right,"Theo diem",3,6,'d');
	insertAtLast(&(*MainMenu)->down->down->right->right,"Theo ngay sinh",4,7,'d');
	insertAtLast(&(*MainMenu)->down->down->right->right,"Theo lop",5,32,'d');
	insertAtLast(&(*MainMenu)->down->down->right->down,"Theo ma",1,8,'r');
	insertAtLast(&(*MainMenu)->down->down->right->down->right,"Theo ten",2,9,'d');
	insertAtLast(&(*MainMenu)->down->down->right->down->right,"Theo diem",3,10,'d');
	insertAtLast(&(*MainMenu)->down->down->right->down->right,"Theo ngay sinh",4,11,'d');
	insertAtLast(&(*MainMenu)->down->down->right->down->right,"Theo lop",5,33,'d');
	insertAtLast(&(*MainMenu)->down->down->right->down->down,"Theo ma",1,12,'r');
	insertAtLast(&(*MainMenu)->down->down->right->down->down->right,"Theo ten",2,13,'d');
	insertAtLast(&(*MainMenu)->down->down->right->down->down->right,"Theo diem",3,14,'d');
	insertAtLast(&(*MainMenu)->down->down->right->down->down->right,"Theo ngay sinh",4,15,'d');
	insertAtLast(&(*MainMenu)->down->down->right->down->down->right,"Theo lop",5,34,'d');
	insertAtLast(&(*MainMenu)->down->down->right->down->down->down,"Theo ma",1,16,'r');
	insertAtLast(&(*MainMenu)->down->down->right->down->down->down->right,"Theo ten",2,17,'d');
	insertAtLast(&(*MainMenu)->down->down->right->down->down->down->right,"Theo diem",3,18,'d');
	insertAtLast(&(*MainMenu)->down->down->right->down->down->down->right,"Theo ngay sinh",4,19,'d');
	insertAtLast(&(*MainMenu)->down->down->right->down->down->down->right,"Theo lop",5,35,'d');
	insertAtLast(&(*MainMenu)->down->down->down,"Tuan tu           >",1,100,'r');
	insertAtLast(&(*MainMenu)->down->down->down->right,"Nhi phan          >",2,100,'d');
	insertAtLast(&(*MainMenu)->down->down->down->right,"Theo ma",1,20,'r');
	insertAtLast(&(*MainMenu)->down->down->down->right->right,"Theo ten",2,21,'d');
	insertAtLast(&(*MainMenu)->down->down->down->right->right,"Theo diem",3,22,'d');
	insertAtLast(&(*MainMenu)->down->down->down->right->right,"Theo ngay sinh",4,23,'d');
    insertAtLast(&(*MainMenu)->down->down->down->right->right,"Theo lop",5,36,'d');
	insertAtLast(&(*MainMenu)->down->down->down->right->down,"Theo ma",1,24,'r');
	insertAtLast(&(*MainMenu)->down->down->down->right->down->right,"Theo ten",2,25,'d');
	insertAtLast(&(*MainMenu)->down->down->down->right->down->right,"Theo diem",3,26,'d');
	insertAtLast(&(*MainMenu)->down->down->down->right->down->right,"Theo ngay sinh",4,27,'d');
    insertAtLast(&(*MainMenu)->down->down->down->right->down->right,"Theo lop",5,37,'d');
	insertAtLast(&(*MainMenu)->down->down->down->down,"Theo phan loai",1,28,'r');
}

List SelectedNode (Node *first, int focus)
{
	Node *temp;
	temp=first;
	while (temp!=NULL&&temp->focus!=focus)
		temp=temp->down;
	return temp;
}

List FindFirstNode (Node *first)
{
	if (first==NULL) return NULL;
	Node *temp;
	temp=first;
	while (temp->up!=NULL)
		temp=temp->up;
	return temp;
}

void deleteMenu (int x, int y, Node *first)
{
	Node *temp;
	temp=first;
	int local_x, local_y;
	local_x=x; local_y=y;
	while (temp!=NULL)
	{
		deleteDrawed(local_x,local_y+=3 ,  23);
		temp=temp->down;
	}
}

void Menuon(int &x, int &y, Node* &first,int column1,  int column, int prefocus[])
{
    int uu = 3 , uy = 2;
	if (first==NULL|| column1 == column || column1 == 0) return;
	else
	{
		int local_x, local_y, focus, maxfocus;
		char key;
		if (prefocus[column1]!=0) focus=prefocus[column1];
		else focus=1;
		Node *temp;
			local_x=x; local_y=y;
			temp=first;
			int  i = 0;
			while (temp!=NULL)
			{
				if (temp->focus==focus)
					draw(local_x,local_y+=uu,temp->text,1, 23, 3, 2);
				else
					draw(local_x,local_y+=uu,temp->text,0, 23, 3, 2);
				maxfocus=temp->focus;
				temp=temp->down;
			}
			temp=SelectedNode(first,focus);
			first = temp->right;
			if (temp->right==NULL) return ;
			else {
                    x= x+23+1 ;
                    y =y+(focus-1)*uu ;
                    column1++ ;
                    if (column1 == column) return ;
                    Menuon(x, y, first, column1 , column,prefocus);
			}

	}
}

int Menu (int x, int y, Node *first, int &column, int prefocus[])
{
    fflush(stdin) ;
    int uu = 3 , uy = 2;
    if (y==5 && x== 1) Menuon(x,y, first, 1, column, prefocus) ;
	if (first==NULL) return 0;
	else
	{
		int local_x, local_y, focus, maxfocus;
		char key;
		if (prefocus[column]!=0) focus=prefocus[column];
		else focus=1;
		Node *temp;
		do
		{
			local_x=x; local_y=y;
			temp=first;
			int  i =  0;
			while (temp!=NULL)
			{
				if (temp->focus==focus)
					draw(local_x,local_y+=uu,temp->text,1, 23, 3, 2);
				else
					draw(local_x,local_y+=uu,temp->text,0, 23, 3, 2);
				maxfocus=temp->focus;
				temp=temp->down;
			}
			fflush(stdin) ;
			key=getch();
			if (key==72)
			{
				focus--;
				if (focus < 1) focus = maxfocus;
			}
			else if (key==80)
			{
				focus++;
				if (focus > maxfocus) focus = 1;
			}
		} while(key!=77&&key!=75&&key!=13);
		if (key==77||key==13)
		{
			temp=SelectedNode(first,focus);
			prefocus[column]=focus;
			if (temp->right==NULL) return temp->sel;
			else {
                    column ++ ;
                    return Menu(x+23+1,y+(focus-1)*uu,temp->right,column,prefocus);}
		}
		else // 75 la phim sang trai
		{
			temp=FindFirstNode(first->left);
			deleteMenu(x,y,first);
			prefocus[column]=0;
			if (temp==NULL) Menu(x,y,first,column,prefocus);
			else {
                    column --;
                    return Menu(x-23-1,y-(prefocus[column]-1)*uu,temp,column,prefocus);
            }
		}
	}
}
void initFage(List* Fage){
	insertAtLast(Fage,"Trang truoc    >",1,1,'d');
	insertAtLast(Fage,"Trang sau      >",2,2,'d');
	insertAtLast(Fage,"Thoat          >",3,3,'d');
}

