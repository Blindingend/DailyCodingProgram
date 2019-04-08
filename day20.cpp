#include <set>

struct List
{
    int value;
    List* next;
};



class solution
{
public:
    int findintersect(List* A, List* B)
    {
        set<List*> listSet;
        while(A)
        {
            listSet.insert(A);
            A = A.next;
        }
        while(B)
        {
            if(listSet.count(B) == 1) return B.value;
            B = B.next;
        }
    }    

};