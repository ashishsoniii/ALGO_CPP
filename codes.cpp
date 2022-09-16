/**************************************      PARANTHESIS MATCHING ({}[]()-type)    ****************************************/
#include <bits/stdc++.h>
using namespace std;

bool is_OpeaningP(char ss)
{
   if ((ss == '(') || (ss == '{') || (ss == '['))
   {
      return true;
   }
   return false;
}
bool is_Match(char ss, char ss2)
{
   if ((ss == '(' && ss2 == ')') || (ss == '{' && ss2 == '}') || (ss == '[' && ss2 == ']'))
   {
      return true;
   }
   return false;
}
bool is_Closing(char ss)
{
   if ((ss == ')') || (ss == '}') || (ss == ']'))
   {
      return true;
   }
   return false;
}
int parantheses(string s)
{
   stack<char> stk;

   for (int i = 0; i < s.length(); i++)
   {
      if (is_OpeaningP(s[i]))
      {
         stk.push(s[i]);
         cout << "tktyjb top" << endl;
      }
      else if (is_Closing(s[i]))
      {
         if (stk.empty())
         {
            cout << "Not Matching!" << endl;
            return 0;
         }
         else
         {
            if (is_Match(stk.top(), s[i]))
            {
               // cout << "ima here" << endl;
               stk.pop();
            }
         }
      }
      else
      {
         // Eat 5 star do nothing!
         // apart from parenthesis element ignored here!
      }
   }
   if (stk.empty())
   {
      cout << "Matching!" << endl;
   }
   else
   {
      cout << "Not Matching" << endl;
   }
   return 0;
}

int main()
{
   string s;
   cout << "Enter String Here!" << endl;
   cin >> s;

   parantheses(s);

   return 0;
}
