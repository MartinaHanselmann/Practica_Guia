#include "libreria.h"

Libreria::Libreria()
{
    struct Puntos
    {
        int x1;
        int y1;
        int x2;
        int y2;
    };

    void CompararPuntos()
    {
        cout<<"Ingrese x1:"<<endl;
        cin>>Puntos.x1;

        cout<<"Ingrese y1:"<<endl;
        cin>>Puntos.y1;

        cout<<"Ingrese x2:"<<endl;
        cin>>Puntos.x2;

        cout<<"Ingrese y2:"<<endl;
        cin>>Puntos.y2;

        //int x=0;
        //int y=0;

        int distancia1=sqrt((x1*x1)+(y1*y1));
        int distancia2=sqrt((x2*x2)+(y2*y2));

        if(distancia1<distancia2)
        {
            cout<<"El segundo punto esta mas lejos del origen"<<endl;
        }

        if(distancia1>distancia2)
        {
            cout<<"El primer punto esta mas lejos del origen"<<endl;
        }








    }
}
