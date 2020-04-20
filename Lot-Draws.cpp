#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cstring>
#include<ctime>
using namespace std;

int main()
{
    fstream flotto;
    flotto.open("C:/4cdati/lotto.dat" , ios::out);
    int k;
    int j;
    int n;
    int cas;
       srand(time(0));
       for(j=1;j<=50;j++)
          {
          cas=1+rand()%90;
          flotto<<cas<<endl;
          }
    flotto.close();

    // stampa numeri
    string s;

    flotto.open("C:/4cdati/lotto.dat" , ios::in);
    for(k=0;k<50;k++)
    {
         flotto>>s;
         if(k%5==0)
         cout<<endl;
         cout<<s<<"\t ";
    }
    flotto.close();
    cout<<endl;
system("pause");
}
