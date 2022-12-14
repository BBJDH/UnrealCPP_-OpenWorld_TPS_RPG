#pragma once

#include "CoreMinimal.h"
#include "Weapon/CDoAction.h"
#include "CDoAction_Combo.generated.h"

UCLASS(Blueprintable)
class TPS_RPG_API UCDoAction_Combo : public UCDoAction
{
	GENERATED_BODY()

public:
	FORCEINLINE void EnableCombo() { IsComboEnable = true; }
	FORCEINLINE void DisableCombo() { IsComboEnable = false; }

public:
	void DoAction() override;
	void DoUpperAction() override;
	void Do_R_Action() override;


	void Begin_DoAction() override;
	void End_DoAction() override;

public:
	void OffAttachmentCollision() override;
	void OnAttachmentBeginOverlap(class ACharacter* InAttacker, class UShapeComponent* InCollision, class ACharacter* InOther) override;

private:
	bool IsComboEnable;
	bool bExist;

private:
	TArray<class ACharacter*> HittedCharacters;
};
