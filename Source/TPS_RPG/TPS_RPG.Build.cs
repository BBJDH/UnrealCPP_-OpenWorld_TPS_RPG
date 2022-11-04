// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TPS_RPG : ModuleRules
{
	public TPS_RPG(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		PublicIncludePaths.Add(ModuleDirectory);
		//���� ���丮 �߰�,  CPP_Basic ���ذ�θ� ���Խ�Ų��
	}
}