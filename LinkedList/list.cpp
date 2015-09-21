void deleteLast(list &l,address p)
{
    address q;
    p=first(l);
    while(next(p)!=NULL)
    {
        q=p;
        p=next(p);
    }
    next(q)=NULL;
    dealokasi(p);
};

address findElm(list l, infotype x)
{
    address p;
    p=first(l);
    while(p!=NULL)
    {
        if(strcmp(info(p).id,x.id)==0)
        {
            break;
        }
    }
    return p;
};
