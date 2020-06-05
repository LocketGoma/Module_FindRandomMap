// Fill out your copyright notice in the Description page of Project Settings.


#include "MapGenerator.h"

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
	int makeCount = 0;
	int tryCount = 0;
	int pointNumber[4] = { 0 };
	while (makeCount < runs && tryCount++ < MAX_TRY){		
		pointNumber[0] = rand() % MAX_AXIS + 1;
		pointNumber[1] = rand() % MAX_AXIS + 1;
		pointNumber[2] = pointNumber[0] + (rand() % MAX_LENGTH + MIN_LENGTH);
		pointNumber[3] = pointNumber[1] + (rand() % MAX_LENGTH + MIN_LENGTH);



	}
}
bool MapGenerator::CheckConflict(int lx, int ly, int rx, int ry) {


}