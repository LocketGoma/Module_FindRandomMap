// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PMG.h"
#include "Room.h"
#include <set>

/**
 * 
 */
class PMG_API MapGenerator
{
public:
	MapGenerator();
	//~MapGenerator();

	bool MakeRooms();		//�ִ밪���� �ڵ� ����
	bool MakeRooms(int);	//���������� ���� (�߰� ����)
	//bool addRooms(Room*);

	std::set<Room> GetRoomList() { return RoomList; }


private :
	std::set<Room> RoomList;
	bool MakeRoomsRun(int);

	//���� �ִ� ��� Room�� ��
	bool CheckConflict(int, int, int, int);
	bool CheckConflict(Room*);
	void ConflictBreak();		//����Ʈ ��ü ���ø�Ʈ �� + ����

	//�������� ���Ұ��ΰ� vs ������ �ϰ� ���Ұ��ΰ�.
	//true ������ �� / false �ϰ� ��
	bool comparisonBeforeCreation;


};
