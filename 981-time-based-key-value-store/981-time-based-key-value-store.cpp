#include <algorithm>
#include <bits/stdc++.h>
#include <cstddef>
#include <cstdio>
#include <queue>
#include <string>
#include <vector>
#define inf 100000
using namespace std;

class TimeMap {
public:
  map<string, map<int, string>> mp;
  TimeMap() {}
  void set(string key, string value, int timestamp) {
    mp[key][timestamp] = value;
  }

  string get(string key, int timestamp) {
    while (timestamp) {
      if (mp[key].count(timestamp))
        return mp[key][timestamp];
      timestamp--;
    }
    return "";
  }
};

// int main() {}