// Fill out your copyright notice in the Description page of Project Settings.


#include "WinRTSampleActor.h"

// Sets default values
AWinRTSampleActor::AWinRTSampleActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWinRTSampleActor::BeginPlay()
{
	Super::BeginPlay();

	// キーが -1 の場合、上書きされずに常に新メッセージとして表示される
	const int32 AlwaysAddKey = -1;
	GEngine->AddOnScreenDebugMessage(AlwaysAddKey, 5.0f, FColor::Yellow, "AWinRTSampleActor::BeginPlay");

}

// Called every frame
void AWinRTSampleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWinRTSampleActor::SampleFunc() {
	UE_LOG(LogTemp, Display, TEXT("ログ出力サンプル"));

	const int32 AlwaysAddKey = -1;
	GEngine->AddOnScreenDebugMessage(AlwaysAddKey, 5.0f, FColor::Yellow, "AWinRTSampleActor::SampleFunc");
}

