
#include "NumberInfo.h"
#ifndef UNSORTEDTYPELL_H_INCLUDED
#define UNSORTEDTYPELL_H_INCLUDED
template<class ItemType>
class UnsortedTypeLL
{
struct NodeType
{

ItemType info;
NodeType*next;
};
public:
    UnsortedTypeLL();
    ~UnsortedTypeLL();
    bool IsFull();
    int LengthIs();
    void MakeEmpty();
    void RetrieveItem(ItemType&,bool&);
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    
    void print();
private:
    NodeType * listData;
    int length;
    

};


#endif // UNSORTEDTYPELL_H_INCLUDED
