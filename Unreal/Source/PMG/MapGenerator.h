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

	bool MakeRooms();		//최대값까지 자동 생성
	bool MakeRooms(int);	//지정값까지 생성 (추가 생성)
	//bool addRooms(Room*);

	std::set<Room> GetRoomList() { return RoomList; }


private :
	std::set<Room> RoomList;
	bool MakeRoomsRun(int);

	//현재 있는 모든 Room간 비교
	bool CheckConflict(int, int, int, int);
	bool CheckConflict(Room*);
	void ConflictBreak();		//리스트 전체 컨플릭트 비교 + 삭제

	//생성전에 비교할것인가 vs 생성후 일괄 비교할것인가.
	//true 생성전 비교 / false 일괄 비교
	bool comparisonBeforeCreation;


};
