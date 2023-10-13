// Fill out your copyright notice in the Description page of Project Settings.


#include "CopyActor.h"

// Sets default values
ACopyActor::ACopyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACopyActor::BeginPlay()
{
	Super::BeginPlay();
	Canvas = NewObject<UCanvas>();
	UKismetSystemLibrary::PrintString(this, "hello world");
}

// Called every frame
void ACopyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
/*
	//this will copy all the pixels:
	UTextureRenderTarget2D* RenderTarget = NewObject<UTextureRenderTarget2D>();
	RenderTarget->InitAutoFormat(1920, 1080);
	TArray<FColor> PixelData;
	PixelData.Init(FColor::Black, RenderTarget->SizeX * RenderTarget->SizeY);
	FRenderTarget* RenderTargetResource = RenderTarget->GameThread_GetRenderTargetResource();
	bool success = RenderTargetResource->ReadPixels(PixelData);

	if (success)
	{
		UKismetSystemLibrary::PrintString(this, "success");
	}
	else
	{
		UKismetSystemLibrary::PrintString(this, "failed");
	}
	// Create a new UTexture2D object to hold the copied pixel data
	UTexture2D* CopiedTexture = UTexture2D::CreateTransient(RenderTarget->SizeX, RenderTarget->SizeY);
	CopiedTexture->CompressionSettings = TextureCompressionSettings::TC_VectorDisplacementmap;
	// If the texture were not disabled for sRGB, the colors in the texture would be gamma encoded.
	// This would mean that the colors in the texture would not be displayed correctly in the final video frame buffer.
	CopiedTexture->SRGB = 0;
	// Adding an object to the root set ensures that it will not be garbage collected, the texture will
	// remain in memory until it is explicitly removed from the root set or the application exits
	CopiedTexture->AddToRoot();

	// Lock the texture to allow for direct memory access
	FTexture2DMipMap& Mip = CopiedTexture->PlatformData->Mips[0];
	void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);

	// Copy the pixel data into the texture
	FMemory::Memcpy(Data, PixelData.GetData(), PixelData.Num() * sizeof(FColor));

	// Unlock the texture
	Mip.BulkData.Unlock();

	// Update the texture's resource
	CopiedTexture->UpdateResource();

	// Overlay the copied pixels onto the final video frame buffer
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (PC)
	{
		AMyHUD* MyHUD = Cast<AMyHUD>(PC->GetHUD());
		if (MyHUD)
		{
			// Now you can use HUD->Canvas
			FCanvasTileItem TileItem(FVector2D(100, 100), CopiedTexture->Resource, FVector2D(RenderTarget->SizeX / 2, RenderTarget->SizeY / 2), FLinearColor::White);
			TileItem.BlendMode = SE_BLEND_Translucent;
			MyHUD->GetCanvas()->DrawItem(TileItem);
		}
	}
	
	/*
	// this will copy the first 20 lines of pixels:
	UTextureRenderTarget2D* RenderTarget = NewObject<UTextureRenderTarget2D>();
	RenderTarget->InitAutoFormat(1920, 1080);
	TArray<FColor> PixelData;
	PixelData.Init(FColor::Black, RenderTarget->SizeX * 20);
	FRenderTarget* RenderTargetResource = RenderTarget->GameThread_GetRenderTargetResource();
	bool success = RenderTargetResource->ReadPixels(PixelData);
	if (success)
	{
		UKismetSystemLibrary::PrintString(this, "success");
	}
	else
	{
		UKismetSystemLibrary::PrintString(this, "failed");
	}
	// Create a new UTexture2D object to hold the copied pixel data
	UTexture2D* CopiedTexture = UTexture2D::CreateTransient(RenderTarget->SizeX, 20);
	CopiedTexture->CompressionSettings = TextureCompressionSettings::TC_VectorDisplacementmap;
	// If the texture were not disabled for sRGB, the colors in the texture would be gamma encoded.
	// This would mean that the colors in the texture would not be displayed correctly in the final video frame buffer.
	CopiedTexture->SRGB = 0;
	// Adding an object to the root set ensures that it will not be garbage collected, the texture will
	// remain in memory until it is explicitly removed from the root set or the application exits
	CopiedTexture->AddToRoot();

	// Lock the texture to allow for direct memory access
	FTexture2DMipMap& Mip = CopiedTexture->PlatformData->Mips[0];
	void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);

	// Copy the pixel data into the texture
	FMemory::Memcpy(Data, PixelData.GetData(), PixelData.Num() * sizeof(FColor));

	// Unlock the texture
	Mip.BulkData.Unlock();

	// Update the texture's resource
	CopiedTexture->UpdateResource();

	// Overlay the copied pixels onto the final video frame buffer
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (PC)
	{
		AMyHUD* MyHUD = Cast<AMyHUD>(PC->GetHUD());
		if (MyHUD)
		{
			// Now you can use HUD->Canvas
			FCanvasTileItem TileItem(FVector2D(100, 100), CopiedTexture->Resource, FVector2D(RenderTarget->SizeX / 2, 20), FLinearColor::White);
			TileItem.BlendMode = SE_BLEND_Translucent;
			MyHUD->GetCanvas()->DrawItem(TileItem);
		}
	}
*/
}

