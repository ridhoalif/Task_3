#include "linked.h"

void createList(singlist *l)
{
    first(*l) = nil;
};

void dealokasi(alamat p)
{
    free(p);
};

alamat alokasi(infotype x)
{
    alamat p;
    p=(alamat)malloc(sizeof(tElmlist));
    info(p)=x;
    next(p)=nil;
    return p;
};

void insertFirst(singlist *l,alamat p)
{
    if(first(*l)==nil)
    {
        first(*l)=p;
    }
    else
    {
        next(p)=first(*l);
        first(*l)=p;
    }
};

void insertLast(singlist *l,alamat p)
{
    alamat q=first(*l);
    while(next(q)!=nil)
    {
        q=next(q);
    }
    next(q)=p;
    next(p)=nil;
};

void deleteFirst(singlist *l,alamat p)
{
    if(next(first(*l))==nil)
    {
        first(*l)=nil;
    }
    else
    {
        p=first(*l);
        first(*l)=next(p);
        next(p)=nil;
    }
    dealokasi(p);
};

void deleteLast(singlist *l,alamat p)
{
    alamat q;
    p=first(*l);
    while(next(p)!=nil)
    {
        q=p;
    }
    next(q)=nil;
    dealokasi(p);
};

alamat searchData(singlist l, infotype x)
{
    alamat p;
    p=first(l);
    while(p!=nil)
    {
        if(strcmp(info(p).id,x.id)==0)
        {
            break;
        }
        else
        {
            p=next(p);
        }
    }
    return p;
};

void updateData(alamat p, infotype y)
{
    info(p)=y;

};

void printInfo(singlist l)
{
    alamat p;
    while((next(p)!=nil))
    {
        cout<< "ID UKM :" <<info(next(p)).id << endl;
        cout<< "Nama UKM:" <<info(next(p)).nama << endl;
        cout<< "Pengurus UKM :" <<info(next(p)).pengurus << endl;
        cout<< "Pembina UKM :" <<info(next(p)).pembina << endl;
        cout<< "Quota UKM :" <<info(next(p)).quota <<endl;
        cout<< endl;
        p=next(p);
    }
};

void masukan(infotype x)
{
    alamat p;

    cout << "ID UKM : ";
    cin >> info(p).id;
    cout << "Nama UKM: ";
    cin >> info(p).nama;
    cout << "Pengurus UKM : ";
    cin >> info(p).pengurus;
    cout << "Pembina UKM: ";
    cin >> info(p).pembina;
    cout << "Quota UKM : ";
    cin >> info(p).quota;

};
void insertAfter(alamat q,alamat p)
{
    next(p)=next(q);
    next(q)=p;
};

address searchelement(list l, infotype x)
{
    address p;
    int a=0;

    p=first(l);
    while ( p != nil)
    {
        if (strcmp(info(p).id,x.id) == 0)
        {
            a = 1;
            break;
        }
        else
        {
            p = next(p);
        }
    }
    if (a != 1)
    {
        p = nil;
    }
    return p;
}
