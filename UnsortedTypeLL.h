
#include <sring>
#ifndef UNSORTEDTYPELL_H_INCLUDED
#define UNSORTEDTYPELL_H_INCLUDED
using namespace std;
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
    void InsertItem(ItemType);
    void DeleteItem(string);
    bool search (string);
    ItemType* GetNextItem();
    void ResetList();

    void print();
private:
    NodeType * listData;
    int length;
    NodeType *currentPos;

};


#endif // UNSORTEDTYPELL_H_INCLUDED
