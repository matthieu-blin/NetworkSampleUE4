#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Engine/StaticMeshActor.h"
#include "MyCharacter.generated.h"

UCLASS()
class NETWORKSAMPLE_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Définit les valeurs par défaut des propriétés de ce character
	AMyCharacter();

protected:
	// Appelé au début du jeu ou au moment de l'apparition de l'animal.
	virtual void BeginPlay() override;

public:
	// Appelé chaque frame
	virtual void Tick(float DeltaTime) override;

	// Appelé pour lier la fonctionnalité à l’entrée
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};

UCLASS()
class AMyStaticMeshActor : public AStaticMeshActor
{
	GENERATED_BODY()

public :

	UPROPERTY(Replicated, BlueprintReadWrite)
	int PouetCPP = 0;

	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, Category = "Online|MyStaticMeshActor")
	void MultiCastCPP();

};
