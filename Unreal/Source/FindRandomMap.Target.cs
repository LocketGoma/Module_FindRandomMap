// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class FindRandomMapTarget : TargetRules
{
	public FindRandomMapTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("FindRandomMap");
		ExtraModuleNames.Add("PMG");				//길 생성 알고리즘
		ExtraModuleNames.Add("RoadFC");				//길 찾기 알고리즘
	}
}
