#include"UnsortedTypeLL.h"
#include<iostream>
#include <exception>
#include <string>
#include "CustomerData.h"
#include "NumberInfo.h"
using namespace std;
template class UnsortedTypeLL<NumberInfo>;
template class UnsortedTypeLL<CustomerData>;


template<class ItemType>
UnsortedTypeLL<ItemType>::UnsortedTypeLL()
{
    length=0;
    listData=NULL;
    currentPos = NULL;


}
template<class ItemType>
int UnsortedTypeLL<ItemType>::LengthIs()
{
    return length;
}
template<class ItemType>
bool UnsortedTypeLL<ItemType>::IsFull()
{
  NodeType* location;
  try
  {
      location = new NodeType;
      delete location;
      return false;
  }
  catch(bad_alloc exception)
  {
      return true;
  }
}
template<class ItemType>
void UnsortedTypeLL<ItemType>::InsertItem(ItemType item)
{
 NodeType* location;
 location = new NodeType;
 location->info=item;
 location->next=listData;
listData = location;
 length++;

}

template<class ItemType>
void UnsortedTypeLL<ItemType>::ResetList()
{
	currentPos = NULL;
}
template<class ItemType>

ItemType* UnsortedTypeLL<ItemType>::GetNextItem()
{
	if (currentPos == NULL)
	{
		currentPos = listData;
	}
	else
		currentPos = currentPos->next;
	return &(currentPos->info);
}
template<class ItemType>
void UnsortedType<ItemType>::DeleteItem(string item)
{
    NodeType* location = listData;
    NodeType* tempLocation = NULL;
    if((listData->info.is_equal(item)))
    {
        tempLocation = location;
        listData = listData->next;
		delete tempLocation;
    }
    else
    {
        while(!(location->next->info.is_equal(item)))
        {
			tempLocation = location;
            location = location->next;
        }
		if (location->next != NULL)
			location->next = location->next->next;
		else
			location->next = NULL;
        delete tempLocation;
        length--;
    }
}


template<class ItemType>
void UnsortedTypeLL<ItemType>::search(string item)
{
    NodeType* temp;
	temp = listData;
	while (temp != NULL)
	{
		if (temp->info.is_equal(item))
			return true;
		temp = temp->next;
	}
	return false;
}
template<class ItemType>
void UnsortedTypeLL<ItemType>::MakeEmpty()
{
    NodeType* tempPtr;
    while(listData!=NULL)
    {
        currentPos = NULL;
        tempPtr = listData;
        listData= listData->next;
        delete tempPtr;

    }
}
template<class ItemType>
UnsortedTypeLL<ItemType>::~UnsortedTypeLL()
{
    MakeEmpty();
}
template<class ItemType>
void UnsortedTypeLL<ItemType>::ResetList()
{
    currentPos=NULL;
}
template<class ItemType>
void UnsortedTypeLL<ItemType>::InsertItem(ItemType item)
{
   NodeType* location;
   location = new NodeType;
   location->info=item;
   location->next=listData;
   listData = location;
   length++;
}
template<class ItemType>
void UnsortedTypeLL<ItemType>::print()
{
    NodeType *temp =listData;
   while(temp!=NULL)
   {
       temp->info.print();
       temp=temp->next;

   }
}

