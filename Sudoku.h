#include <cstdlib>
#include <cstdio>
#include <string>
#include <fstream>

using namespace std;

class Sudoku
{
public:
    void GiveQuestion();
    void ReadIn();
    void Solve();
    void re_find();

private:
    int read[12][12],temp[12][12],ans;
};

