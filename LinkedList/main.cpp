#include <iostream>
#include <stdlib.h>
#include "linked.h"

using namespace std;
int j;
int main()
{
    infotype x;
    singlist l;
    alamat p;
    p=alokasi(x);
    createList(&l);

    do
    {

        cout << " MENU PILIHAN " << endl;
        cout << "1.insert first"<< endl;
        cout << "2.insert after "<< endl;
        cout << "3.insert last "<< endl;
        cout << "4.delete first "<< endl;
        cout << "5.delete after "<< endl;
        cout << "6.view list "<< endl;
        cout << "7.search element "<< endl;
        cout << "8.exit"<< endl;
        cout << " Menu Pilihan : ";
        cin >> j;



        if (j==1)
        {
            masukan(x);
            p=alokasi(x);
            insertFirst(&l,p);
            cout << "Data sudah di input"<<endl;

            getch();
            system("CLS");
        }
        if (j==2)
        {
            masukan(x);
            p=alokasi(x);
            alamat q;
            q=alokasi(x);
            insertAfter(p,q);
            cout << "Data sudah di input"<<endl;
            getch();
            system("CLS");
        }
        if (j==3)
        {

            masukan(x);
            p=alokasi(x);
            insertLast(&l,p);
            cout << "Data sudah di input"<<endl;
            getch();
            system("CLS");
        }
        if (j==4)
        {

            deleteFirst(&l,p);
            cout << "Data pertama sudah di hapus"<<endl;
            getch();
            system("CLS");
        }
        if (j==5)
        {

            deleteLast(&l,p);
            cout << "Data di akhir sudah di hapus"<<endl;
            getch();
            system("CLS");
        }
        if (j==6)
        {
            printInfo(l);
            getch();
            system("CLS");

        }
        if (j==7)
        {
            cout << "cari id : ";
            cin>> x.id;
            alamat f=nil;
            f=searchData(l,x);
            cout << "data ditemukan di alamat : " << f << endl;
            getch();
            system("CLS");
        }

        if (j>8)
        {
            cout << "menu salah"<<endl;
            getch();
            system("CLS");
        }


    }
    while(j!=8);






    return (0);
}
