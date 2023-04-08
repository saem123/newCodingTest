#pragma once
#include "programmers.h"
#include <vector>
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
using namespace std;



// section_len은 배열 section의 길이입니다.
int solution(int n, int m, int section[], size_t section_len);

void Programmers::Lv1_덧칠하기()
{

}
int solution(int n, int m, int section[], size_t section_len) {

	int answer = 0, cur = 0;
	for (int i = 0; i < section_len; i++)
	{
		if (cur > section[i]) continue;
		answer++;
		cur = section[i] + m;
	}

	return answer;
}