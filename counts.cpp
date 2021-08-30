#include <iostream>
#include <string>
#include "counts.h"
using namespace std;
bool cor(string s)
{
    if(s.size() != 5) return false;
    if(s[2] != '-') return false;
    if(s[1] < '1' || s[1] > '8') return false;
    if(s[4] < '1' || s[4] > '8') return false;
    if(s[0] < 'A' || s[0] > 'H') return false;
    if(s[3] < 'A' || s[3] > 'H') return false;
    return true;
}

bool step_horse(string s)
{
    int x1,x2,y1,y2;
    x1 = s[0] - 'A' + 1;
    x2 = s[3] - 'A' + 1;
    y1 = s[1] - '0';
    y2 = s[4] - '0';
    if((abs(x1-x2)) == 1 && (abs(y1-y2)) == 2) return true;
    if((abs(x1-x2)) == 2 && (abs(y1-y2))== 1) return true;
    return false;
}

bool step_bishop(string s)
{
    int x1,x2,y1,y2;
    x1 = s[0] - 'A' + 1;
    x2 = s[3] - 'A' + 1;
    y1 = s[1] - '0';
    y2 = s[4] - '0';
    if( (x2 - x1 == y2 - y1) || (x1 - x2 == y1 - y2) || (x1 + y1 == x2 + y2) ) return true;
    return false;
}
bool step_rook(string s)
{
    int x1,x2,y1,y2;
    x1 = s[0] - 'A' + 1;
    x2 = s[3] - 'A' + 1;
    y1 = s[1] - '0';
    y2 = s[4] - '0';
    if( (y1 == y2) || (x1 == x2) ) return true;
    return false;
}

bool step_queen(string s)
{
    int x1,x2,y1,y2;
    x1 = s[0] - 'A' + 1;
    x2 = s[3] - 'A' + 1;
    y1 = s[1] - '0';
    y2 = s[4] - '0';
    if( (y1 == y2) || (x1 == x2) ) return true;
    if( (x2 - x1 == y2 - y1) || (x1 - x2 == y1 - y2) || (x1 + y1 == x2 + y2) ) return true;
    return false;
}

void printEmptyBoard(void)
{
   int CELL = 8;

   for (int i = 0; i < 8; i++)
   {
      // Line starting with WHITE
      if ( i%2 == 0)
      {
         for (int z = 0; z < CELL/2; z++)
         {
            cout << "   ";
            for (int w = 0; w < 4; w++)
            {
               for (int j = 0; j < CELL; j++)
               {
                  cout << char(0xDB);
               }

               for (int j = 0; j < CELL; j++)
               {
                  cout << char(0xFF);
               }
            }
            cout << "\n";
          }
      }
      // Line starting with BLACK
      else
      {
         for (int z = 0; z < CELL/2; z++)
         {
            cout << "   ";
            for (int w = 0; w < 4; w++)
            {
                  for (int j = 0; j < CELL; j++)
                  {
                     cout << char(0xFF);
                  }

                  for (int j = 0; j < CELL; j++)
                  {
                     cout << char(0xDB);
                  }
            }
            cout << "\n";
         }
      }
   }
}

    // cout << "enter code: ";
    // string s;
    // cin >> s;
    // if(cor(s))
    //     if(step_rook(s)) {
    //     cout << "yes" << endl;
    //     }
    //     else cout << "no" << endl;
    //     else cout << "ERROR" << endl;

  

    
