// Gabit


#include "test.h"

// Sets default values
Atest::Atest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void Atest::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Сәлем Әлем!"));
	UE_LOG(LogTemp, Warning, TEXT("Hello World!"));
	UE_LOG(LogTemp, Warning, TEXT("Привет Мир!"));	
}

// Called every frame
void Atest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

