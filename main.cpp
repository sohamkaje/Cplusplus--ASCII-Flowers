/**------------------------------------------
    Program 1: ASCII Flowers
    Prompt for the number of flower layers and display

    Course: CS 141, Fall 2023
    System: Linux_x86_64 and C++
    Author: Soham Kaje, Starter code provided by George Maratos and David Hayes
 ---------------------------------------------**/

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  // display the prompt to the user
  cout << "Program 1: ASCII Flowers\n"
       << "Choose from the following options:\n"
       << "   1. Display the HELLO graphic\n"
       << "   2. Display The Flower\n"
       << "   3. Exit the program\n"
       << "Your choice -> ";

  // read in the user's choice
  int menu_option;
  cin >> menu_option;

  // handle option to quit
  if (menu_option == 3) {
    exit(0);
  }

  // handle the HELLO graphic choice
  if (menu_option == 1) {
    char frame;
    cout << "Enter your frame character: ";
    cin >> frame;
    // top border
    cout << endl;
    for (int i = 0; i < 2; i++) {
      cout << setfill(frame) << setw(36) << ' ' << endl;
    }
    // message
    cout << setfill(frame) << setw(3) << right << " "
         << "** ** ***** **    **    *****" << setfill(frame) << setw(3) << left
         << " " << endl
         << setfill(frame) << setw(3) << right << " "
         << "** ** ***** **    **    *****" << setfill(frame) << setw(3) << left
         << " " << endl
         << setfill(frame) << setw(3) << right << " "
         << "** ** **    **    **    ** **" << setfill(frame) << setw(3) << left
         << " " << endl
         << setfill(frame) << setw(3) << right << " "
         << "***** ***** **    **    ** **" << setfill(frame) << setw(3) << left
         << " " << endl
         << setfill(frame) << setw(3) << right << " "
         << "***** ***** **    **    ** **" << setfill(frame) << setw(3) << left
         << " " << endl
         << setfill(frame) << setw(3) << right << " "
         << "** ** **    **    **    ** **" << setfill(frame) << setw(3) << left
         << " " << endl
         << setfill(frame) << setw(3) << right << " "
         << "** ** ***** ***** ***** *****" << setfill(frame) << setw(3) << left
         << " " << endl
         << setfill(frame) << setw(3) << right << " "
         << "** ** ***** ***** ***** *****" << setfill(frame) << setw(3) << left
         << " " << endl
         << right;
    // bottom border
    for (int i = 0; i < 2; i++) {
      cout << setfill(frame) << setw(36) << " " << endl;
    }
  }

  // handle the floral pattern
  if (menu_option == 2) {
    int flowerheads;
    int i;
    int j;
    int a;
    int offset;
    char colon;
    char space;
    int colonNum;

    cout << "Enter number of sections: ";
    cin >> flowerheads;
    cout << endl;
    colon = ':';
    space = ' ';
    colonNum = 0;

    // for loop to draw the requested number of sections for the flower
    for (i = 0; i < flowerheads; ++i) {
      cout << setfill(space) << setw((flowerheads * 2) - (flowerheads - 1) + 2)
           << "---" << endl;
      offset = ((flowerheads * 2) - (flowerheads - 1) - 1);
      // for loop to draw each section of the flower
      for (j = 0; j < (2 * i + 1); ++j) {
        // if statement to draw first half of section
        if (i > j) {
          cout << setfill(space) << setw(offset) << "{";
          cout << setfill(colon) << setw(colonNum + 4) << "}" << endl;
          offset -= 1;
          colonNum += 2;
        } // if statement to draw middle row of section
        else if (i == j) {
          cout << setfill(space) << setw(offset) << "{";
          ;
          cout << setfill(colon) << setw((colonNum + 4) / 2) << "@";
          cout << setfill(colon) << setw((colonNum + 4) / 2) << "}" << endl;
          offset += 1;
        } // if statement to draw second half of section
        else if (i < j) {
          cout << setfill(space) << setw(offset) << "{";
          cout << setfill(colon) << setw(colonNum + 2) << "}" << endl;
          colonNum -= 2;
          offset += 1;
        }
      }
    }
    cout << setfill(space) << setw((flowerheads * 2) - (flowerheads - 1) + 2) << "---" << endl;

    // for loop to draw the stem of the flower
    for (a = 0; a < (flowerheads); ++a) {
      // if else statement to decide whether stem points out to left or right using module
      if (a % 2 == 0) {
        cout << setfill(space)
             << setw((flowerheads * 2) - (flowerheads - 1) + 2) << "|/" << endl;
        cout << setfill(space)
             << setw((flowerheads * 2) - (flowerheads - 1) + 1) << "|" << endl;
      } 
      else if (a % 2 == 1) {
        cout << setfill(space)
             << setw((flowerheads * 2) - (flowerheads - 1) + 1) << "\\|"
             << endl;
        cout << setfill(space)
             << setw((flowerheads * 2) - (flowerheads - 1) + 1) << "|" << endl;
      }
    }
  }
  return 0;
}