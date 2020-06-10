// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <vector>

/**
 * 
 */
class PMG_API Room
{
public:
	Room();
	Room(int, int, int, int);

	void Maker(int, int, int, int);
	bool IsConflict(const Room& rm) const;
	bool IsConflict(int, int, int, int) const;

	/*
	~Room();
	*/

	std::vector<int> GetLeftData() const;	//좌상단 X,Y
	std::vector<int> GetRightData() const;	//우하단 X,Y

	//연산자 오버로딩.
	friend bool operator == (const Room& rm1, const Room& rm2) {
		return (rm1.GetLeftData().at(0) == rm2.GetLeftData().at(0) && rm1.GetLeftData().at(1) == rm2.GetLeftData().at(1) && rm1.GetRightData().at(0) == rm2.GetRightData().at(0) && rm1.GetRightData().at(1) == rm2.GetRightData().at(1)) ? true : false;
	}

	friend bool operator != (const Room& rm1, const Room& rm2) {
		return !(rm1 == rm2);
	}

	friend bool operator < (const Room& rm1, const Room& rm2) {
		return (rm1.GetLeftData().at(0) < rm2.GetLeftData().at(0) || rm1.GetLeftData().at(1) < rm2.GetLeftData().at(1));
	}
	friend bool operator > (const Room& rm1, const Room& rm2) {
		return (rm1.GetLeftData().at(0) > rm2.GetLeftData().at(0) || rm1.GetLeftData().at(1) > rm2.GetLeftData().at(1));
	}


private :
	int Axis_LX;				//좌측 상단 X
	int Axis_LY;				//좌측 상단 Y
	int Axis_RX;				//우측 하단 X
	int Axis_RY;				//우측 하단 Y

	//안쓰는거같아서 일단 날리기
	//float Center_X;				//중심 X
	//float Center_Y;				//중심 Y

	//int width;					//가로 길이
	//int height;					//세로 길이
	//실제로 들어가 있어야할게...
	//room_no + 좌표 4개 + 중심축 2개 + 길이 2개 = 4 + 16 + 8 + 8 = 36


};
