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
	for (int i = 0; i < targets.size(); i++)
	{
		answer.push_back(0);
		for (int j = 0; j < targets[i].size(); j++)
		{
			char c = targets[i][j];
			int type = 101, flag = 1;
			
			for (int k = 0; k < keymap.size(); k++)
			{
				for (int l = 0; l < keymap[k].size(); l++)
				{
					if (keymap[k][l] == c)
					{
						if (type > l + 1)
						{
							type = l + 1;
						}
						flag = 0;
						break;
					}
				}
			}
			if (flag)
			{
				answer[i] = -1;
				break;
			}
			answer[i] += type;
		}
	}
	return answer;
}