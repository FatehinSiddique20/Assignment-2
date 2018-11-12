
#include "NumberInfo.h"
#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
template<class ItemType>
class UnsortedType
{
struct NodeType
{

ItemType info;
NodeType*next;
};
public:
    UnsortedType();
    ~UnsortedType();
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


#endif // UNSORTEDTYPE_H_INCLUDED
