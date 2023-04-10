#pragma once
#include "programmers.h"
#include <vector>
#include <string>
#include <iostream>
#include <map>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo);
void Programmers::Lv1_�߾�����()
{
	vector<string> name;
	vector<int> yearning;
	vector<vector<string>> photo;
	for (int index = 0; index < 4; index++)
	{
		cout << "�̸��� �Է��ϼ���" << endl;
		string s;
		cin >> s;
		name.push_back(s);

		int n;
		cout << "�̸��� �ش��ϴ� ������ �Է��ϼ���";
		cin>> n;
		yearning.push_back(n);
	}

	photo.push_back(name);
	photo.push_back(name);

	vector<int> answerVector;

	answerVector =
		solution(name, yearning, photo);

	int answer = 0;
	for (int index = 0; index < answerVector.size(); index++)
	{
		answer += answerVector[index];
	}
	cout << answer;

}
vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {

	map<string, int> valueMap;
	vector<int> answer;
	for (int i = 0; i < name.size(); i++)
	{
		valueMap.insert(make_pair( name[i], yearning[i]));
	}

	for (int i = 0; i < photo.size(); i++)
	{
		int value = 0;
		for (int j = 0; j < photo[i].size(); j++)
		{
			if (valueMap.find(photo[i][j]) != valueMap.end())
			{
				value += valueMap[photo[i][j]];
			}
		}
		answer.push_back(value);
	}

	return answer;
}
