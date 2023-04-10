#pragma once
#include "programmers.h"
#include <vector>
#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;
void Programmers::Lv1_대충만든자판()
{

}

vector<int> solution(vector<string> keymap, vector<string> targets) {
	vector<int> answer;

	map<string, int> dic;


	for (int index = 0; index < targets.size(); index++)
	{
		dic.insert(make_pair(targets[index], index));
	}

	
	for (int i = 0; i < keymap.size(); i++)
	{
		for (int j = 0; j < keymap[i].size(); j++)
		{
			//모르겠다.. 더고민좀
			break;
		}
	}
	return answer;
}