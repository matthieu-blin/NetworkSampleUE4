#include "MyCharacter.h"
#include "Net/UnrealNetwork.h"
#include "Logging/StructuredLog.h"

// Définit les valeurs par défaut
AMyCharacter::AMyCharacter()
{
	// Définissez ce character pour appeler Tick() à chaque frame. Vous pouvez désactiver cette option pour améliorer les performances si vous n’en avez pas besoin.
	PrimaryActorTick.bCanEverTick = true;
}

// Appelé au début du jeu ou au moment de l'apparition de l'animal.
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Appelé chaque frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Appelé pour lier la fonctionnalité à l’entrée
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AMyStaticMeshActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	DOREPLIFETIME(AMyStaticMeshActor, PouetCPP);
}

void AMyStaticMeshActor::MultiCastCPP_Implementation()
{
	UE_LOGFMT(LogNet, Error, "Un petit truc");
}
