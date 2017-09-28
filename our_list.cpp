#include "our_list.h"


//Insert function
void insert(Our_list* &l1,int ID_value) //Not tested
{
    Our_list *add = new Our_list;

    add->next = l1;
    add->ID = ID_value;
}

void insert(Our_list* &l1,Our_list * el) //Not tested
{
    el->next = l1;
}

int insert(Our_list* &l1,int ID_value,int itm_nr)
{

}

int insert(Our_list* &l1,Our_list * el, int itm_nr)
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
void erase_first(Our_list* &l1)
{

}


int erase_first_n(Our_list* &l1,int n)
{

}


void erase_all(Our_list* &l1)
{

}


void erase_last(Our_list* &l1)
{

}


int erase_last_n(Our_list* &l1)
{

}


//Other funct
int length(Our_list* l1) //tested
{
    int len;

    while(l1 != NULL)
    {
        len++;
        l1 = l1->next;
    }

    return len;

}



bool xchange(Our_list* &l1, int n1, int n2)
{
    //Pointer deklaration
    Our_list* temp = l1;
    Our_list* minus_a;
    Our_list* minus_b;
    Our_list* plus_a;
    Our_list* plus_b;
    Our_list* list_a;
    Our_list* list_b;

    //list_a und list_b herrausfinden

    //Schleife um den Index n1 zu erreichen
    for(int x=0; x<n1; x++)
    {
        if(temp)                    // == temp != null
            temp = temp->next;
        else
            return false;           //Wert nicht vorhanden
        if(x == n1-1)               //Hilfszeiger minus a
            temp->next = minus_a;
        if(x == n1+1)
            temp->next = plus_a;    //Hilfszeiger plus a

    }
    temp = list_a;                  //Addresse von Index n1 in list_a speichern

    //Schleife um den Index n2 zu erreichen
    for(int x=0; x<n2; x++)
    {
        if(temp)                    // temp == temp != null
            temp = temp->next;
        else
            return false;
        if(x == n2-1)               //Hilfzeiger minus b
            temp->next = minus_b;
        if(x == n2+1)
            temp->next = plus_b;    //Hilfszeiger plus b

    }
    temp = list_b;                  //Addresse von Index n2 in list_b speichern

    //list_a und list_b tauschen
    list_a->next = plus_b;
    list_b->next = plus_a;
    minus_a->next = list_b;
    minus_b->next = list_a;
    return true;
}

bool issorted_dec(Our_list *l1)
{

}

bool issorted_inc(Our_list *l1)
{

}

bool merge(Our_list *&l1, Our_list *l2)
{

}

bool merge(Our_list *&l1, int ID_val)
{

}

int extract(Our_list *l1, int ID_arr[], int n)
{

}
