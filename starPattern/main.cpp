#include<iostream>
using namespace std;


void topStar(int r)
{
    for(int i=1;i<=r;i++)
    {

        if(i!=r)
        {

           for(int j=i+1;j<=r*3;j++)
           {

            cout<<" ";

           }

        }

// START: TOP LEFT LINE
   if(i == r)
   {
       for(int l=1;l<=r*2;l++)
       {

        cout<<"*";

       }
   }
// END: TOP LEFT LINE

// START: TOP STAR
   for(int j=1 ;j<=i;j++)
   {

        if( j == 1 )
        {
            cout<<"*" ;
        }else{
            cout<<" ";
        }

   }

   for(int k=1;k<=i;k++)
   {

        if(k==i)
        {
            cout<<"*";
        }else{
            cout<<" ";
        }

   }
// END: TOP STAR

// START: TOP RIGHT LINE
   if(i == r)
   {

       for(int l=1;l<=r*2;l++)
       {
        cout<<"*";
       }

   }
// END: TOP RIGHT LINE
   cout<<"\n";

    }

}

void centerStar(int r)
{
//START: TOP CENTER STAR
for(int i=1;i<=r;i++)
{

 for(int k = 1;k<=r;k++ )
    {

        if(k==i)
        {
            // 6*r = 2*r + 2*r + 2*r
            for(int l = k ; l<= r*6;l++)
            {
                    if(l == k || l == (r*6) - k )
                    {

                        cout<<"*";

                    }else{

                        cout<<" ";

                    }
            }

        }else{
            cout <<" ";
        }
    }

   cout<<"\n";
}
//END: TOP CENTER STAR

//START: BOTTOM CENTER STAR
for(int i=1;i<=r;i++)
{

  for(int l = 1;l<=r;l++ )
    {
        if(l==r-i+1)
        {
            // 6*r = 2*r + 2*r + 2*r
            for(int m = l ; m<= r*6;m++)
            {
                    if(m == l || m == (r*6) - l )
                    {

                        cout<<"*";

                    }else{

                        cout<<" ";

                    }

            }

        }else{

            cout <<" ";

        }
    }

   cout<<"\n";
}
//END: BOTTOM CENTER STAR
}

void bottomStar(int r)
{

for(int i=1;i<=r;i++)
{

// START: BOTTOM LEFT LINE

   if(i == 1)
   {
       for(int j=1;j<=r*2;j++)
       {
            cout<<"*";
       }
   }

    if(i != 1)
    {

        for(int k = 1;k<=r*2;k++ )
        {
           cout<<" ";
        }

    }

// END: BOTTOM LEFT LINE

// START: BOTTOM STAR
    for(int k = 1;k<=r;k++ )
    {
        if(k==i)
        {

            cout<<"*";

        }else{
            cout <<" ";
        }
    }

    for(int l = 1;l<=r;l++ )
    {
        if(l==r-i+1)
        {

            cout<<"*";

        }else{
            cout <<" ";
        }
    }
// END: BOTTOM STAR

// START: BOTTOM RIGHT LINE
   if(i == 1)
   {
       for(int j=1;j<=r*2;j++)
       {

        cout<<"*";

       }
   }
    if(i != 1)
    {

        for(int k = 1;k<=r*2;k++ )
        {
           cout<<" ";
        }

    }
// END: BOTTOM RIGHT LINE
   cout<<"\n";

}

}


int main()
{

int r;

cout << "Enter a star number: ";
cin >> r;

cout << "\n";
cout << "\n";

topStar(r);
centerStar(r);
bottomStar(r);

cout << "\n";
cout << "\n";

return 0;
}
