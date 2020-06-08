// Fill out your copyright notice in the Description page of Project Settings.


#include "MapGenerator.h"

MapGenerator::MapGenerator() :
comparisonBeforeCreation(false) {
	;
}

bool MapGenerator::MakeRooms(int max) {
	if (max < 1)
		max = MAX_ROOMS;

	auto result = (MakeRoomsRun(max));
	return result;
}
bool MapGenerator::MakeRooms() {
	auto result = (MakeRoomsRun(MAX_ROOMS));
	return result;
}
bool MapGenerator::MakeRoomsRun(int runs) {	
	int tryCount = 0;
	int pointNumber[4] = { 0 };
	while (RoomList.size() < runs && tryCount++ < MAX_TRY){		
		pointNumber[0] = rand() % MAX_AXIS + 1;
		pointNumber[1] = rand() % MAX_AXIS + 1;
		pointNumber[2] = pointNumber[0] + (rand() % MAX_LENGTH + MIN_LENGTH);
		pointNumber[3] = pointNumber[1] + (rand() % MAX_LENGTH + MIN_LENGTH);

		if (comparisonBeforeCreation == true) {
			if (CheckConflict(pointNumber[0], pointNumber[1], pointNumber[2], pointNumber[3]) == true) {
				continue;
			}
		}

		Room* temp = new Room(pointNumber[0], pointNumber[1], pointNumber[2], pointNumber[3]);
		RoomList.insert(*temp);		
	}
	if (comparisonBeforeCreation == false) {
		ConflictBreak();
	}
	return tryCount >= MAX_TRY ? false : true;
}
bool MapGenerator::CheckConflict(int lx, int ly, int rx, int ry) {
	for each (auto rmOrigin in RoomList) {
		if (rmOrigin.IsConflict(lx,ly,rx,ry))
			return true;
	}

}
bool MapGenerator::CheckConflict(Room* rm) {
	for each (auto rmOrigin in RoomList) {
		if (rmOrigin.IsConflict(*rm))
			return true;
	}
}
void MapGenerator::ConflictBreak() {
	std::set<Room>::iterator firstIter;
	std::set<Room>::iterator secondIter;
	
	for (firstIter = RoomList.begin(); firstIter != RoomList.end(); ++firstIter) {
		for (secondIter = firstIter; secondIter != RoomList.end(); ++secondIter) {
			secondIter++;

			if (secondIter->IsConflict(*firstIter)) {
				RoomList.erase(secondIter);
				break;
			}
		}
	}
}