#include "our_list.h"


//Insert function
void insert(Our_list* l1,int ID_value) //Not tested
{
    Our_list *temp; = new Our_list;
    temp->next = l1;
    temp->ID = ID_value;
}

void insert(Our_list* l1,Our_list * el) //Not tested
{
    el->next = l1;
}

int insert(Our_list* l1,int ID_value,int itm_nr)
{

}

int insert(Our_list* l1,Our_list * el, int itm_nr)
{

}

//Append function
void append(Our_list* l1,int ID_value) //Not tested
{
    Our_list *temp = new Our_list;
    temp->ID = ID_value;

    while(l1 != NULL)
    {
        if(l1 == NULL)
            l1->next = temp;

        l1 = l1->next;
    }

}


void append(Our_list* l1,Our_list * el)
{

}

//return Our_List funct
Our_list* connect(Our_list* l1,Our_list* l2)
{

}

Our_list* at(Our_list* l1, int n) //Not tested
{    
    Our_list* temp = l1;

    for(int i=0; i<n; i++)
    {
        if(temp)
            temp = temp->next;
    }
    return temp;
}


Our_list* last(Our_list *l1) //Not tested
{
    while(l1->next != NULL)
    {
        l1 = l1->next;
    }

    return l1;
}

//Erase funct
void erase_first(Our_list* l1)
{

}


int erase_first_n(Our_list* l1,int n)
{

}


void erase_all(Our_list* l1)
{

}


void erase_last(Our_list* l1)
{

}


int erase_last_n(Our_list* l1)
{

}


//Other funct
int length(Our_list* l1) //Not tested
{
    int len;

    while(l1 != NULL)
    {
        len++;
        l1 = l1->next;
    }

    return len;

}


bool xchange(Our_list* l1, int n1, int n2)
{

}


