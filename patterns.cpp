#include<iostream>
using namespace std;
int main()
{   
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            cout<<col<<" ";
            col++;
        }
        cout<<endl;
        row++;

    }


    3 2 1
    3 2 1
    3 2 1
    int n;
    cin>>n;
    int row=1;
    while(row<=n)-
    {
       int col=1;
       while(col<=n)
       {
        cout<<n-col+1<<" ";
        col++;
       }
       cout<<endl;
       row++;

    }

    1 2 3
    4 5 6
    7 8 9

    int n;
    cin>>n;
    int row=1;
    int val=1;
    while(row<=n)
    {
       int col=1;
       while(col<=n)
       {
            cout<<val<<" ";
            val++;
            col++;
       }
       cout<<endl;
       row++;
 

    }


    1
    2 2
    3 3 3
    4 4 4 4


     int n;
    cin>>n;
    int row=1;
    int val=1;
    while(row<=n)
    {
       int col=1;
       while(col<=row)
       {
        cout<<row<<" ";
        col++;
           
       }
       cout<<endl;
       row++;
 

    }


    *
    * *
    * * *
    int n;cin>>n;
    int row=1;
    while(row<=n)
    {
        int col=1;
        while(col<=row)
        {
            cout<<"*"<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }

    1
    2 3
    4 5 6
    7 8 9 10
    int n;
    cin>>n;
    int row=1,val=1;
    while(row<=n)
    {
        int col=1;
        while(col<=row)
        {
            cout<<val<<" ";
            val++;col++;
        }
        cout<<endl;
        row++;

    }


    1
    2 3
    3 4 5
    4 5 6 7
    5 6 7 8 9


    int n;cin>>n;
    int row=1;
    while(row<=n)
    {
        int val=row;
        int col=1;
        while(col<=row)
        {
            cout<<val<<" ";
            val++;
            col++;
        }
        cout<<endl;
        row++;

    }

    without use of value variable
    1
    2 3
    3 4 5
    4 5 6 7
    5 6 7 8 9
    int n;cin>>n;
    int row=1;
    while(row<=n)
    {
      
        int col=1;
        while(col<=row)
        {   int value=row+col-1;
            cout<<value<<" ";
            col++;

        }
        cout<<endl;
        row++;
    }



    1
    2 1
    3 2 1
    4 3 2 1
    5 4 3 2 1

    int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int col=1;
        while(col<=row)
        {
            int value=row-col+1;
            cout<<value<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }


    char ch='A';
  int a=ch+1;
  cout<<a<<endl;


    A A A A A
    B B B B B
    C C C C C
    D D D D D
    E E E E E

    int n;
    cin>>n;
    int row=1;char ch='A';
    while(row<=n)
    { char ch2=ch+row-1;int col=1;
        while(col<=n){
            cout<<ch2<<" ";
            col++;

        }
        cout<<endl;
        row++;
    }


    A B C D E
    A B C D E
    A B C D E
    A B C D E
    A B C D E

    int n;
    cin>>n;
    int row=1; 
    while(row<=n)
    {   int col=1;
        while(col<=n){
              char ch='A'+col-1;
              cout<<ch<<" ";
              col++;
        }
        cout<<endl;
        row++;      
    }



    A B C
    D E F
    G H I
    int n;
    cin>>n;
    int row=1;
    char ch='A';
    while(row<=n){
        int col=1;
        while(col<=n)
        {
            cout<<ch<<" ";
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }

    
    A B C
    B C D
    C D E
    int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        char ch='A'+row-1;
        int col=1;
        while(col<=n)
        {
            cout<<ch<<" ";
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }



    A
    B B
    C C C

    int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        char ch='A'+row-1;
        int col=1;
        while(col<=row)
        {
            cout<<ch<<" ";
            col++;


        }
        cout<<endl;
        row++;
    }


    A
    B C
    D E F
    G H I J
    int n;
    cin>>n;
    int row=1;
    char ch='A';
    while(row<=n)
    {   int col=1;
    while(col<=row)
    {
        cout<<ch<<" ";
        col++;
        ch++;
    }
    cout<<endl;
    row++;
      
    }




    A
    B C
    C D E
    D E F G


      int n;
    cin>>n;
    int row=1;
   
    while(row<=n)
    {   int col=1;
        char ch='A'+row-1;
        while(col<=row)
        {
            cout<<ch<<" ";
            ch++;
            col++;
            }
            cout<<endl;
            row++;
    }



    D
    C D
    B C D
    A B C D

    int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int col=1;
        char ch='A'+n-row;
        while(col<=row)
        {
            cout<<ch<<" ";
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }



    A B C
    B C D
    C D E

    int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        char ch='A'+row-1;
        int col=1;
        while(col<=n)
        {
            cout<<ch<<" ";
            ch++;
            col++;

        }
        cout<<endl;
        row++;
    }


       *
      **
     ***
    ****
    int n;
    cin>>n;
  

    int row=1;
    while(row<=n)
    {     int space=n-row;
     while(space)
    {
        cout<<" ";
        space--;
    }
        int col=1;
        while(col<=row)
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }


          * * * *
        * * * *
      * * * *
    * * * *
    int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int space=n-row;
        while(space)
        {
            cout<<"  ";
            space--;
        }
        int col=1;
        while(col<=n)
        {
            cout<<'*'<<" ";
            col++;
        }
        cout<<endl;
        row++;

    }

          *
        *  *
      *  *  *
    *  *  *  *
     int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int space=n-row;
        while(space)
        {
            cout<<"  ";
            space--;
        }
        int col=1;
        while(col<=row)
        {
            cout<<"*  ";
            col++;
        }
        cout<<endl;
        row++;

    }




    * * * *
    * * *
    * *
    *
    int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {   int a=n-row+1;
        int col=1;
        while(col<=a)
        {
            cout<<"*"<<" ";
            col++;
        }
        cout<<endl;
        row++;

    }


    ****
     ***
      **
       *
    int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int space=row-1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int col=1;
        int a=n-row+1;
        while(col<=a)
        {
            cout<<"*";
            col++;

        }
        cout<<endl;
        row++;

    }



    1111
     222
      33
       4
    int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int space=row-1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int col=1;
        int a=n-row+1;
        while(col<=a)
        {
            cout<<row;
            col++;

        }
        cout<<endl;
        row++;

    }



       1
      22
     333
    4444

    int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int space=n-row;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int col=1;
        while(col<=row)
        {
            cout<<row;
            col++;
        }
        cout<<endl;
        row++;
        
    }

    1234
     234
      34
       4
       int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {
       int space=row-1;
       while(space)
       {
        cout<<" ";
        space--;
       }
       int col=1;
        int a=n-row+1;
       int value=row;
       while(col<=a)
       {
        cout<<value;
        value++;
        col++;
       }
        cout<<endl;
        row++;

        
    }

       1
      23
     456
    78910

    int n;
    cin>>n;
    int row=1;
    int value=1;
    while(row<=n)
    {
       int space=n-row;
       while(space)
        {
            cout<<" ";
            space--;
        }        
        int col=1;
        while(col<=row)
        {
            cout<<value;
            value++;
            col++;

        }
        cout<<endl;
        row++;
    }



       1
      121
     12321
    1234321

    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int space=n-row;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int col=1;
        while(col<=row)
        {
            cout<<col;
            col++;
        }
        int a=row-1;
        while(a)
        {
            cout<<a;
            a--;
        }
        cout<<endl;
        row++;

    }

    1234554321
    1234**4321
    123****321
    12******21
    1********1
    int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int val=1;
        int value=n-row+1;
        while(value)
        {
            cout<<val;
            val++;
            value--;
        }
        int star=row-1;
        while(star)
        {
            cout<<"*";
            star--;
        }
        int star1=row-1;
        while(star1)
        {
            cout<<"*";
            star1--;
        }
        int val2=n-row+1;
        while(val2)
        {
            cout<<val2;
            val2--;
        }
      cout<<endl;
        row++;
    }


}