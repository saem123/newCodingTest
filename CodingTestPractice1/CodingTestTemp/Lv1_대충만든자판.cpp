#pragma once
#include "programmers.h"
#include <vector>
#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;
void Programmers::Lv1_���游������()
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
			//�𸣰ڴ�.. �����
			break;
		}
	}
	return answer;
}