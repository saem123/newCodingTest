#pragma once
#include "programmers.h"
#include <vector>
#include <string>
#include <iostream>
#include <map>
using namespace std;
vector<int> solution(vector<string> wallpaper);
void Programmers::Lv1_바탕화면정리()
{

}
vector<int> solution(vector<string> wallpaper) {

	int xLength = wallpaper[0].size();
	int yLength = wallpaper.size();

	int minX = xLength;
	int minY = yLength;
	int maxX = 0;
	int maxY = 0;
	for (int index = 0; index < wallpaper.size(); index++)
	{
		for (int j = 0; j < wallpaper[index].size(); j++)
		{
			char ctr = wallpaper[index][j];

			if (ctr == '#')
			{
				if (j < minX)
				{
					minX = j;
				}
				if (index < minY)
				{
					minY = index;
				}
				if (j > maxX)
				{
					maxX = j;
				}
				if (index > maxY)
				{
					maxY = index;
				}
			}
		}
	}

	vector<int> answer;
	
	answer.push_back(minY);
	answer.push_back(minX);
	answer.push_back(maxY+1);
	answer.push_back(maxX+1);
	return answer;
}