#pragma once
#include "programmers.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

vector<int> solution(vector<string> park, vector<string> routes);
void Programmers::Lv1_공원산책()
{
	
}

vector<int> solution(vector<string> park, vector<string> routes) {

	int startX = 0;
	int startY = 0;
	vector<vector<char>> position;
	for (int index = 0; index < park.size(); index++)
	{
		vector<char> xList;
		for (int j = 0; j < park[index].size(); j++)
		{
			if (park[index][j] == 'S')
			{
				startX = j;
				startY = index;
			}
			xList.push_back(park[index][j]);
		}
		position.push_back(xList);
	}
	
	for (int index = 0; index < routes.size(); index++)
	{
		string direction ="";
		string countStr= "";
		int count;
		direction= routes[index].substr(0, 1);
		countStr = routes[index].substr(2, routes.size());
		count = stoi(countStr);
		if (direction == "E")
		{
			if (count + startX >= position[startY].size())
				continue;

			bool isCheck = false;
			for (int j = 0; j < count; j++)
			{
				if (position[startY][startX+j+1] == 'X')
				{
					isCheck = true;
					break;
				}
			}
			
			if( isCheck == false)
				startX = startX + count;
		}
		else if (direction == "W")
		{
			if ( startX-count <0)
				continue;
			bool isCheck = false;
			for (int j = 0; j < count; j++)
			{
				if (position[startY][startX-(j+1)] == 'X')
				{
					isCheck = true;
					break;
				}
			}
			if (isCheck == false)
			startX = startX - count;
		}
		else if (direction == "S")
		{
			if (startY + count >= position.size())
				continue;
			bool isCheck = false;
			for (int j = 0; j < count; j++)
			{
				if (position[startY+j+1][startX] == 'X')
				{
					isCheck = true;
					break;
				}
			}
			if (isCheck == false)
			startY = startY + count;
		}
		else if (direction == "N")
		{
			if (startY - count < 0)
				continue;
			bool isCheck = false;
			for (int j = 0; j < count; j++)
			{
				if (position[startY - (j + 1)][startX] == 'X')
				{
					isCheck = true;
					break;
				}
			}
			if (isCheck == false)
			startY = startY - count;
		}
	}
	vector<int> answer;
	answer.push_back(startY);
	answer.push_back(startX);
	return answer;
}