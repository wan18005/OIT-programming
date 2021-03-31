#include <iostream>
#include <string>
#include <map>
using namespace std;
// starting time at 2:00PM
int romanToInt(string s) {
    // i use a map to store and character that is relative number rather than using a switch statement
     map<char ,int> 
     m{ {'I' , 1},
      {'V' , 5}, 
      {'X' , 10},
      {'L' , 50},
      {'C' , 100},
      {'D' , 500},
      {'M' , 1000}};
     
    
      char p = 0; // set previous character to 0 
      int sum = 0; // set total sum to 0 also
        
      for (char c : s){
        // scan all the character is string s   
            sum += m[c];
          // add them together (a+b)
        // for case like 4 and 9 I notice a patten that is the the second character will be bigger than the first
        if (p && m[c] > m[p])  // when ( b > a) instead of a+b it will be b-a 
            sum -= 2* m[p];    
            //  I think one way for me to do this is to have the sum together still but minus 2 twice the number in a 
            p = c;
            // then repalce pervious with the current and check it again
        }
        return sum;
}


void input()
{
  string s ;
  cout << "Type in your roman character\n";
  cin >> s;
  if (
    s.find("I") == 0 
  || s.find("V") == 0 
  || s.find("X") == 0 
  || s.find("L") == 0 
  || s.find("C") == 0 
  || s.find("D") == 0 
  || s.find("M") == 0)
  {
    cout << "This will be: " << romanToInt(s) << endl;
  }
  else 
    cout << "What is typed in are not vaild roman character, please try again" << endl;
}


int main() 
{
  input();
}

// finish at 3:45 PM