// Fill out your copyright notice in the Description page of Project Settings.


#include "Room.h"

Room::Room() :
	Axis_LX(0),
	Axis_LY(0),
	Axis_RX(0),
	Axis_RY(0),
	Center_X(0),
	Center_Y(0),
	width(0),
	height(0)
{
}
Room::Room(int lx, int ly, int rx, int ry) {
	Axis_LX = lx;
	Axis_LY = ly;
	Axis_RX = rx;
	Axis_RY = ry;
	Center_X = (lx + rx) / 2;
	Center_Y = (ly + ry) / 2;
	width = rx - lx;
	height = ry - ly;
}


Room::~Room()
{
}

//좌상단값 리턴 : 0 - X // 1 - Y
std::vector<int> Room::GetLeftData() const {
	std::vector<int> v{ Axis_LX,Axis_LY };
	return v;
}
//우하단값 리턴 : 0 - X // 1 - Y
std::vector<int> Room::GetRightData() const {
	std::vector<int> v{ Axis_LX,Axis_LY };
	return v;
}
