#include <bits/stdc++.h>
//N su stupci M retci
using namespace std;

void ispisPolje(int *polje,int N, int M)
{
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout<<"["<<*(polje+(i*M)+j)<<"] ";
        }
        cout<<endl;
    }
}

void rucniUnos(int *polje, int N, int M)
{
    cout<<"Rucni unos\n";
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin>>*(polje+(i*M)+j);
        }
    }

}


void generirajPolje(int *polje, int N, int M)
{
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            *(polje+(i*M)+j) = rand()%9+ 1;
        }
    }
}

void zbroji(int *A, int *B, int *C, int N, int M){

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            *(C + (i * M) + j) = *(A + (i * M) + j) + *(B + (i * M) + j);
        }
    }
}

void oduzmi(int *A, int *B, int *C, int N, int M){

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N;j++)
        {
            *(C + (i * M) + j) = *(A + (i * M) + j) - *(B + (i * M) + j);
        }
    }
}

void mnozenjeSkalarom(int *A, int *C, int N, int M, int skalar){

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            *(C + (i * M) + j) = *(A + (i * M) + j) * skalar;
        }
    }

}


void mnozenjeMatrice(int *A, int *B, int *C, int N1, int M1, int N2, int M2){



}

int main()
{
    int N1,M1,N2,M2;
    //bool dijagonalna = true,jedinicna = true,gornjeTrokutasta = true, donjeTrokutasta = true;

    cout<<"Unesi 2 broja\n";
    cin>>N1>>M1>>N2>>M2;

    int A[N1][M1];
    int B[N2][M2];

    if(M1 != N2)
        return 0;

    int C[N2][M1];

    generirajPolje(&A[0][0],N,M);
    generirajPolje(&B[0][0],N,M);

    cout<<"A"<<endl;
    ispisPolje(&A[0][0],N,M);


    cout<<"\nB"<<endl;
    ispisPolje(&B[0][0],N,M);



    /*cout<<"\nC zbrojeno"<<endl;
    zbroji(&A[0][0],&B[0][0],&C[0][0],N,M);
    ispisPolje(&C[0][0],N,M);



    cout<<"\nC oduzeto"<<endl;
    oduzmi(&A[0][0],&B[0][0],&C[0][0],N,M);
    ispisPolje(&C[0][0],N,M);

    cout<<"\nA skalirano s 4"<<endl;
    mnozenjeSkalarom(&A[0][0],&C[0][0],N,M,4);
    ispisPolje(&C[0][0],N,M);*/


    /*for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
            {
                if(i == j)
                    if(polje[i][j] != 1)
                        jedinicna = false;
                if(i != j)
                    if(polje[i][j] != 0)
                        dijagonalna = false;
                if(j > i)
                    if(polje[i][j] != 0)
                        donjeTrokutasta = false;
                if(j < i)
                    if(polje[i][j] != 0)
                        gornjeTrokutasta = false;
            }
    }

    if(jedinicna)
        cout<<"jedinicna\n";
    else if(dijagonalna)
        cout<<"dijagonalna\n";
    else
        cout<<"ni dijagonalna ni jedinicna\n";

    if(gornjeTrokutasta)
        cout<<"gornjeTrokutasta\n";

    if(donjeTrokutasta)
        cout<<"donjeTrokutasta\n";*/





    return 0;
}
