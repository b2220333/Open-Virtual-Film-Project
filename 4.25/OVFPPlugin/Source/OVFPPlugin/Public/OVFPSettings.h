// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/DeveloperSettings.h"
#include "OVFPSettings.generated.h"

/**
 * Configure the Python plug-in.
 */
UCLASS(config = Engine, defaultconfig)
class UOVFPSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UOVFPSettings();

#if WITH_EDITOR
	
	//~ UDeveloperSettings interface
	virtual FText GetSectionText() const override;
#endif
	/*
	UPROPERTY(config, EditAnywhere, Category = Python, meta = (ConfigRestartRequired = true, MultiLine = true))
		TArray<FString> StartupScripts;

	UPROPERTY(config, EditAnywhere, Category = Python, meta = (ConfigRestartRequired = true, RelativePath))
		TArray<FDirectoryPath> AdditionalPaths;

	UPROPERTY(config, EditAnywhere, Category = Python, meta = (ConfigRestartRequired = true))
		bool bDeveloperMode;

	UPROPERTY(config, EditAnywhere, Category = PythonRemoteExecution, meta = (DisplayName = "Enable Remote Execution?"))
		bool bRemoteExecution;
	*/
	/** The multicast group endpoint (in the form of IP_ADDRESS:PORT_NUMBER) that the UDP multicast socket should join */
	
	UPROPERTY(config, EditAnywhere, Category = OutputSettings, AdvancedDisplay, meta = (DisplayName = "Path to Blender Installation"))
		FDirectoryPath OVFPBlenderPath;
	
	UPROPERTY(config, EditAnywhere, Category = DynamicSetlist, meta = (DisplayName = "Directories where master levels may be found"))
		TArray<FName> OVFPMLPaths;
	
	UPROPERTY(config, EditAnywhere, Category = DynamicSetlist, meta = (DisplayName = "Master Level Prefixes"))
		TArray<FName> OVFPMLPrefix;

	UPROPERTY(config, EditAnywhere, Category = DynamicSetlist, meta = (DisplayName = "Directories where lighting template levels may be found"))
		TArray<FName> OVFPLSLLocations;

	UPROPERTY(EditAnywhere, Category = OVFP, meta = (DisplayName = "Default Scale Cube"))
		UStaticMesh* OVFPdefaultScaleCube;
	
};