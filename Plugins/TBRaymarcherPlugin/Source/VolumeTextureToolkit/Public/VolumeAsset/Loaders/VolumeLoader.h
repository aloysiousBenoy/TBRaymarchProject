#include "CoreMinimal.h"
#include "VolumeAsset/VolumeInfo.h"

#include "VolumeLoader.generated.h"

UINTERFACE(BlueprintType)
class VOLUMETEXTURETOOLKIT_API UVolumeLoader : public UInterface
{
	GENERATED_BODY()
};

/// Interface for all volume loaders.
/// Implement this to make classes that can create UVolumeAssets from arbitrary volumetric formats.
class VOLUMETEXTURETOOLKIT_API IVolumeLoader
{
	GENERATED_BODY()
public:
	virtual FVolumeInfo ParseImageInfoFromHeader() = 0;
	
};