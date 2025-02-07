#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

vector<int> countDistinctColors(int limit, vector<vector<int>> &queries)
{
  unordered_map<int, int> color_map;   // Maps ball labels to their assigned colors
  unordered_map<int, int> color_count; // Tracks count of each color
  unordered_set<int> distinct_colors;  // Tracks distinct colors
  vector<int> result;

  for (const auto &query : queries)
  {
    int x = query[0], y = query[1];

    // If the ball already had a color, update its count
    if (color_map.find(x) != color_map.end())
    {
      int prev_color = color_map[x];
      color_count[prev_color]--;
      if (color_count[prev_color] == 0)
      {
        distinct_colors.erase(prev_color);
      }
    }

    // Assign the new color to the ball
    color_map[x] = y;
    color_count[y]++;
    distinct_colors.insert(y);

    // Append the count of distinct colors to the result
    result.push_back(distinct_colors.size());
  }

  return result;
}

int main()
{
  int limit = 1;
  vector<vector<int>> queries = {{0, 1}, {1, 4}, {1, 1}, {1, 4}, {1, 1}};
  vector<int> result = countDistinctColors(limit, queries);

  for (int count : result)
  {
    cout << count << " ";
  }
  cout << endl;

  return 0;
}