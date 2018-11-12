#include"UnsortedTypeLL.h"
#include<iostream>
#include <exception>
using namespace std;
template class UnsortedTypeLL<NumberInfo>;


template<class ItemType>
UnsortedTypeLL<ItemType>::UnsortedTypeLL()
{
    length=0;
    listData=NULL;


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
void UnsortedTypeLL<ItemType>::DeleteItem(ItemType item)
{
    NodeType* location = listData;
    NodeType* tempLocation = NULL;
    if(item == listData->info)
    {
        tempLocation = location;
        listData = listData->next;

    }
    else
    {
        while(!(item == (location->next)->info))
        {
            location = location->next;
            tempLocation = location->next;
            location->next = (location->next)->next;

        }
        delete tempLocation;
        length--;

    }
}


template<class ItemType>
void UnsortedTypeLL<ItemType>::RetrieveItem(ItemType&item,bool&found)
{
    NodeType* location = listData;
    bool moreToSearch = (location !=NULL);
    found = false;
    while(moreToSearch && !found)
    {
        if(item == location->info)
            found = true;
        else
        {


            location = location->next;
            moreToSearch = (location!=NULL);
        }
    }
}
template<class ItemType>
void UnsortedTypeLL<ItemType>::MakeEmpty()
{
    NodeType* tempPtr;
    while(listData!=NULL)
    {
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
void UnsortedTypeLL<ItemType>::print()
{
    NodeType *temp =listData;
   while(temp!=NULL)
   {
       cout<<temp->info;
       temp=temp->next;
        cout<<" ";
   }
}

