#pragma once
#include "programmers.h"
#include <vector>
#include <string>
#include <vector>
#include <map>
#include <iostream>


using namespace std;


/*
�ῡ���� �ų� �޸��� ���ְ� �����ϴ�. �ؼ������� �������� �ڱ� �ٷ� ���� ������ �߿��� �� �߿��� ������ �̸��� �θ��ϴ�. 
���� ��� 1����� 3����� "mumu", "soe", "poe" �������� ������� �޸��� ���� ��, 
�ؼ����� "soe"������ �ҷ��ٸ� 2���� "soe" ������ 1���� "mumu" ������ �߿��ߴٴ� ���Դϴ�.
�� "soe" ������ 1��, "mumu" ������ 2������ �ٲ�ϴ�.

�������� �̸��� 1����� ���� ��� ������� ��� ���ڿ� �迭 players�� �ؼ����� �θ� �̸��� ���� ���ڿ� �迭 callings�� �Ű������� �־��� ��, 
���ְ� ������ �� �������� �̸��� 1����� ��� ������� �迭�� ��� return �ϴ� solution �Լ��� �ϼ����ּ���.
*/
void Programmers::Lv1_�޸������()
{
	vector<string> players, vector<string> callings;


	
}
vector<string> solution(vector<string> players, vector<string> callings) {
	vector<string> answer;

	map<string, int> playerMap;

	for (int index = 0; index < players.size(); index++)
	{
		playerMap.insert( make_pair(players[index],index ));
	}
	for (int j = 0; j < callings.size(); j++)
	{
		int a = playerMap[callings[j]];
		string tmp = players[a];
		players[a] = players[a - 1];
		players[a - 1] = tmp;
		playerMap[players[a]] = a;
		playerMap[players[a - 1]] = a - 1;
	}	
	
	
	return players;
}