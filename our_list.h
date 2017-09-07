#ifndef OUR_LIST_H
#define OUR_LIST_H

#include "our_list_global.h"

struct OUR_LISTSHARED_EXPORT Our_list
{
  unsigned int ID;
  Our_list * next;
};

//end of list:
///0 terminated: next pointer of last element is 0

//declare functions

//insert one element at the top of the list
void insert(Our_list* l1,int ID_value);
///inserts a value on top of the list
/// no return value
/// input: value


void insert(Our_list* l1,Our_list * el);
///inserts a list item on top of the list
/// no return value
/// input: item

void append(Our_list* l1,int ID_value);
///inserts a value at the end of the list
/// no return value
/// input: value

void append(Our_list* l1,Our_list * el);
///inserts a list item at the end of the list
/// no return value
/// input: item

int insert(Our_list* l1,int ID_value,int itm_nr);
///inserts a value as itm_nr element of the list
/// if the place does not exist: value will be appended
/// return value: resulting item number
/// input: value

int insert(Our_list* l1,Our_list * el, int itm_nr);
///inserts a list item as itm_nr element of the list
/// if the place does not exist: value will be appended
/// return value: resulting item number
/// input: value

Our_list* connect(Our_list* l1,Our_list* l2);
///connects l2 to l1, l1 as first
///returns beginn of resulting list

void erase_first(Our_list* l1);
///erases first element

int erase_first_n(Our_list* l1,int n);
///erases first n elements
/// returns number of erased

void erase_all(Our_list* l1);
///erases all elements

void erase_last(Our_list* l1);
///erases last element

int erase_last_n(Our_list* l1);
///erases last n elements
///returns number of erased

Our_list* at(Our_list* l1, int n);
///returns element number n (0 beginning)

int length(Our_list* l1);
///returns number of elements in list

bool xchange(Our_list* l1, int n1, int n2);
/// xchanges the elements number n1 and n2
/// returns false, if one of the elements does not exist, otherwise true

Our_list* last(Our_list *l1);
///returns pointer to last element



#endif // OUR_LIST_H
