#ifndef A_STAR_H
#define A_STAR_H
#include <vector>
#include <string>
using std::vector;
using std::string;

enum class State {kEmpty, kObstacle, kClosed, kPath, kStart, kFinish};

vector<State> ParseLine(string line);
vector<vector<State>> ReadBoardFile(string path);
bool Compare(const vector<int> a, const vector<int> b);
void CellSort(vector<vector<int>> *v);
int Heuristic(int x1, int y1, int x2, int y2);  
bool CheckValidCell(int x, int y, vector<vector<State>> &grid);
void AddToOpen(int x, int y, int g, int h, vector<vector<int>> &openlist, vector<vector<State>> &grid);
void ExpandNeighbors(const vector<int> &current, int goal[2], vector<vector<int>> &openlist, vector<vector<State>> &grid);
vector<vector<State>> Search(vector<vector<State>> grid, int init[2], int goal[2]);
void PrintBoard(const vector<vector<State>> board);


#endif
