#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{

    int y=1;
    int k=5;
    HANDLE colour=GetStdHandle(STD_OUTPUT_HANDLE);

    cout<<"enter how many inerations:";
    int n,i,j;
    cin>>n;
    system("CLS");
    int x=n;
     n=1;
    startloop:
    cout<<"interation";
    cout<<n<<endl;
    for(i=1;i<=n;i++)
    {
    SetConsoleTextAttribute(colour,k);
        for(j=1;j<=n-i;j++)
        cout<<" ";
        for(j=1;j<=i;j++)
        cout<<"\\";
        for(j=i-1;j>=1;j--)
            cout<<"/";
        for(j=1;j<=10;j++)
          cout<<" ";
        for(j=1;j<=n-i+1;j++)
          cout<<"<";
        for(j=1;j<n-i+1;j++)
          cout<<">";
          cout<<endl;
    }
   for(i=n;i>=1;i--)
    {
        SetConsoleTextAttribute(colour,y);
      for(j=1;j<=n-i;j++)
        cout<<" ";
      for(j=1;j<=i;j++)
        cout<<"q";
      for(j=1;j<i;j++)
        cout<<"p";
         for(j=1;j<=10;j++)
            cout<<" ";
        for(j=1;j<=n-i+1;j++)
            cout<<"d";
        for(j=i;j<=n-1;j++)
            cout<<"b";

        cout<<endl;
        }
        getche();
        system("CLS");
        n++;
        if(n%10==0)
        {
             k++;
             y++;
        }

        if(n<=x)
         goto startloop;
         cout<<n<<endl;

    return 0;
}

