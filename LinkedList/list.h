#ifndef POINTER_H_INCLUDED
#define POINTER_H_INCLUDED

#include <iostream>

#include <string.h>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>


#define nil NULL
#define next(p) (p)->next
#define info(p) (p)->info
#define first(l) ((l).first)

using namespace std;

typedef struct infotype
{
    char nama[30];
    char pengurus[30];
    char pembina[30];
    int quota;
    char id[30];

};

typedef struct tElmlist *alamat;

typedef struct tElmlist
{
    infotype info;
    alamat next;
};

typedef struct singlist
{
    alamat first;
};

void createList(singlist *l);
void dealokasi(alamat p);
alamat alokasi(infotype x);

void insertFirst(singlist *l,alamat p);
void insertLast(singlist *l,alamat p);

void deleteFirst(singlist *l,alamat p);
void deleteLast(singlist *l,alamat p);

alamat searchData(singlist l, infotype x);
void updateData(alamat p, infotype y);
void printInfo(singlist l);
void masukan(infotype x);
void insertAfter(alamat q,alamat p);
#endif // POINTER_H_INCLUDED
