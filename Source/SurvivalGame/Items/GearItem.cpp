// Fill out your copyright notice in the Description page of Project Settings.


#include "GearItem.h"
#include "Player/SurvivalCharacter.h"

UGearItem::UGearItem()
{
	DamageDefenseMultiplier = 0.1f;
}

bool UGearItem::Equip(class ASurvivalCharacter* Character)
{
	bool bEquipSuccessful = Super::Equip(Character);

	if (bEquipSuccessful && Character)
	{
		Character->EquipGear(this);
	}

	return bEquipSuccessful;
}

bool UGearItem::UnEquip(class ASurvivalCharacter* Character)
{
	bool bUnEquipSuccessful = Super::UnEquip(Character);

	if (bUnEquipSuccessful && Character)
	{
		Character->UnEquipGear(Slot);
	}

	return bUnEquipSuccessful;
}
