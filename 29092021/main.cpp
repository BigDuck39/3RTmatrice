#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define N 3
#define M 3




int main()
{
    int a ,b;
    cin>>a>>b;
    cout<<endl;

    int polje[a][b];

    for(int i = 0;i<a;i++){
        for(int j = 0;j<b;j++){
            int n;
            cin>>n;
            polje[i][j] = n;
        }

    }
      for(int i = 0;i<a;i++){
        for(int j = 0;j<b;j++){
            cout<<polje[i][j]<<"\t";
        }
        cout<<endl;

    }
    bool jedenicna = true;
    bool dijagonalna = true;

    bool donje = true;
    bool gornje = true;

    for(int i = 0;i<a;i++){
        for(int j = 0;j<b;j++){
           if(i==j)
            if(polje[i][j] !=1)
            jedenicna = false;
            if(i!=j)
                if(polje[i][j] != 0)
                jedenicna = false;
        }

    }

    for(int i = 0;i<a;i++){
        for(int j = 0;j<b;j++){
            if(i==j)
                if(polje[i][j] == 0)
                    dijagonalna = false;
            if(i!=j)
                if(polje[i][j] != 0)
                    dijagonalna = false;
            if(i<j)
                if(polje[i][j] != 0)
                    donje = false;
               if(i>j)
                if(polje[i][j] != 0)
                    gornje = false;
        }

    }

    cout<<endl<<jedenicna;
    cout<<endl<<dijagonalna;
    cout<<endl<<donje;
    cout<<endl<<gornje;




    return 0;
}
