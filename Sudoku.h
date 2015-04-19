#include <iostream>
using namespace std;
class Sudoku {
  public:
 Sudoku();
void GiveQuestion();
void ReadIn();

void Solve();
private:
int read[12][12];
  };

