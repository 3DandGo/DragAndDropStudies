// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyWindow.generated.h"

/**
 * 
 */
UCLASS()
class DRAGANDDROPLEARNING_API UMyWindow : public UUserWidget
{
	GENERATED_BODY()
	
public:
	
protected:
	
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation) override;
	virtual void NativeOnDragLeave(const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
	
	FReply CustomDetectDrag(const FPointerEvent& InMouseEvent, UWidget* WidgetDetectingDrag, FKey DragKey);
	
	virtual void NativeOnInitialized() override;
};
