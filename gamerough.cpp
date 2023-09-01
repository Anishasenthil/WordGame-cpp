//chance lost should retain always and shd upgraded nly when lost;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<conio.h>
using namespace std;
int main()
{
    static char names[12][20]={"SANIA MIRZA","SANIA NEHWAL ","P V SINDHU","M S DHONI","MITHALI RAJ","SMRITI MANDHANA","HIMA DAS","SERENA WILLIAMS","GEETA PHOGAT","P T USHA","DEEPIKA KUMARI","HEENA SINDHU"};
    static char  alphabet[52] = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y Z"};
    char alphabet1[52] ;
    char res[25];
    int current[3];
    char charact ;
    int len = 0 , n = 0 , x = 0 ,i = 0 , j = 0 , k =0 , l = 0 ,m =0, flag = 0,cn = 1 , dig = 0 ,p=0, temp = 0 ,win=0,pointer =0,num = 0 ,a = 0 ,z=0, b = 0,r=0,length =0,incret=0;
    int old[20] = {0};
    int modi[20] = {0};
    char newstr[25];
    char input[3][20];
    int  count= 0 ;

    time_t t;
    srand((unsigned)time(&t));
    for(a=0;a<15;a++)
          old[a] = rand() % 12;
    for(a = 0 ; a< 20 ; ++a)
     {
        count = 1;
        for(b = 0; b <= a ;++b)
        {
            if(old[a] == modi[b])
            {
                count++;
                break;
            }
        }
        if(count == 1)
        {
           modi[x++] = old[a] ;
        }
    }
    for(a = 0 ; a <3; ++a)
    {
        current[r++] =modi[a];
    }
    while(z<3)
    {
     k = current[z];
     length=0;
    for(int q = 0;names[k-1][q] != '\0' ; q++)
    {
        length++;
    }

    for(i = 0 ; i < length ;++i)
     {
      input[z][i]=names[k-1][i];
     }
    input[z][i] = '\0';
     len=length;
    for( i = 0 ; i < len ; ++i)
    {
        if(input[z][i] == ' ')
            newstr[i] = ' ';
        else
           newstr[i] = '*' ;
    }
    newstr[i] = '\0' ;
  temp=0;
  cn=1;
  m=0;
  for(i=0;i<52;i++)
  {
      alphabet1[m++] = alphabet[i];
  }

  while((newstr != input[z])&&(temp != 7))
  {
      cout<< alphabet1 << endl<<endl;
      cout << "the word is = "<< newstr << endl<<endl ;
      cout << "enter character to replace = " ;
      fflush(stdin);
      cin >>charact ;
     system("cls");
      flag = 0;
      p=0;
      for(i = 0;i < len; i++)
      {
         if(charact == input[z][i])
         {
           p++;
           break;
         }
      }
     if(p>0)
     {
         for(j=0;j<52;j=j+2)
         {
             if(charact == alphabet1[j])
             {
                 alphabet1[j]='$';

             }
         }
     }
     if(p==0)
     {
          for(j=0;j<52;j=j+2)
         {
             if(charact == alphabet1[j])
             {
                 alphabet1[j]='#';
             }
         }
     }
      for( k = 0; k< len ; ++k)
      {
        if(  input[z][k] == charact)
        {
           newstr[k] = charact ;
           flag = 1;
        }
      }

      cout<<"SCORE = "<<win<<" / 3"<<endl<<endl;

      if(flag == 0)
      {
          temp = cn;
          cout << "chances lost "<< cn++ <<endl<<endl ;
      }
      else
      {
         cout << "chances lost "<< temp  <<" only " <<endl<<endl ;
      }
      dig = 0;
      for(i = 0 ;i < len ;++i)
      {
          if(newstr[i]!= '*' )
             dig ++;
      }
      if(dig == len)
         break;
  }
  pointer =0;
   for(i = 0 ;i < len ;++i)
      {
          if(newstr[i] != '*')
             pointer++;
          else
             pointer=0;
      }

   if(pointer == len)
   {
       cout<<"Congratulations!! ,YOU FOUND THE WORD :)"<<endl<<endl;
       win++;
   }
   else
   {
      cout<<"BETTER LUCK NEXT TIME :( . The correct word is  "<<input[z]<<endl<<endl;
   }
   z++;
    }
   return( 0 );
}
