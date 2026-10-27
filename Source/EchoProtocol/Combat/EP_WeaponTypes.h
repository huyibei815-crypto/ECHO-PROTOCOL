#pragma once

#include "CoreMinimal.h"
#include "EP_WeaponTypes.generated.h"

/**
 * 武器类型。
 *
 * 用于 AnimBP 选择持枪姿势、移动动画等。
 * 具体武器的射击与换弹逻辑由 WeaponBase 及其子类实现。
 */
UENUM(BlueprintType)
enum class EWeaponType : uint8
{
    None        UMETA(DisplayName = "None"),
    Pistol      UMETA(DisplayName = "Pistol"),
    Rifle       UMETA(DisplayName = "Rifle"),
    Shotgun     UMETA(DisplayName = "Shotgun"),
    SMG         UMETA(DisplayName = "SMG"),
    SniperRifle UMETA(DisplayName = "Sniper Rifle"),
    Launcher    UMETA(DisplayName = "Launcher"),
    Melee       UMETA(DisplayName = "Melee")
};