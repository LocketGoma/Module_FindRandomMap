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

	std::vector<int> GetLeftData() const;	//�»�� X,Y
	std::vector<int> GetRightData() const;	//���ϴ� X,Y

	//������ �����ε�.
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
	int Axis_LX;				//���� ��� X
	int Axis_LY;				//���� ��� Y
	int Axis_RX;				//���� �ϴ� X
	int Axis_RY;				//���� �ϴ� Y

	//�Ⱦ��°Ű��Ƽ� �ϴ� ������
	//float Center_X;				//�߽� X
	//float Center_Y;				//�߽� Y

	//int width;					//���� ����
	//int height;					//���� ����
	//������ �� �־���Ұ�...
	//room_no + ��ǥ 4�� + �߽��� 2�� + ���� 2�� = 4 + 16 + 8 + 8 = 36


};
