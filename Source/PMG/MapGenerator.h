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
	//MapGenerator();
	//~MapGenerator();

	bool MakeRooms();		//최대값까지 자동 생성
	bool MakeRooms(int);	//지정값까지 생성 (추가 생성)
	bool addRooms(Room*);

	std::set<Room> GetRoomList() { return RoomList; }


private :
	std::set<Room> RoomList;
	bool MakeRoomsRun(int);
	bool CheckConflict(int, int, int, int);
	bool CheckConflict(Room*);


};
